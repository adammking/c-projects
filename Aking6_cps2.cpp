//Name: Adam King
//Class: COSC 1435.001 Fall19
//Instructor: Mamta Yadav
//Homework 8
//Date: 11/01/2019
//Program description: Calculates cost of cell phone service for a customer

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
//function prototypes
double calculateCost(double, double, double, double);
double getCallCost(double);
double getTextCost(double);
double getDataCost(double);

int main()
{
	//defines object for taking data from document
	ifstream inputFile;
	int number;
	double lines, mins, texts, gigs, total;
	//Opens document to read data 
	inputFile.open("text.txt");
	//Looops through document and assigns each value in one line to corresponding variable 
	while (inputFile >> lines >> mins >> texts >> gigs)
	{
		total = calculateCost(lines, mins, texts, gigs);	
	}
	//Closes the file being used. 
	inputFile.close();
	return 0;
}
//************************************************************************
//Function Definition: This function takes the input from the opened file
//and calculates the total cost of the customer's bill, while also displaying
//the cost and amount used of each expense. 
//************************************************************************
double calculateCost(double lines, double mins, double texts, double gigs)
{
	double linesCost, totalCost, callCost, textCost, dataCost;
	cout << setprecision(2) << fixed << endl;
	linesCost = lines * 6.0;
	cout << "This customer pays $" << linesCost << " for " << lines << " lines." << endl;
	callCost = getCallCost(mins);
	cout << "This customer pays $" << callCost << " for " << mins << " minutes." << endl;
	textCost = getTextCost(texts);
	cout << "This customer pays $" << textCost << " for " << texts << " texts." << endl;
	dataCost = getDataCost(gigs);
	cout << "This customer pays $" << dataCost << " for " << gigs << " gigabytes." << endl;
	totalCost = (linesCost + callCost + textCost + dataCost);
	cout << "The total for this customer is: $" << totalCost << endl;
	return totalCost;
	
}

//************************************************************************
//Function Definition: This function takes calculates the cost of calls 
//depending on how many minutes the customer used. 
//************************************************************************

double getCallCost(double minutes)
{
	double callCost;
	if (minutes <= 100)
		callCost = 3.00;
	else if (minutes <= 1000)
		callCost = 25.0;
	else
		callCost = (minutes * .02);
	return callCost; 
}

//************************************************************************
//Function Definition: This function calculates the cost of texts for the 
//customer depending on the number of texts they sent. 
//************************************************************************

double getTextCost(double texts)
{
	double textCost;
	if (texts <= 100)
		textCost = 1.0;
	else if (texts <= 1000)
		textCost = 5.0;
	else
		textCost = (texts * .0025);
	return textCost;
	
}

//************************************************************************
//Function Definition: This function calculates the cost of data for the 
//customer depending on the number of gigabytes they used. 
//************************************************************************

double getDataCost(double gigs)
{
	double dataCost;
	if (gigs <= 1.0)
		dataCost = 20.0;
	else if (gigs <= 2)
		dataCost = 30.0;
	else
		dataCost = (gigs * 10);
	return dataCost;
}
