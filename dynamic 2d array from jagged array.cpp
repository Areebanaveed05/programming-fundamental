// C++ Program to implement Jagged array
// 2nd way: Dynamic 2D array
#include <iostream>
using namespace std;

int main()
{
	// system("cls");

	int row, col;
	row = 5;

	// Create Row Array- dynamic array of pointers
	int** arr = new int* [row];
	int sizes[] = { 2,1,3,6,9};
	// int *sizes= new int[row];
	// if taking row as input

	// no of columns for each row as input from user
	for (int i = 0; i < row; i++) {
		/*
		cin>>col;	 //if col is taken as input
		/ sizes[i]=col;
		// store each col number in size ( if row and col
		// are taken as input)
		*/
		//*(arr + i) = new int[sizes[i]]; //this step can also be done like this
		arr[i] = new int[sizes[i]]; //*(arr + i) is equivalent to arr[i]. It represents a
//pointer that will store the address of the dynamically allocated memory for the ith row.
		// creating column of sizes[i] for each row
	}

	// input from user
	int num = 1;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < sizes[i]; j++) {
			// cin>>arr[i][j]; //if user want to input
			arr[i][j] = num++;
		}
	}

	cout << "elements in matrix form as follow" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < sizes[i]; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}