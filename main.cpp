/*
	Author: Quinatzin Sintora
	Date: 04/01/2017
	Folder: BinarySearch
	Project: Binary Search 
	About: This class is meant to use binary search, searching for values/numbers in an array and look for them.
	If values/number is not located then product is not in array if it is in array then well prompt what position.
*/

#include <iostream>
using namespace std;

int main()
{	


	int inputValue;									//Values to look for
	int size = 10;									//Value of Size which is 10
	//int currentSize = 0;	
	bool found = false;								//Used for true and false
	int low = 0;									//lowest number set to zero
	int high = size - 1;				
	int pos = 0;									//position set to zero

	int values[] = {12, 10, 20, 30, 40, 50};//{50, 20, 10, 30, 52, 12};		//numbers in array
	
	cout << "Enter a value to search" << endl;
	cin >> inputValue;								//ask user to input values to search for

	//BinarySearch 
	while (low <= high && !found)
	{
		pos = (low + high) / 2;                               // Midpoint of the subsequence
		if (values[pos] == inputValue)
		{
			found = true;
		}
		else if (values[pos] < inputValue) 
		{ 
			low = pos + 1;
		} // Look in second half
		else 
		{ 
			high = pos - 1;
		} // Look in first half
	}
	if (found == true)
	{ 
		cout << " Found at position " << pos; 
	}
	else 
	{ 
		cout << "Not found. Insert before position " << pos << endl;
	}

	system("Pause");
	return 0;
}//end of main code