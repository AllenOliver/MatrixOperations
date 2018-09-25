/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	File Name:         Driver.cpp
//	Description:       This file contains the 'main' function. Program execution begins and ends there.
//	Course:            CSCI 1900 - Math for CS
//	Author:            Allen Oliver
//	Created:           Thursday, September 22, 2018
//	Copyright:         Allen Oliver, 2018
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "pch.h";
#include "ConsoleOutput.h"
#include "MatrixOperations.h"
#include "Menu.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

#define CLEAR system("CLS");
int main()
{
	
	#pragma region Local Variables
	int choice;
	bool MenuShowing = true;
	char wait;
	#pragma endregion


	while (MenuShowing != false) {
	#pragma region Display header and Destroy pointer
		auto_ptr<ConsoleOutput> z(new ConsoleOutput);
		z->DisplayHeader();
		z.reset();
	#pragma endregion

	#pragma region MenuChoices
		auto_ptr<Menu> menu(new Menu);


		//add some menu options
		menu->AddToMenu("Add Matricies");
		menu->AddToMenu("Multiply Matricies");
		menu->AddToMenu("Exit");

		menu->Display();


		menu.reset();
	#pragma endregion

		unique_ptr<MatrixOperations> matrix(new MatrixOperations);

		cin >> choice;
		
		switch (choice)
		{
		case 1:
			//cout << "Currently under constuction!!\n";
			matrix->AddMatricies();
			cin >> wait;
			CLEAR;
			break;
			MenuShowing = false;
			matrix.reset();
		case 2:
			matrix->MultiplyMatricies();
			cin >> wait;
			CLEAR;
			MenuShowing = false;
			matrix.reset();
			break;
		case 3:
			cout << "Closing...";
			MenuShowing = false;
			matrix.reset();
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}
	}

	return 0;
}
