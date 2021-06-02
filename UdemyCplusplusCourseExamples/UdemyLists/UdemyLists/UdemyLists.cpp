// UdemyLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
// lists contain nodes that are joined by pointers, to traverse the list you have to get
// the pointer to the next element and so on

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 100);
    cout << "Element: " << *it << endl;

    list<int>::iterator eraseIt = numbers.begin();
    eraseIt++;

    eraseIt = numbers.erase(eraseIt);
    cout << "Element: " << *eraseIt << endl;

    for (list<int>::iterator it = numbers.begin(); it != numbers.end();)
    {
        if (*it == 2) {
            numbers.insert(it, 1234);
        }

        if (*it == 1)
        {
            it = numbers.erase(it);
        }
        else
        {
            it++;
        }

    }


    for (list<int>::iterator it=numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
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
