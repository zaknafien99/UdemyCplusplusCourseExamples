// UdemyBinaryFilesTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)

struct Person
{
    char name[50];
    int age;
    double height;
};

#pragma pack(pop)

int main()
{
    Person someone = {"Frodo", 220, 0.8 };

    string filename = "test.bin";

    // Write binary file /////////////

    ofstream outputFile;

    outputFile.open(filename, ios::binary);

    if (outputFile.is_open())
    {
        //outputFile.write((char *)&someone, sizeof(Person)); // C-Style
        outputFile.write(reinterpret_cast<char*>(&someone), sizeof(Person));
        outputFile.close();
    }
    else
    {
        cout << "Could not create file " + filename;
    }

    // Read binary file /////////////

    Person someoneElse = {};

    ifstream inputFile;

    inputFile.open(filename, ios::binary);

    if (inputFile.is_open())
    {
        //outputFile.write((char *)&someone, sizeof(Person)); // C-Style
        inputFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));
        inputFile.close();
    }
    else
    {
        cout << "Could not read file " + filename;
    }

    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

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
