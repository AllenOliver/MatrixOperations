///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	File Name:         ConsoleOutput.cpp
//	Description:       Outputs headers and more the the console
//	Course:            CSCI 1900 - Math for CS
//	Author:            Allen Oliver
//	Created:           Thursday, September 22, 2018
//	Copyright:         Allen Oliver, 2018
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "ConsoleOutput.h"
#include <string>
#include <iostream>

using namespace std;

#define LINE cout << "\n";
//Displays a header for the console
void ConsoleOutput::DisplayHeader()
{
	string HeaderText = "Matrix Multiplication and Addition";

	cout << "~Allen Oliver 2018" << endl;

	for (int i = 0; i < HeaderText.length(); i++) {
		cout << "-";
	}
	cout << endl;
	LINE;
	cout << HeaderText << endl;
	LINE;

	for (int i = 0; i < HeaderText.length(); i++) {
		cout << "=";
	}
	LINE;
	cout << endl;
}