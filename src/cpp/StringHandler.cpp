#include "../h/StringHandler.h"

bool StringHandler::comp(string a, string b)
{
	if (a == b)
		return true;
	return false;
}

bool StringHandler::caselesscomp(string a, string b)
{
	//converts the inputed strings to const char arrays
	const char *aa = a.c_str();
	const char *bb = b.c_str();

	//create a store place for the changed letters
	char caseCorrectedA[a.length()];
	char caseCorrcetedB[b.length()];

	//Gets length of strings and stores them before the loop to avoid signed unsigned int problems
	int sizeOfA = a.length();
	int sizeOfB = b.length();

	//iterates thru both char arrays and changes all the values to uppcase then stores them
	for (int i = 0; i < sizeOfA; i++)
		caseCorrectedA[i] = toupper(aa[i]);
	for (int i = 0; i < sizeOfB; i++)
		caseCorrcetedB[i] = toupper(bb[i]);

	//returns a comp of the two new strings that are both the same case
	return comp(caseCorrectedA, caseCorrcetedB);
}
