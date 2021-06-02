// UdemyOperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Test
{
public:
	Test() : id(0), name("") {
	};
	

	Test(int id, string name) : id(id), name(name) {

	}

	void print() {
		cout << id << ": " << name << endl;
	}

	const Test& operator=(const Test& other) {
		
		cout << "Assignment running" << endl;
		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test& other) {
		cout << "copy constructor running" << endl;
		id = other.id;
		name = other.name;
	}

	friend ostream& operator<<(ostream& out, const Test& test) {
		out << test.id << ": " << test.name;
		return out;
	}

private:
	int id;
	string name;
};



int main()
{
	Test test1(10, "Mike");
	cout << "Print test1 " << flush;
	test1.print();

	Test test2(20, "Bob");
	
	test2 = test1;
	cout << "Print test2: " << flush;
	test2.print();

	Test test3;
	test3 = test2 = test1;

	test3.operator=(test2);
	test3.print();

	cout << endl;
	// Copy initialization
	Test test4 = test1;
	test4.print();

	cout << test1 << test2 << endl;

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
