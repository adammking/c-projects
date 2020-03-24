//Name: Adam King
//Class: COSC 1435.001 Fall19
//Instructor: Mamta Yadav
//Homework 9
//Date: 11/17/2019
//Program description: 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Prototypes for functions 
void lowestNumber(int [], int);
void highestNumber(int [], int);
double sumArray(int [], int);
void averageArray(double, int);

int main ()
{
	const int SIZE = 10;
	int numArray[SIZE];
	double result;
	
	cout << "Please enter ten digits" << endl;
	for (int index = 0; index < SIZE; index++)
		cin >> numArray[index];
	
	lowestNumber(numArray, SIZE);
	highestNumber(numArray, SIZE);
	result = sumArray(numArray, SIZE);
	cout << "The total for the numbers in the array is: " << result << endl;
	
	averageArray(result, SIZE); 
	
	
	return 0;
}
//This function finds the lowest number in the array
void lowestNumber(int numArray [], int SIZE)
{
	int lowest;
	lowest = numArray[0];
	for (int index = 0; index < SIZE; index++)
	{
		if (lowest > numArray[index])
			lowest = numArray[index];
	}
	
	cout << "The lowest number is: " << lowest << endl;
}
//This function finds the highest number in the array
void highestNumber(int numArray [], int SIZE)
{
	int highest;
	highest = numArray[0];
	for (int index = 0; index < SIZE; index++)
	{
		if (highest < numArray[index])
			highest = numArray[index];
	}
	
	cout << "The highest number is: " << highest << endl;
	
}
//This function finds the total of the numbers in the array
double sumArray(int numArray [], int SIZE)
{
	double total = 0;
	
	for (int index = 0; index < SIZE; index++)
		total += numArray[index];
	
	
	return total;
}
//This function calculates the average of the numbers in the array
void averageArray(double result, int SIZE)
{
	double average;
	average = result / SIZE;
	cout << setprecision(1) << fixed;
	cout << "The average of the numbers in the array is: " << average << endl;
}