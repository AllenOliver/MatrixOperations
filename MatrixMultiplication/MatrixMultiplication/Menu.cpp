///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	File Name:         Menu.cpp
//	Description:       Creates a menu to give the user options
//	Course:            CSCI 1900 - Math for CS
//	Author:            Allen Oliver
//	Created:           Thursday, September 22, 2018
//	Copyright:         Allen Oliver, 2018
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include <list> 


Menu::Menu()
{
	Display();
}

void Menu::Display()
{
	int i = 1;

	for (auto const& var : menuItems)
	{
		cout << "" << i;
		cout << "). " + var << endl;
		i++;
	}
}

void Menu::AddToMenu(string choiceToAdd)
{
	menuItems.push_back(choiceToAdd);
}

std::list<std::string> Menu::GetMenuChoices()
{
	return menuItems;
}
