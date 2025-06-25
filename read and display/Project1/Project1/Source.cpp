#include<iostream>
#include<fstream>
using namespace std;
int c_filesize(char*);
int* dynamic_mem(int);
void read(char*, int*, int);
void display(int*, int);
int main()
{
	int size = 0;
	int* arr = NULL;
	char f_name[20] = "data.txt";
	size = c_filesize(f_name);
	arr = dynamic_mem(size);
	read(f_name, arr, size);
	display(arr, size);
	delete[] arr;
	return 0;
}
void read(char* filename, int* arr, int s)
{
	ifstream fin;
	fin.open(filename);
	for (int i = 0; i < s; i++)
		fin >> arr[i];
}
int* dynamic_mem(int s)
{
	int* temp = NULL;
	temp = new int[s];
	return temp;
}
int c_filesize(char* filename)
{
	int temp = 0;
	int c = 0;
	ifstream fin(filename);
	while (fin >> temp)
		c++;
	cout << "total numbers in file:" << c << endl;
	return c;
}
void display(int* ptr, int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << ptr[i] << "  ";
	}
}