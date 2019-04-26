/*
This is a demo to help you learn about dynamic arrays.

*/


//Setup
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <limits>
//#include <ConsoleApplication1Logo.png>
# include <new> //needed for dynamic arrays
#pragma once
using namespace std;
#include <cstddef>
using namespace std;



int main()
{



	cout << "Hello World!\n \n"; 


	/*
	____________________________________Best Ice Cream_______________________________________
	I want to make an array that stores the names of the best ice cream flavors in descending order of delishousness.
	All entries in this list are objectively and irrefutably the best ice creams known to mankind.
	To start off I am going to store the 3 best ice Cream flavors in a static array.
	*/

	// This is a Static Array:
	const int NumberOfIceCreams = 4; //notice that this array is of a fixed size.

	//What happens if we try to let the user define the array size?
		//comment out the above and try to implement the following instead:	
		
		/*
		cout << "How many flavors?";
		int NumberOfIceCreams;
		cin>> NumberOfIceCreams;
		*/



	string OnlyTheBestIceCream[NumberOfIceCreams] = { "The Platonic Ideal of Ice Cream", "Mint Chocholate Chip", "Chunkey Monkey", "Strawberry"};
	
	//did you notice that you could not compile with the user-defined setting? 
	
	
	cout << "The best ice Cream flavors known to humanity are:";
	for(int ItemList = 1; ItemList <= NumberOfIceCreams-1; ItemList++)
	{	
		cout << "\n" <<ItemList<< "\t" << OnlyTheBestIceCream[ItemList];
	}

	/*
	____________________________________Best bears_______________________________________
	
But what if we really want to let the user define the number of entries in the array?

	To try this, we are going to make a dynamic array that the user will use to create a list of the best bears

	Syntax:

		(value type) *ArrayName;
		ArrayName= new (value type) [Number of items in array]
		ArrayName[number]=value;
		delete [] ArrayName;

	*/
	cout << " \n \n How many bears do you want?";
	int MaxBearLimit;
	cin >> MaxBearLimit;

	string *BestBearArray; //creates the array
	BestBearArray = new string[MaxBearLimit];//Note the use of "new" here, "new" just gives an initial size 
	BestBearArray = new string[MaxBearLimit+1];

	bool repeat = true;


	while (repeat = true)
	{
		cout << "\n Name a bear. Or enter 'done' to end.";
		string BearName;
		cin >> BearName;
		if (BearName != "done")
		{
			cout << "\n What rank should this bear have?";
			int BearRank;
			cin >> BearRank;
			cout << "\n \n The best bears are: \n";
			BestBearArray[BearRank] = BearName;


			for (int BearList = 1; BearList <= MaxBearLimit; BearList++)
			{

				cout << "\n" << BearList << "\t" << BestBearArray[BearList-1];
			}
		}
		if (BearName == "done")
		{
			delete[] BestBearArray; // This is our delete operator, it gets rid of the bear array when we are done with it. It is very important, without it the computer's memory remains commited to the array

			return(0);
		}
	}
}
