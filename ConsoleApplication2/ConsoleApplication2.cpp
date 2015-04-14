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
	string farewell;

	cout << "Hello there! Whats your name?";
	cin >> name;
	cout << "Nice to meet you " + name + "! My name is Visual Studios."  << "\n"  "What age are you? ";
	cin >> age;
	cout << "You're " + age + "? Thats cool, I'm 500 years old." << "\n" "How are you today?";

	cin >> mood;
	cout << "Your in a " + mood + " mood? I see. I'm good in case you were wondering how I am."  << "\n" "What are your hobbies?";

	cin >> hobbies;
	cout << "You like " + hobbies + ", thats so cool! I have two hobby, it's sitting staring into the abyss and waiting for you." << "\n" "Whats your favourite subject in school?";
	
	cin >> subject;
	cout << "Hmmm... your favourite is " + subject + "?Thats cool, I never went to school because I am so smart... yea..." << "\n" "Well, I'm going to shut off for a bit, hopefully we'll meet again. Cya later :) ";
	
	cin >> farewell;
	cout << "Cya next time! Bai! ";

	
}