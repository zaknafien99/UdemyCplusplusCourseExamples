// udemyMultiMapTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> lookup;

    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Vicky"));
    lookup.insert(make_pair(30, "Raj"));
    lookup.insert(make_pair(20, "Bob"));

    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
    
    for (multimap<int, string>::iterator it = lookup.find(10); it != lookup.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);

    for (multimap<int, string>::iterator it = its.first; it != its.second; it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;
    auto its2 = lookup.equal_range(30);

    for (multimap<int, string>::iterator it = its2.first; it != its2.second; it++)
    {
        cout << it->first << ": " << it->second << endl;
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
