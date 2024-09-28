// Selection and Repetition Programming Project.cpp : Program 1: Calculator
// This program will take two integers and the math operators +-/* and calculates them 

#include <iostream>

using namespace std;

int main()
{
		//Variables
	int int1;		//First integer input
	int int2;		//Second integer input
	char operate = '0';	//The operator to use
	double answer;	//This is the output to the calculations
		//Input
	
	cout << "Enter your first whole number" << endl;		//Geting the first input
	
	cin >> int1;

	cout << "Enter your second whole number" << endl;		//Getting the second input

	cin >> int2;

	while (operate != '/' && operate != '*' && operate != '+' && operate != '-') //While loop to keep asking for the correct operator, will repeat until an operator is used
	{
		cout << "Enter the operator (+ - / *) you want to use" << endl;	//Getting the operator to use in the calculations

		cin >> operate;
	}
		//Divide by Zero check

	if (operate == '/' && int2 == 0)

	{
		cout << "You cannot divide by 0" << endl;
	}
	
		//Calculations
	
	else if (operate == '/')
	{	
		answer =  static_cast <double> (int1) / int2;	//Division calculation, used static cast to change int1 to a floating point number to be able to divide into decimals without it being rounded to zero

		cout << "Your answer is " << answer << endl;
	}
	else if (operate == '*')
	{
		answer = int1 * int2;							//Multiplication calculation

		cout << "Your answer is " << answer << endl;
	}
	else if (operate == '+')
	{
		answer = int1 + int2;							//Addition Calculation
		cout << "Your answer is " << answer << endl;
	}
	else if (operate == '-')
	{
		answer = int1 - int2;							//Subtraction Calculation
		
		cout << "Your ansswer is " << answer << endl;
	}
	
		//Error for somehow getting past the incorrect operator loop

	else
	{
		cout << "Erm something went wrong somehow" << endl;
	}

	return 0;

}