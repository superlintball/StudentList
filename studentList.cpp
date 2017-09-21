/*
 * Author Raveen Karnik
 * Date: 9-21-17
 * This program allows user to add and remove students from a list of students
 */

#include <iostream>
#include <cstring>
using namespace std;

void quit();

//main code block
int main()
{	
	char input[8];
	bool keepGoing = true;
	while(keepGoing)
	{
		cin >> input;
		if(strcmp(input, "QUIT") == 0)
		{
			keepGoing = false
		} else
		{
			cout << "Sorry I couldn't understand that." << endl;
		}
	}
	return 0;
}
