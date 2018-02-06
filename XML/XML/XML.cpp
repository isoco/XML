// XML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class attribute {
	private:
		int attribute_id; // need to be same as tag_ID for which is atributte made 
		string attribute_name;
		string attribute_value; //must be in " "
};
class tags {
	public:
		int tag_ID; //telling us what tag is this by order (first one is the root)
		string tag_name;
};

bool Detect(char *firstSign, char *lastSign) {
	tags Tag;
	if (*firstSign == '<' && *lastSign == '>') {
		while (*++firstSign != ' ') {
			if (*firstSign == '>')
				return true;
			else
				Tag.tag_name += *firstSign;
		}
		return true;
	}
	else
		return false;

}

void Scan_line() {
	string line;
	int k;
	getline(cin, line);
	k = line.length();
	if (Detect(&line[0], &line[line.length()-1]))
		cout << "prvi znak je < i zadnji je >" << endl;
	else
		cout << "priv znak nije <" << endl;
}

void Scan_tag(char *tag) {


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


