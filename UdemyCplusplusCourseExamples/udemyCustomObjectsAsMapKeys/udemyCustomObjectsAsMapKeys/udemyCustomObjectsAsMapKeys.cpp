// udemyCustomObjectsAsMapKeys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

class Person
{
public:
	Person() : name(""), age(0) {};

	Person(const Person& other) {
		cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) : name(name), age(age) {}

	void print() const {
		cout << name << ": " << age << flush;
	}
	
	bool operator<(const Person& other) const {
		if (name == other.name)
		{
			return age < other.age;
		}
		else {
			return name < other.name;
		}
	}
private:
	string name;
	int age;
};



int main()
{
		
	map<Person, int> people;

	people[Person("Mike", 40)] = 40;
	people[Person("Mike", 440)] = 123;
	people[Person("Sue", 30)] = 30;
	people[Person("Raj", 20)] = 20;

	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
