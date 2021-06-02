// UdemySets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
using namespace std;

class Test {
    int id;
    string name;

public:
    Test(int it, string name) : id(id), name(name) {

    }

    void print() const {
        cout << id << ": " << name << endl;
    }

    bool operator< (const Test &other) const {
        return name < other.name;
    }
};

int main()
{
    set<int> numbers;

    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(30);
    numbers.insert(20);

    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++ )
    {
        cout << *it << endl;
    }

    set<int>::iterator itFind = numbers.find(30);

    if (itFind != numbers.end()) {
        cout << "Found: " << *itFind << endl;
    }

    if (numbers.count(30))
    {
        cout << "number found" << endl;
    }

    set<Test> tests;
    tests.insert(Test(10, "Mike"));
    tests.insert(Test(30, "Joe"));
    tests.insert(Test(333, "Joe"));
    tests.insert(Test(20, "Sue"));

    for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++)
    {
        it->print();
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
