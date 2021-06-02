// Udemy Fractal Creator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FractalCreator.h"


using namespace std;
using namespace caveofprogramming;

int main()
{
 
    int height = 600;

    FractalCreator fractalCreator(800, 600);
    
    fractalCreator.addZoom(Zoom(295, height - 202, 0.1));
    fractalCreator.addZoom(Zoom(312, height - 304, 0.1));
    fractalCreator.calculateIteration();
    fractalCreator.calcuateTotalIterations();
    fractalCreator.drawFractal();
    fractalCreator.writeBitmap("test.bmp");

    std::cout << "Finished!\n";
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
