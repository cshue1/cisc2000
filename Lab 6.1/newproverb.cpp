// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.

// CHRISTINE SHUE
//SEPTEMBER 10, 2016

#include <iostream>
#include <string>
using namespace std;

void writeProverb(int number);
void finishProverb(string word);

int main()
{
	// int wordCode;    //for Exercises 1 & 2
	string word;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___"
		 << endl;
    cout << "Please input the word you would like to have finish the proverb: "; //EXERCISE 3
    cin >> word; //EXERCISE 3
    cout << endl;

    finishProverb (word); //EXERCISE 3

	/*EXERCISES 1 & 2:
	cout << "Input a 1 if you want the sentence to be finished with party"
		 << endl;
	cout << "Input a 2 if you want the sentence to be finished with country" << endl;

	cout << "Please input your choice now" << endl;
	cin >> wordCode;

	if (wordCode != 1 && wordCode != 2)
    {
        do
        {
            cout << "I'm sorry but that is an incorrect choice; Please input a 1 or 2" << endl;
            cin >> wordCode;
        }while (wordCode != 1 && wordCode != 2);

    }
    cout << endl;
	writeProverb(wordCode);*/

	return 0;
}

//	******************************************************************************
//	writeProverb
//
//	task:	  This function prints a proverb. The function takes a number
//	          from the call. If that number is a 1 it prints "Now is the time
//	          for all good men to come to the aid of their party."
//	          Otherwise, it prints "Now is the time for all good men
//	          to come to the aid of their country."
//	data in:  code for ending word of proverb (integer)
//	data out: no actual parameter altered
//
//	*****************************************************************************

void writeProverb(int number) //EXERCISES 1 & 2
{
	if ( number == 1)
        cout << "Now is the time for all good men to come to the aid of their party." << endl;
    else
        cout << "Now is the time for all good men to come to the aid of their country." << endl;
}

void finishProverb(string word) //EXERCISE 3
{
    cout << "Now is the time for all good men to come to the aid of their " << word << "." << endl;
}
