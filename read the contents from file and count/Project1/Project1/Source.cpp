//#include<iostream>
//#include<fstream>
//using namespace std;
//void write(ifstream& fin, char[]);
//void display(ofstream& fout);
//int main()
//{
//	char arr[100] = { '\0' };
//	int count = 0;
//	ifstream fin("file.txt");
//	ofstream fout("result.txt");
//	{
//		if (!fin.is_open())
//		{
//			cout << "file error" << endl;
//		}
//
//		else
//		{
//			write(fin, arr);
//			display(fout);
//			/*fin.getline(arr, 99);*/
//			//count++;
//			///*cout << arr << endl;*/
//			//fout << arr << endl;
//		}
//	}
//		/*cout << "the number of words are:" << count << endl;
//	fout << "the number of words are:" << count << endl;*/
//	fin.close();
//	fout.close();
//	return 0;
//}
//void write(ifstream& fin, char arr[])
//{
//	int count = 0;
//	while (fin >> arr)
//	{
//		fin.getline(arr, 49);
//		count++;
//	}
//	
//	
//	cout << arr << endl;
//	cout << "the number of words are:" << count << endl;
//	
//}
//void display(ofstream& fout, char arr[], int count)
//{
//	fout << arr << endl;
//	fout << "the number of words are:" << count << endl;
//}
//
//
//
//
//
//
//
//
//
//
////#include <iostream>
////#include <fstream>
////
////using namespace std;
////
////int main() {
////    ifstream inputFile("file.txt");
////    ofstream outputFile("result.txt");
////
////    char word[100];
////    int wordCount = 0;
////
////    while (inputFile >> word) {
////        wordCount++;
////    }
////
////    outputFile << "Number of words in file.txt: " << wordCount << endl;
////
////    inputFile.close();
////    outputFile.close();
////
////    return 0;
////}


#include<iostream>
#include<fstream>

using namespace std;

void read(ifstream& fin);

int main()
{
	ifstream fin("file.txt");
	if (!fin.is_open())
	{
		cout << "File is not found." << endl;
	}
	else
	{
		read(fin);
	}

	return 0;
}
void read(ifstream& fin)
{
	char word;
	int count = 0;

	while (fin.get(word)) 
	{
		if (word == ' ' || word == '\n' || word == '\t')
		{
			count++;
		}
	}
	ofstream fout("result.txt");
	cout << count;
	fout << count;
	fout.close();
}