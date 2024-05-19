/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * LAB #       :
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    :
 ******************************************************************************/

#include"header.h"

 /******************************************************************************
 *FUNCTION - PrintHeader
 *______________________________________________________________________________
 *This function receives an assignment name, type and number then outputs the
 * appropriate header - returns nothing.
 *______________________________________________________________________________
 *PRE-CONDITIONS
 *	  asName:  Has to be previously defined
 *	  asType:    Has to be previously defined
 *	  asNum: Has to be previously defined
 *
 *POST-CONDITIONS
 *	   This function will output class heading.
 *	   <Post-conditions are the changed outputs either passed by value or
 *	   by reference OR anything affected by the function.
 *
 *******************************************************************************/

void PrintHeader(string asName,  // IN - Assignment Name
	int asNum,  // IN - assignment type
				// (LAB or ASSIGNMENT)
	char asType)// IN - assignment number
{
	cout << left;
	cout << "**********************************************\n";
	cout << "* PROGRAMMED BY : Saul Moreno\n";
	cout << "* " << setw(14) << "STUDENT ID" << ": 269491\n";
	cout << "* " << setw(14) << "CLASS" << ": CS 1B MW-7:30pm\n";
	cout << "* ";
	if (toupper(asType) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}
	cout << asNum << ": " << asName << endl;
	cout << "***********************************************\n\n";
	cout << right;
}
