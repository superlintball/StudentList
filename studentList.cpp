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

void addStudent(vector<Student*> &stList)
{
	stList.push_back(new Student());
	cout << "Enter student's first name." << endl;
	cin >> stList.back()->firstName;
	cout << "Enter student's last name." << endl;
	cin >> stList.back()->lastName;
	cout << "Enter student's ID Number." << endl;
	cin >> stList.back()->id;
	cout << "Enter student's GPA." << endl;
	cin >> stList.back()->gpa;
};

void printStudents(vector<Student*> stList)
{
	std::vector<Student*>::iterator it;
	for(it = stList.begin(); it != stList.end(); it++)
	{
		// idea from the C++ Forum, answer from user JLBorges
		// http://www.cplusplus.com/forum/general/71342/
		// accesses object position by taking the difference between the iterator and the beginning
		int position = it - stList.begin();

		cout << stList[position]->firstName << " " << stList[position]-> lastName;
		cout << ", " << stList[position]->id << ", " << stList[position]->gpa << endl;
	}
}

void deleteStudent(vector<Student*> &stList)
{
	cout << "Enter ID number of student to be deleted." << endl;
	int id;
	cin >> id;
	std::vector<Student*>::iterator it;
	for(it = stList.begin(); it != stList.end(); it++)
	{
		int position = it - stList.begin();
	}
}

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
		if(strcmp(input, "ADD") == 0 || strcmp(input, "add") == 0)
		{
			addStudent(studentList);
			cout << "Student Added." << endl << endl;
		} else if(strcmp(input, "PRINT") == 0 || strcmp(input, "print") == 0)
		{
			printStudents(studentList);
			cout << "All Students Printed." << endl << endl;
		} else if(strcmp(input, "DELETE") == 0 || strcmp(input, "delete") == 0)
		{
			deleteStudent(studentList);
		} else if(strcmp(input, "QUIT") == 0 || strcmp(input, "quit") == 0)
		{
			keepGoing = false;
		} else
		{
			cout << "Sorry, I couldn't understand that." << endl << endl;
		}
	}
	return 0;
}
