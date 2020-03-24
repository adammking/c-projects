//Name: Adam King
//Class: COSC 1435.001 Fall19
//Instructor: Mamta Yadav
//Homework 9
//Date: 11/17/2019
//Program description: Checks accuracy of local weather man

#include <iostream>
#include <iomanip>
using namespace std;



int main ()
{
	//Initializes variables
	const int SIZE = 10;
	int actualtemp[SIZE] = {42, 33, 56, 62, 75, 33, 45, 52, 59, 63};
	int predicttemp[SIZE];
	int counter, lowcount = 0, highcount = 0, rightcount = 0;
	//Asks for user input
	cout << "Please enter the temperatures from the past ten days" << endl;
	//Loop that iterates through empty array and assigns user input as elements
	for (counter = 0; counter < SIZE; counter++)
	{	
		cin >> predicttemp[counter];
		//compares user input temperatures to actual temperatures to test accuracy
		if (predicttemp[counter] > actualtemp[counter])
			highcount++;
		else if (predicttemp[counter] == actualtemp[counter])
			rightcount++;
		else
			lowcount++;
	}
	
	//Print statements to show how many predictions were too high, low, or just right.
	cout << "There were " << highcount << " days where the prediction was too high." << endl;
	cout << "There were " << lowcount << " days where the prediction was too low." << endl;
	cout << "There were " << rightcount << " days where the prediction was accurate." << endl;
	//Test to see if the weather reporter was accurate based on how many predictions were right.
	if (rightcount >= 3)
		cout << "The weather presenter is accurate!" << endl;
	else
		cout << "The weather presenter is not accurate!" << endl;
	
	
	
	
}