//Name: Adam King
//Class: COSC 1435.001 Fall19
//Instructor: Mamta Yadav
//Homework 9
//Date: 11/17/2019
//Program description: Calculates the total and average of the array, the total of an entered row and column,
//and the highest and lowest numbers in a row. 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Initializing variables and prototype for array.
const int ROWS = 4, COLS = 5;
int getTotal(int [][COLS], int);
double getAverage(int [][COLS], int);
int getRowTotal(int [][COLS], int);
int getColumnTotal(int [][COLS], int);
int getHighestInRow(int [][COLS], int);
int getLowestInRow(int [][COLS], int);

int main ()
{
	int total, rowTotal, colTotal, highest, lowest;
	double average;
	int twoDArray[ROWS][COLS] = 
	{{1, 2, 3, 20, 5},
	{10, 9, 8, 7, 6}, 
	{11, 12, 13, 14, 15}, 
	{20, 17, 18, 19, 16}};
	
	total = getTotal(twoDArray, ROWS);
	average = getAverage(twoDArray, ROWS);
	rowTotal = getRowTotal(twoDArray, 1);
	colTotal = getColumnTotal(twoDArray, 2);
	highest = getHighestInRow(twoDArray, 2);
	lowest = getLowestInRow(twoDArray, 2);
	cout << "The total for the array is: " << total << endl;
	cout << "The average for the array is: "<< average << endl;
	cout << "The total for the entered row is: "  << rowTotal << endl;
	cout << "The total for the entered column is: " << colTotal << endl;
	cout << "The highest number in the entered row is: " << highest << endl;
	cout << "The lowest number in the entered row is: " << lowest << endl;
	return 0;
}
//This function calculates the total of all the numbers in the array
int getTotal(int twoDArray[][COLS], int size)
{
	int total = 0;
	
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < COLS; col++)
		total += twoDArray[row][col];
	}
	
	return total;
}
//This function calculates the average of all the numbers in the array
double getAverage(int twoDArray[][COLS], int size)
{
	double average;
	int total = 0;
	
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < COLS; col++)
			total += twoDArray[row][col];
	}
	average = total /(size*COLS);
	return average;
}
//This function calculates the total of a specific row
int getRowTotal(int twoDArray[][COLS], int rowNum)
{
	int rowTotal;
	for (int row = 0; row < rowNum; row++)
	{
		rowTotal = 0;
		for (int col = 0; col < COLS; col++)
			rowTotal += twoDArray[row][col];
	}
	return rowTotal;
}
//This function calculates the total of a specific column
int getColumnTotal(int twoDArray[][COLS], int colNum)
{
	int colTotal;
	for (int col = 0; col < colNum; col++)
	{
		colTotal = 0;
		for (int row = 0; row < COLS; row++)
			colTotal += twoDArray[row][col];
	}
	return colTotal;
}
//This function finds the highest number in a specific row
int getHighestInRow(int twoDArray[][COLS], int rowNum)
{
	int highest;
	
		highest = twoDArray[rowNum][0];
		for (int col = 0; col < COLS; col++)
		{
			if (highest < twoDArray[rowNum][col])
				highest = twoDArray[rowNum][col];
		}
	
	return highest;
}
//This function finds the lowest number in a specific row. 
int getLowestInRow(int twoDArray[][COLS], int rowNum)
{
	int lowest;
	
	
		lowest = twoDArray[rowNum][0];
		for (int col = 0; col < COLS; col++)
		{
			if (lowest > twoDArray[rowNum][col])
				lowest = twoDArray[rowNum][col];
		}
	
	return lowest;
}
