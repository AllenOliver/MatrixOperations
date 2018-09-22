///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	File Name:         MatrixOperations.cpp
//	Description:       Contains functions to do matrix math
//	Course:            CSCI 1900 - Math for CS
//	Author:            Allen Oliver
//	Created:           Thursday, September 22, 2018
//	Copyright:         Allen Oliver, 2018
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "pch.h";
#include "MatrixOperations.h";
#include <iostream>
using namespace std;


void MatrixOperations::MultiplyMatricies()
{
	int matrixA[10][10], matrixB[10][10], resultMatrix[10][10], row1, column1, row2, column2, i, j, k;

	cout << "Enter rows and columns for first matrix: ";
	cin >> row1 >> column1;


	cout << "Enter rows and columns for second matrix: ";
	cin >> row2 >> column2;

	// If column of first matrix in not equal to row of second matrix,
	// ask the user to enter the size of matrix again.
	while (column1 != row2)
	{
		cout << "Error! column of first matrix not equal to row of second.";

		cout << "Enter rows and columns for first matrix: ";
		cin >> row1 >> column1;

		cout << "Enter rows and columns for second matrix: ";
		cin >> row2 >> column2;
	}

	// Storing elements of A matrix
	cout << endl << "Enter elements of matrix 1:" << endl;
	for (i = 0; i < row1; ++i)
		for (j = 0; j < column1; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> matrixA[i][j];
		}

	// Storing elements of B matrix.
	cout << endl << "Enter elements of matrix 2:" << endl;
	for (i = 0; i < row2; ++i)
		for (j = 0; j < column2; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> matrixB[i][j];
		}

	// Initializing elements of resultMatrix to 0.
	for (i = 0; i < row1; ++i)
		for (j = 0; j < column2; ++j)
		{
			resultMatrix[i][j] = 0;
		}

	// Multiplying matrix a and b and storing results.
	for (i = 0; i < row1; ++i)
		for (j = 0; j < column2; ++j)
			for (k = 0; k < column1; ++k)
			{
				resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
			}

	// Displaying the multiplication of two matrix.
	cout << endl << "Output Matrix: " << endl;
	for (i = 0; i < row1; ++i)
		for (j = 0; j < column2; ++j)
		{
			cout << " " << resultMatrix[i][j];
			if (j == column2 - 1)
				cout << endl;
		}

}

void MatrixOperations::AddMatricies()
{
	int matrixA[10][10], matrixB[10][10], resultMatrix[10][10], row1, column1, row2, column2, i, j;

	cout << "Enter rows and columns for first matrix: ";
	cin >> row1 >> column1;

	cout << "Enter rows and columns for second matrix: ";
	cin >> row2 >> column2;

	// If column of first matrix in not equal to row of second matrix,
	// ask the user to enter the size of matrix again.
	while (column1 != column2 || row1 != row2)
	{
		cout << "Error! Matricies are not of the same size!\n";

		cout << "Enter rows and columns for first matrix: ";
		cin >> row1 >> column1;

		cout << "Enter rows and columns for second matrix: ";
		cin >> row2 >> column2;
	}

	// Storing elements of first matrix.
	cout << endl << "Enter elements of matrix 1:" << endl;
	for (i = 0; i < row1; ++i)
		for (j = 0; j < column1; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> matrixA[i][j];
		}

	// Storing elements of second matrix.
	cout << endl << "Enter elements of matrix 2:" << endl;
	for (i = 0; i < row2; ++i)
		for (j = 0; j < column2; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> matrixB[i][j];
		}

	// Initializing elements of matrix mult to 0.
	for (i = 0; i < row1; ++i)
		for (j = 0; j < column2; ++j)
		{
			resultMatrix[i][j] = 0;
		}

	// Adding matrix a and b and storing in array mult.
	for (i = 0; i < row1; ++i)
		for (j = 0; j < column2; ++j)
			resultMatrix[i][j] += matrixA[i][j] + matrixB[i][j];

	// Displaying the multiplication of two matrix.
	cout << endl << "Output Matrix: " << endl;
	for (i = 0; i < row1; ++i)
		for (j = 0; j < column2; ++j)
		{
			cout << " " << resultMatrix[i][j];
			if (j == column2 - 1)
				cout << endl;
		}
			
}
