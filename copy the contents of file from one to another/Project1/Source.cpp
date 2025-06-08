#include<iostream>
#include<fstream>
using namespace std;
void real(ifstream& fin, char[]);
void copy(ofstream& fout, char[]);
int main()
{
	char array[100] = { '\0' };
	ifstream fin("real.txt");
	ofstream fout("copy.txt");
	if (!fin.is_open())
	{
		cout << "file error" << endl;
	}
	else
		while (fin)
	{
			real(fin, array);
			copy(fout, array);
	}
	fout.close();
	fin.close();
	return 0;
}
void real(ifstream& fin, char array[])
{
	fin.getline(array, 100);
	cout << array << endl;
}
void copy(ofstream& fout, char array[])
{
	fout << array << endl;
}