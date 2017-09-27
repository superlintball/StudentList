/*
 * Author Raveen Karnik
 * Date: 9-21-17
 * This program allows user to add and remove students from a list of students
 */

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

struct Student
{
	char firstName[80];
	char lastName[80];
	int id;
	float gpa;
};

&Student addStudent()
{
	Student person;
	cout << "Enter student's first name." << endl;
	cin >> person.firstName;
	cout << "Enter student's last name." << endl;
	cin >> person.lastName;
	cout << "Enter student's ID Number." << endl;
	cin >> person.id;
	cout << "Enter student's GPA." << endl;
	cin >> person.gpa;
	return &person;
};

//main code block
int main()
{
	vector<Student*> studentList;
	vector<Student*>* listPtr = &studentList;
	studentList.reserve(10);
	char input[8];
	bool keepGoing = true;
	while(keepGoing)
	{
		cout << "\"ADD\", \"PRINT\", or \"DELETE\" student(s)?" << endl;
		cout << "Type \"QUIT\" to exit." << endl;
		cin >> input;
		if(strcmp(input, "ADD") == 0)
		{
			studentList.push_back(addStudent());
		} else if(strcmp(input, "QUIT") == 0)
		{
			keepGoing = false;
		} else
		{
			cout << "Sorry, I couldn't understand that." << endl;
		}
	}
	return 0;
}
