// Selection and Repetition Programming Project.cpp : This file contains the project Merge Files
//This programs purpose is to read two sorted files and merge them into one sorted file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
		//Variables
	char letter1;
	char letter2;

	string name1;
	string name2;
	string end = "\n";
	
	
		//Initializing Files
	ifstream file1("file1.txt");	//File 1 to be merged
	ifstream file2("file2.txt");	//File 2 to be merged
	ofstream file3("file3.txt"); //File 3 to have everything merged in
		
		//Making sure files are open

		if (!file1)
		{
			cout << "Error opening file." << endl;
		}
	
		if (!file2)
		{
			cout << "Error opening file." << endl;
		}

		if (!file3)
		{
			cout << "Error opening file." << endl;
		}


		//File reading loops
	while (!file1.eof() || !file2.eof())
		{
		
			//Getting the first letter of the name in the file to use ASCII value to determine which name to put in
		file1 >> letter1;
		file2 >> letter2;
			
			if (letter1 < letter2)
				{
				
				file1 >> name1;

				name1 = name1 + end;

				file3 << name1;

				}
		}
}