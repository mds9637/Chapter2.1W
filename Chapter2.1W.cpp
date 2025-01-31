/*
File Name: Chapter2.1W.cpp
Developer: Matthew Sharps
Date: January 31, 2025

Requirements:
Display pressure
*/


#include <iostream>
using namespace std;

int main()
{
	double force;
	double area;
	double pressure;

	cout << "Enter a force value ";
	cin >> force;
	cout << "Enter the area value ";
	cin >> area;

	pressure = force / area;
	cout << "The pressure of the the area with the force provided is " << pressure;
}


