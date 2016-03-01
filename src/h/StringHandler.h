#ifndef STRINGHANDLER_H_
#define STRINGHANDLER_H_

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

class StringHandler
{
public:
	bool comp(string a, string b);
	bool caselesscomp(string a, string b);
};

#endif
