// UdemySortingVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

using namespace std;

class Test {
    int id;
    string name;

public:
    Test(int id, string name) : id(id), name(name) {}

    void print() {
        cout << id << ": " << name << endl;
    }
};

int main()
{
    vector<Test> tests;
    tests.push_back(Test(5, "Mike"));
    tests.push_back(Test(10, "Sue"));
    tests.push_back(Test(7, "Raj"));
    tests.push_back(Test(3, "Vicky"));

   

    for (int i = 0; i < tests.size(); i++)
    {
        tests[i].print();
    }

    sort(tests.begin(), tests.end());

    for (int i = 0; i < tests.size(); i++)
    {
        tests[i].print();
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
