///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	File Name:         Menu.h
//	Description:       Header for menu class
//	Course:            CSCI 1900 - Math for CS
//	Author:            Allen Oliver
//	Created:           Thursday, September 22, 2018
//	Copyright:         Allen Oliver, 2018
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include "pch.h"
#include <list> 
#include <string> 

using namespace std;

class Menu
{
public:
	
	Menu();
	//Displays a header for the console
	void Display();

	//adds an item to the menu list
	void AddToMenu(string choiceToAdd);

	//returns the menu
	list<string> GetMenuChoices();

private:
	std::list<std::string> menuItems;
};