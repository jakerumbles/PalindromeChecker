// Author: Jake Edwards
// Professor: Dr. Ivancic
// Date: September 17, 2017
// CSC 331-001
// Homework 2

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// prints "is a palindrome" if the c string passed is a palindrome and "not a palindrome" otherwise.
void isPalindrome(string line) {
	
	// index of last character in the string.
	int end = strlen(line.c_str()) - 1;
	
	// stays true if every letter comparison is the same.
	bool isSame = true;
	int i = 0;
	
	// checks each pair of letters in the line.
	while(i < end) {
		if(line[i] == line[end]) {
			//is still palindrome at this point in testing. isSame remains true
		}
		else {
			isSame = false;
			break;
		}
		i++;
		end--;
	}
	
	// if it is a palindrome, isSame will be true and the if statement will print the correct evaluation.
	if(isSame) {
		cout <<" is a palindrome" << endl;
	}
	else {
		cout << " is not a palindrome" << endl;
	}
	
}

int main(int argc, char **argv)  {
	
	string temp;
	temp = argv[1];
	string file = "/home/courses/cs3311/ProgramFiles/" + temp;
	ifstream inputFile;
	inputFile.open("file");
	
	while(!inputFile.eof()) {
		string line = "";
		getline(inputFile, line);
		
		cout << line;
		isPalindrome(line);
	}
	inputFile.close();
	return 0;
}

