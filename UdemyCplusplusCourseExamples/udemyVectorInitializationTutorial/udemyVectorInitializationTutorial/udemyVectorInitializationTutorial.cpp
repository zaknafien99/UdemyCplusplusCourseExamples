// udemyVectorInitializationTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int value{ 5 };
    cout << value << endl;

    string text{ "Hello" };
    cout << text << endl;

    int numbers[]{ 1, 2, 4 };
    cout << numbers[1] << endl;

    int* pInts = new int[] {1, 2, 3};
    cout << pInts[1] << endl;
    delete pInts;

    int value1{};

    cout << value1 << endl;

    int* pSomething{};
    cout << pSomething << endl;

    int numbers1[5]{};
    cout << numbers1[1] << endl;

    struct MyStruct
    {
        int value;
        string text;
    } s1{ 5, "Hi" };

    cout << s1.text << endl;

    vector<string> strings{"one", "two", "three"};
    cout << strings[2] << endl;

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
