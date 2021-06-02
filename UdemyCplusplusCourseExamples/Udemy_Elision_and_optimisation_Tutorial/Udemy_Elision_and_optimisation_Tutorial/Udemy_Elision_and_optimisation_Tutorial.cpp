// Udemy_Elision_and_optimisation_Tutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

class Test
{
public:
	Test();
	~Test();

	Test(int);
	Test(const Test& other);
	//Test(int i);

	Test& operator=(const Test& other)
	{
		std::cout << "assignment" << std::endl;
		_pBuffer = new int[SIZE] {};

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		return *this;
	}

	friend std::ostream& operator<<(std::ostream& out, const Test& test);
private:
	static const int SIZE = 100;
	int* _pBuffer;
};

Test::Test()
{
	std::cout << "constructor" << std::endl;
	_pBuffer = new int[SIZE] {};
	//memset(_pBuffer, 0, sizeof(int) * SIZE);

}

Test::~Test()
{
	std::cout << "destructor" << std::endl;

	delete[] _pBuffer;
}
Test::Test(int i) {
	std::cout << "Oarameterized constructor" << std::endl;
	_pBuffer = new int[SIZE] {};

	for (int i = 0; i < SIZE; i++) {
		_pBuffer[i] = 7 * i;
	}
}

Test::Test(const Test& other)
{
	std::cout << "Copy constructor" << std::endl;

	_pBuffer = new int[SIZE] {};
	memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
}



int main()
{
	Test test;
	cout << test << std::endl;
	//cout << "constructor" << endl;

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

