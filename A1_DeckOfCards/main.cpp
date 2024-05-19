/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * LAB #       :
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    :
 ******************************************************************************/

#include "header.h"

 /******************************************************************************
  * Deck of Cards
  * ----------------------------------------------------------------------------
  * This program will output the class heading
  * ----------------------------------------------------------------------------
  * INPUT:
  *     <There is no input for this program - output data is obtained through
  *     the constant.>
  *
  * OUTPUT:
  *  <This program will output a class heading
  *****************************************************************************/
int main()
{
	const int DECK_SIZE = 52;
	const int HALF_DECK = 26;
	int deckAr[DECK_SIZE];
	int cutDeckArOne[HALF_DECK];
	int cutDeckArTwo[HALF_DECK];
	int suffledDeckAr[DECK_SIZE];
	int newSuffledDeckAr[DECK_SIZE];
	int adder;

	adder = 0;

	//This will initialize the deck
	for (int count = 0; count < DECK_SIZE; count++)
	{
		deckAr[count] = count;
		cout << deckAr[count] << " ";

	}// end for(int count = 0; count < DECK_SIZE; count++)

	cout << endl;
	int index = 0;
	int remainder = 0;

	/* This will cut the deck in half and assign it to a new array
	 *
	 */
	while (adder < DECK_SIZE)
	{

		if (adder < HALF_DECK)
		{
			cutDeckArOne[adder] = deckAr[adder];
			cout << cutDeckArOne[adder] << " ";
			//adder++;

		}//end if(index < HALF_DECK)
		else
		{
			//		if(adder >= HALF_DECK && adder < DECK_SIZE)
			if (adder == 26)
			{
				cout << endl;
				index = 0;
			}
			//cout << " \'" <<  index << " \'";
			cutDeckArTwo[index] = deckAr[adder];
			cout << cutDeckArTwo[index] << " ";
			index++;
			//adder++;

		}//end if(index < HALF_DECK)

		adder++;
		//index++;

	}//end while(index < DECK_SIZE)


	cout << endl << endl;

	/*
	 *  This part will perform the perfect shuffle
	 */
	int splitz = 0;
	int splits = 0;

	for (int split = 0; split < DECK_SIZE; split++)
	{
		//cout << " split = " << split << " ";
		int remainder = split % 2;

		if (remainder == 0)
		{
			//cout << remainder << " sin ";
			suffledDeckAr[split] = cutDeckArOne[splits];
			splits++;
			//cout << suffledDeckAr[split] << " ";
		}
		else
		{
			suffledDeckAr[split] = cutDeckArTwo[splitz];
			splitz++;
			//cout << " splitz = " << splitz << " ";
			//cout << suffledDeckAr[split] << " ";
		}
		//cout << " /'" <<  split << "/' ";

		remainder = 0;
	}

	cout << endl;
	for (int loop = 0; loop < DECK_SIZE; loop++)
	{
		cout << suffledDeckAr[loop] << " ";
	}

	int countery = 0;
	int indexs = 0;
	int remainders = 0;
	int splitzs = 0;
	int splitsz = 0;
	while (deckAr[1] != newSuffledDeckAr[1])
	{
		//This will cut the deck in half
		while (countery < DECK_SIZE)
		{

			if (countery < HALF_DECK)
			{
				cutDeckArOne[countery] = suffledDeckAr[countery];
				cout << cutDeckArOne[countery] << " ";
				//adder++;

			}//end if(index < HALF_DECK)
			else
			{
				//		if(adder >= HALF_DECK && adder < DECK_SIZE)
				if (countery == 26)
				{
					cout << endl;
					index = 0;
				}
				//cout << " \'" <<  index << " \'";
										//cutDeckArTwo[indexs] = suffledDeckAr[countery];
										cutDeckArTwo[indexs] = suffledDeckAr[countery];
										cout << cutDeckArTwo[indexs] << " ";
										indexs++;
				//adder++;

			}//end if(index < HALF_DECK)


			countery++;

			if (countery == 51)
			{
				countery = 0;
			}
			//index++;

		}//end while(index < DECK_SIZE)

		/*
			 *  This part will perform the perfect shuffle
			 */
			 //			int splitzs = 0;
			 //			int splitsz = 0;

		for (int split = 0; split < DECK_SIZE; split++)
		{
			//cout << " split = " << split << " ";
			int remainders = split % 2;

			if (remainders == 0)
			{
				//cout << remainder << " sin ";
				newSuffledDeckAr[split] = cutDeckArOne[splitsz];
				splitsz++;
				//cout << suffledDeckAr[split] << " ";
			}
			else
			{
				newSuffledDeckAr[split] = cutDeckArTwo[splitzs];
				splitzs++;
				//cout << " splitz = " << splitz << " ";
				//cout << suffledDeckAr[split] << " ";
			}
			//cout << " /'" <<  split << "/' ";

			remainders = 0;
		}



	}//end while(adder < DECK_SIZE)

	cout << endl;
	for (int loop = 0; loop < DECK_SIZE; loop++)
	{
		cout << newSuffledDeckAr[loop] << " ";
	}


	//PrintHeader("Deck of Cards", 1, 'A');

	return 0;
}


