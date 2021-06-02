// udemyCustomObjectsAsMapValues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Person
{
public:
	Person() : name(""), age(0) {};
	~Person();

	Person(const Person& other) {
		cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) : name(name), age(age) {}

	void print()
	{
		cout << name << ":" << age << endl;
	}

private:
	string name;
	int age;
};


Person::~Person()
{
}

int main()
{
	map<int, Person> people;

	people[0] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[2] = Person("Raj", 20);

	people.insert(make_pair(55, Person("Bob", 45)));
	people.insert(make_pair(55, Person("Sue", 24)));

	for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->first << ": " << flush;
		it->second.print();
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
