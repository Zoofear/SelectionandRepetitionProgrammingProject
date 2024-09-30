// Selection and Repetition Programming Project.cpp : This file contains the project Merge Files
//This programs purpose is to read two sorted files and merge them into one sorted file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{	
		//Variables
			
	string name1;		//Name from file 1
	string name2;		//Name from file 2
	string end = "\n";	//Endline string used to organize the output file


		//Initializing Files

	ifstream file1;	//File 1 to be merged
	ifstream file2;	//File 2 to be merged
	ofstream file3;	//File 3 to have everything merged in

		//Was having issues initializing and opening files together so just separated them
	
	file1.open("file1.txt");
	file2.open("file2.txt");
	file3.open("file3.txt");

		//Making sure all files are opened
	
	if (file1.fail() || file2.fail() || file3.fail())
	{
		cout << "File no worky" << endl;
	}
	else
	{

			//File reading loops

		while (!file1.eof() && !file2.eof())
		{

				//Getting the name in the file, Getline is ussed because file >> ends on a space and doesnt retrieve the name and grade together

			getline(file1, name1);
			getline(file2, name2);

				//Checking alphabetically which file comes first comparing the first letters ASCII value
				
			if (name1 < name2)
			{
				name1 = name1 + end;	//Adding a "/n" string to the string name 1 so when it is written into file 3 it can go to the next line in the output file

				name2 = name2 + end;	//the second name needs to be processed aswell as it also needs to be written to the file before the loop reads the next line in the file

				file3 << name1;			//Writing the file in alphabetical order, in this if statment name 1 is before name 2

				file3 << name2;			//This needs to be written or else it will be lost, This code wouldnt work if the files werent sorted beforehand
			}
			else
			{
				name2 = name2 + end;	//Adding a "/n" string to the string name 2 so when it is written into file 3 it can go to the next line in the output file

				name1 = name1 + end;	//the second name needs to be processed aswell as it also needs to be written to the file before the loop reads the next line in the file

				file3 << name2;			//Writing the file in alphabetical order, in this if statment name 2 is before name 1

				file3 << name1;			//This needs to be written or else it will be lost, This code wouldnt work if the files werent sorted beforehand
			}
		}
		
			//This loop makes sure there are no remaning files in file 1, and if there are it will write it to file 3, It would only stay sorted if the file 1 and 2 were sorted

		while (!file1.eof())
		{
			getline(file1, name1);

			name1 + end;

			file3 << name1;
		}
		
			//This loop makes sure there are no remaning files in file 2, and if there are it will write it to file 3, It would only stay sorted if the file 1 and 2 were sorted
		
		while (!file2.eof())
		{
			getline(file2, name2);

			name2 = name2 + end;

			file3 << name2;
		}
	}

	return 0; 
}