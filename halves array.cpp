//Create a function that takes an integer array and its size as parameters, 
//and returns a new array that is half the size of the original array, 
//while preserving the order of elements.
#include<iostream>
using namespace std;
int* halvesarray( int* arr, int size)
{
	int new_size = size / 2;
	int* new_arr = new int[new_size];
	for (int i = 0; i < new_size; i++)
	{
		new_arr[i] = arr[i * 2];//i * 2 is used to access the corresponding index in 
//the original array arr. By multiplying i with 2, we effectively skip every second 
//element in arr since we want to halve the size of the array.
	}
	
	return new_arr;
}
int main()
{
	int size;
	cout << "enter the size:" << endl;
	cin >> size;
	int* arr = new int[size];
	cout << "enter the number of elements of array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	int* new_arr = halvesarray(arr, size);

	cout << "new array(halved array)" << endl;
	for (int i = 0; i < size / 2; i++)
	{
		cout << new_arr[i] << " ";
	}
	cout << endl;
	delete[]arr;
	delete[]new_arr;
	return 0;
}
