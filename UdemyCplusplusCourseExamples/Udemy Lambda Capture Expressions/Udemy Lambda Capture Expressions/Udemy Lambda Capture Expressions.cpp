// Udemy Lambda Capture Expressions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int one = 1;
    int two = 2;
    int three = 3;

    // Capture one and two by value
    [one, two]() {cout << one << "," << two << endl; }(); //square brackets are used to capture variables

    // Capture all local variables by value
    [=]() {cout << one << ", " << two << endl; } ();

    // Default capture all local variables by value, but capture three by reference
    [=, &three]() {three = 7; cout << one << "," << two << endl; }();
    cout << three << endl;

    // Default capture all local variables by reference
    [&]() {three = 7; two = 8; cout << one << "," << two << endl; }();
    cout << two << endl;

    // Default capture all local variables by reference, but two and three by value
    [&, two, three]() {one = 100; cout << one << "," << two << endl; }();
    cout << one << endl;

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
