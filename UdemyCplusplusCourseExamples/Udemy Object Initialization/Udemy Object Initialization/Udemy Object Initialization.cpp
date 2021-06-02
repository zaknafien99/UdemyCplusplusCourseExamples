// Udemy Object Initialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Test {
    int id{ 3 };
    string name{"Mike"};

public:
    Test() = default;
    Test(const Test& other) = default;
    Test& operator=(const Test& other) = default;

    Test(int id) : 
        id(id) {

    }
    void print() {
        cout << id << ": " << name << endl;
    }
};

int main()
{
    Test test;
    test.print();

    Test test1(77);
    test1.print();

    Test test2 = test1;
    test2 = test;

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
