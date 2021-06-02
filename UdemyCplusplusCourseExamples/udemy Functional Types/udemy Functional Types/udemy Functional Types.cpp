// udemy Functional Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

bool check(string& test) {
    return test.size() == 3;
}

class Check {
public:
    bool operator()(string &test) {
        return test.size() == 5;
    }
} check1;

void run(function<bool(string&)> check) {
    string test = "dog";
    std::cout << check(test) << endl;
}

int main()
{
    int size = 5;
    vector<string> vec{ "one", "two", "three" };

    auto lambda = [size](string test) {return test.size() == size; };

    int count = count_if(vec.begin(), vec.end(),lambda);

    std::cout << count << endl;

    count = count_if(vec.begin(), vec.end(), check);

    std::cout << count << endl;

    count = count_if(vec.begin(), vec.end(), check1);

    std::cout << count << endl;

    run(lambda);
    run(check1);
    run(check);

    function<int(int, int)> add = [](int one, int two) {return one + two; };
    std::cout << add(7, 3);
    
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
