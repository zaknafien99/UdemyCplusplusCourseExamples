// UdemyTwoDimentionalVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< vector<int> > grid(3, vector<int>(4, 7)); // a vector of vectors, the first contains the rows, the second the columns, initialised the rows with 7

	grid[1].push_back(8);

	for (size_t row = 0; row < grid.size(); row++)
	{
		for (size_t col = 0; col < grid[row].size(); col++)
		{
			cout << grid[row][col] << flush;;
		}

		cout << endl;
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
