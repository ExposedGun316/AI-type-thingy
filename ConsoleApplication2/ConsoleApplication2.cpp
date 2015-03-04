// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name;
	string mood;
	string hobbies;
	string subject;
	string age;

	cout << "Hello there! Whats your name?";
	cin >> name;
	cout << "Nice to meet you " + name + "! My name is Visual Studios."  << "\n"  "What age are you? ";
	cin >> age;
	cout << "You're " + age + "? Thats cool, I'm 500 years old." << "\n" "How are you today?";

	cin >> mood;
	cout << mood + "? I see. I am good in case you were wondering."  << "\n" "What are your hobbies?";

	cin >> hobbies;
	cout << "Oh, you like " + hobbies + ", thats so cool! I have one hobby, it's sitting staring into the abyss." << "\n" "Whats your favourite subject in school?";
	
	cin >> subject;
	cout << "Hmmm... your favourite is " + subject + "?Thats cool, I never went to school.";

}