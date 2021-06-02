// Udemy Lambda Expressions and Return Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void testGreet(void (*greet)(string)) {
    greet("Bob");
}

void runDivide(double (*divide)(double a, double b)) {
    auto rval = divide(9, 3);
    cout << rval << endl;
}

int main()
{
    auto pGreet = [](string name) {cout << "Hello " << name << endl; };

    pGreet("Mike");

    testGreet(pGreet);

    auto pDivide = [](double a, double b) -> double {   //-> double trailing return type will allow the return 0;

        if (b == 0.0) {
            return 0;
        }
        return a / b;
    };

    cout << pDivide(10.0, 5.0) << endl;
    cout << pDivide(10.0, 0) << endl;

    runDivide(pDivide);

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
