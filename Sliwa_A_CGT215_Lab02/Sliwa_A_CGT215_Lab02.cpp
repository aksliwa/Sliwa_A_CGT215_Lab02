// Sliwa_A_CGT215_Lab02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    float A;
    float B;
    float X;
    //intro
    cout << "Hello, my name is Andy and I'm going to solve the equation:" << endl << "Ax + B = 0" << endl << "For x";

    //this is assigning value to symbols...
    cout << endl << endl << "Please enter a value for A: ";
    cin >> A;
    cout << "Please enter a value for B: ";
    cin >> B;

    //this introduces the new equation that will be solved...
        //how do i write "Ax+B=0" like how it has "Solving for..."
    cout << endl << "Solving " << A << "x+" << B << "= 0 for x..." << endl;

    //equation time!
    X = (-B) / A;
    //answer time!
    cout << endl << "The answer is: " << endl << "x=" << X << endl;

}