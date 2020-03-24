//Name: Adam King
//Class: COSC 1435.001 Fall19
//Instructor: Mamta Yadav
//Homework 9
//Date: 11/16/2019
//Program description: Calculates Miles Per Gallon of multiple vehicles using arrays

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
	const int SIZE = 5;
	string cartype[SIZE] = {"Sports Coupe", "Sedan", "SUV", "Minivan", "Pickup"};
	string lowest, highest;
	double totalmiles[SIZE] = {320, 450, 300, 375, 300};
	double totalgallons[SIZE] = {20, 12, 25, 15, 28};
	double milespgallon[SIZE], low, high;
	int count;
	
	for (count = 0; count < SIZE; count++)
	{
		milespgallon[count] = totalmiles[count] / totalgallons[count];
		low = milespgallon[0];
		high = milespgallon[0];
		if (low < milespgallon[count])
			low = milespgallon[count];
		else if (high > milespgallon[count])
			high = milespgallon[count];
		
	}
	
	cout << low << endl;
	cout << high << endl;
		
		
		
		
		
		
		
			
	
	
	
	
}