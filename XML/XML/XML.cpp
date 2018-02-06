// XML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool Detect(char *firstSign) {
	if (*firstSign == '<')
		return true;
	else
		return false;
}
void Scan_line() {
	string line;
	int k;
	getline(cin, line);
	k = line.length();
	if (Detect(&line[0]))
		cout << "Prvi znak je <" << endl;
	else
		cout << "priv znak nije <" << endl;

}
int main()
{
	Scan_line();
    return 0;
}

//make function for detecting first sign is < 
//call function to scan everything from < to >
//function that sort in list every tag 
//function that contains all value names and everything that have =


