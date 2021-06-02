// UdemyFunctorsTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
// functors are a way of passing blocks of code to functions (an alternative to function pointers)


#include <iostream>
using namespace std;

struct Test {
    virtual bool operator()(string& text) = 0;
};

struct MatchTest : public Test
{
    virtual bool operator()(string &text) {
        return text == "lion";
    }
}; // this is a functor, which is a class or a struct that overloads the () operator

void check(string text, Test &test) {
    if (test(text))
    {
        cout << "Text matches!" << endl;
    }
    else {
        cout << "No match." << endl;
    }
}

int main()
{
    MatchTest pred;

    string value = "lion";

    MatchTest m;

    check("liond", m);

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
