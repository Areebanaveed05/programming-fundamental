#include<iostream>
#include<string>
using namespace std;
int main()
{
	string names[100];
	int rollno[100];
	int rollnos[100];
	int age[100];
	int ages[100];
	float CGPA[100];
	float cgpa[4];
	int n = 0;
	int count = 0;
	int choice;
	int students[100];
	cout << "                     WELCOME TO STUDENT MANAGEMENT SYSTEM" << endl;
	cout << "Menu:" << endl;
	cout << "1. Add a new student" << endl;
	cout << "2. Search for a student by roll number" << endl;
	cout << "3. Delete a student" << endl;
	cout << "4. Display details of all students" << endl;
	cout << "5. To Search a student by name" << endl;
	cout << "6. Exit" << endl;
	int x = 0;
	do
	{
		
		cout << "Enter your choice:";
		cin >> choice;
		if (choice == 1)
		{
			for (int i = 0; i < 1; i++)
			{
				cout << "Name:" << endl;
				cin >> names[x];
				cout << "Roll number:" << endl;
				cin >> rollnos[x];
				cout << "Age:" << endl;
				cin >> ages[x];
				cout << "CGPA:" << endl;
				cin >> cgpa[x];
				x++;
			}
			cout << "student added successfully" << endl;

		}
		else if (choice == 2)
		{
			int student[10];
			int i = 0;
			int rollno;
			cout << "Enter the roll number to be searched: ";
			for (i = 0; i < 1; i++)
			{
				cin >> rollno;
			}
			cout << endl;
			bool found = true;
			for (i = 0; i < x; i++)
			{
				if (rollno == rollnos[i])
				{
					found = true;
					break;
				}
				else
				{
					found = false;
				}
			}
			if (found)
				cout << "The student has been found on this roll no." << endl;
			else
				cout << "No student has been found." << endl;
		}
		else if (choice == 3)
		{
			int m = 0;
			int idtodelete;
			cout << "Enter the (ID) roll number  of the student to delete: ";
				cin >> idtodelete;		
			for (int i = 0; i < x; i++)//check if i or x
			{
				if (rollnos[i] == idtodelete)
				{
					for (int i = 0; i < x; i++)
					{
						names[i] = names[i + 1];
						rollno[i] = rollno[i + 1];
						CGPA[i] = CGPA[i + 1];
						age[i] = age[i + 1];
					}
					cout << "Student with ID has been deleted." << endl;
				}
				else
				{
					cout << "Student with this ID not found." << endl;
				}
			}
		}
		else if (choice == 4)
		{
			cout << "details of students is:" << endl;
			for (int i = 0; i < x; i++)//changed i and x
			{
				cout << "NAME:" << names[i] << endl;;
				cout << "ROLL NUMBER:" << rollnos[i] << endl;
				cout << "AGE:" << ages[i] << endl;
				cout << "CGPA:" << cgpa[i] << endl;
			}
		}
		else if (choice == 5)
		{
			bool found = true;
			int student[10];
			int m = 0;
			int i = 0;
			string name;//array is not needed
			cout << "Enter the name to be searched: ";
			cin >> name;//loop has been removed
			cout << endl;
			for (i = 0; i < x; i++)//i to x
			{
				if (name == names[i])
				{
					for (int i = 0; i < 1; i++)
					{
						cout << "The student data is: " << endl;
						cout << "NAME:" << names[i] << endl;;
						cout << "ROLL NUMBER:" << rollnos[i] << endl;
						cout << "AGE:" << ages[i] << endl;
						cout << "CGPA:" << cgpa[i] << endl;
					}
					found = true;
					break;
				}
				else
				{
					found = false;
					
				}
			}
			if (found==true)
				cout << "name is found." << endl;
			else
				cout << "name is not found." << endl;
		}
		else if (choice == 6)
		{
			x = 0;
			cout << exit;
			break;
		}

	} while (choice <= 6);
	return 0;
}
