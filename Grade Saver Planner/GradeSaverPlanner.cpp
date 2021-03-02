//File Name: Source.cpp
//Author: Miranda Millington
//Email Address: mrmillington@my.milligan.edu
//Class Assignment for EENG221 Spring 2021
//Description: Program to organize college assignments by due date and significance to students grade.
//Last Changed: February 15th, 2021


#include <iostream>
using namespace std;
int main()
{
	int num; 
	string name, plannername, coursecode[10];
	char grade[10];
	char gradecat1[4];
	double catpercent[100];


	cout << "Enter your first name. \n";
	cin >> name;

	cout << "Get started on ";
	cout << name << "'s Grade Saver Planner" << endl;

	double credithours[10],totalcredithours = 0; 
	char ans;
	const int maxcourses = 10;
	cout << "Enter the number of courses you are taking this semester. (max of 10) \n";
	cin >> num; 
	cout << name << " is taking " << num << " courses this semester." << endl;

	if (num <= maxcourses) {

		for (int i = 0; i < num; i++)
		{
			cout << "Enter the course code for course " << i + 1 << " with no spaces. \n";
			cin >> coursecode[i];
			cout << "Enter the credit hours for course " << i + 1 << ". \n";
			cin >> credithours[i];
			cout << "Course " << i + 1 << ":" << coursecode[i] << endl;
			cout << "Course " << i + 1 << " Credit Hours:" << credithours[i] << endl;
		}

		totalcredithours = 0;
		for (int i = 0; i < num; i++) {
			totalcredithours += credithours[i];
		}
		// Totals the number of credit hours student is taking.

		cout << "Total credit hours: " << totalcredithours << "\n";
	}

	for (int i = 0; i < num; i++) {
		char grade1, grade2, grade3;
		double pv[10], pv1 = 0, pv2, pv3, gpa;

		cout << "Enter current letter grade in " << coursecode[i] << ".\n";
		cin >> grade[i];
		switch (grade[i])
		{
		case 'A':
		case 'a':
			grade[i] = 4.0;
			cout << " Current grade in " << coursecode[i] << ": 4.0\n";
			break;
		case 'A-':
		case 'a-':
			grade[i] = 3.7;
			cout << " Current grade in " << coursecode[i] << ": 3.7\n";
			break;
		case 'B+':
		case 'b+':
			grade[i] = 3.33;
			cout << " Current grade in " << coursecode[i] << ": 3.33\n";
			break;
		case 'B':
		case 'b':
			grade[i] = 3.0;
			cout << " Current grade in " << coursecode[i] << ": 3.0\n";
			break;
		case 'B-':
		case 'b-':
			grade[i] = 2.7;
			cout << " Current grade in " << coursecode[i] << ": 2.7\n";
			break;
		case 'C+':
		case 'c+':
			grade[i] = 2.33;
			cout << " Current grade in " << coursecode[i] << ": 2.33\n";
			break;
		case 'C':
		case 'c':
			grade[i] = 2.0;
			cout << " Current grade in " << coursecode[i] << ": 2.0\n";
			break;
		case 'C-':
		case 'c-':
			grade[i] = 1.7;
			cout << " Current grade in " << coursecode[i] << ": 1.7\n";
			break;
		case 'D+':
		case 'd+':
			grade[i] = 1.33;
			cout << " Current grade in " << coursecode[i] << ": 1.33\n";
			break;
		case 'D':
		case 'd':
			grade[i] = 1.0;
			cout << " Current grade in " << coursecode[i] << ": 1.0\n";
			break;
		case 'D-':
		case 'd-':
			grade[i] = 0.7;
			cout << " Current grade in " << coursecode[i] << ": 0.7\n";
			break;
		case 'F':
		case 'f':
			grade[i] = 0.0;
			cout << " Current grade in " << coursecode[i] << ": 0.0\n";
			break;
		default:
			cout << "That is not a possible grade. \n";
			//need to loop back up, while loop
		}
	}

	double gpa;
	gpa = 0;
	for (int i = 0; i < num; i++) {
		credithours[i] = 0;
		gpa += (grade[i] * credithours[i]) / totalcredithours;
	}

		const double perfectgpa = 4.0;
		cout << "Your GPA on a " << perfectgpa << " point scale is " << gpa << "\n";

	
		int choice;
		double aweight = 0, qweight = 0, tweight = 0, fweight = 0;
		do
		{
			cout << "Let's begin entering assignments for each course. \n";
			for (int i = 0; i < num; i++)
			{
				cout << "Choose " << i + 1 << " for " << coursecode[i] << "\n";
			}
			cout << "Enter your choice and press return: \n";
			cin >> choice;
			switch (choice)
			{
			case 1:
				//code to start entering assignments for course[0]
				//% of category, 4 types, # of assignments in each category
				// make categories, % array, # of assign. array, grade [2,5] (2D array)
				cout << "Enter the grade weight for assignments, quizzes, tests, and the final exam in percent form. Then press return. \n";
				cout << "Assignments: ";
				cin >> aweight;
				cout << "Quizzes: ";
				cin >> qweight;
				cout << "Tests: ";
				cin >> tweight;
				cout << "Final Exam: ";
				cin >> fweight;
				// need some way to check that all the percents add up to 100
				break;
			default:
				cout << "Not a valid choice. \n"
					<< "Choose again. \n";
			}
		} while (choice < num);

		// putting a predefined function here unrelated to my program. 
		// have not found a place where I need a predefined function yet
		
		int x;
		srand(22);
		x = rand();
		cout << x;

	return 0; 
}