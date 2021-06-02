// UdemyComplexNumberClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
// implement a custom complex number class that can be used to overload operators

#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main()
{
    Complex c1(2, 3);
    Complex c2(c1);
    //Complex c2 = c1; //copy initialization

   // Complex c3 = c2;

    Complex c3;
    c3 = c2;

    cout << c2 << ":" << c3 <<endl;

    // now with overloaded plus operator
    cout << c1 + c2 << endl;

    Complex c4(4, 2);
    Complex c5 = c4 + 7;
    cout << c5 << endl;

    Complex c6(1, 7);
    cout << 3.2 + c6 << endl;
    cout << 7 + c1 + c2 + 8 + 9 + c6 << endl;

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
