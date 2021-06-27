// Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


using namespace std;

#include <iostream>



int main() {
    double prev1 = 1, prev2 = 1, next;
    printf("%2.0f\n%2.0f\n", prev1, prev2);     //Display the first two terms

    do {
        next = prev1 + prev2;       //Compute the next term
        printf("%2.0f\n", next);    // display
        prev1 = prev2;
        prev2 = next;               // advance the saved terms
    } while (next < 100.0);
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
