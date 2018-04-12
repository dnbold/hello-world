/***************************************************************/
/* Assignment : Lab 01                                         */
/* File : BoldL01b.cpp                                         */
/* Author : Dakota Bold                                        */
/* Date : Spring 2018                                          */
/* Description : This program will write the words             */
/* "Hello World" on the standard console output screen.        */
/***************************************************************/

// Include input and output stream and string libraries.
#include <iostream>
#include <string>
#include <cmath>
// Use the standard namespace.
// This will allow the program to write to cout and read from cin.
using namespace std;

// Prototype for function to ask the user for their name.
string GetName (ostream & outs, istream & ins);
// Prototype for function to print the message.
void PrintMessage (string message, ostream & outs);

int main()
{
  // Declare a string variable to hold the user's name.
  // Call the GetName function to get the user's name and
  // store the returned value in usersname.
  string username = GetName (cout, cin); 
  // Create a message by concatenating hello and the user's
  // name.
  string mymessage = "Hello " + username;
  // Call the PrintMessage function to print the message.
  PrintMessage (mymessage, cout);
  // Exit from the program.
  return 0;
}

/***************************************************************/
/* Function : GetName                                          */
/* Parameters : output and input streams                       */
/* Return value : a string                                     */
/* Description : This function will write a message            */
/* requesting the user's name to the output stream. It         */
/* will then read the user's name from the input stream        */
/* and store it in a string variable. Finall, it will          */
/* return the string variable containing the name.             */
/***************************************************************/

string GetName (ostream & outs, istream & ins)
{
  // Declare a string variable to hold the user's name.
  string name;
  // Request the user's name.
  outs << "Please enter your name:" << endl;
  // Read the user's name from ins - the standard input - generally
  // the keyboard.
  ins >> name; 
  return name;
}

/***************************************************************/
/* Function : PrintMessage                                     */
/* Parameters : message string and output stream               */
/* Return value : none (void)                                  */
/* Description : This function will write the message to       */
/* the output stream.                                          */
/***************************************************************/

void PrintMessage (string message, ostream & outs)
{
  // Declare a variable to hold the desired number of lines.
  float maxAngle = 6.28;
  // Declare a variable to count the lines as they are printed.
  float angle = 0.0;
  float angle2 = 0.0;
  while (angle <= 6.28)
  {
   	outs << "| ";
   	// Declare a variable to hold the desired number of spaces.
    	int numSpaces = int (20 + 20 * sin (angle));
    	// Declare a variable to count the spaces as they are printed.
    	int spaceCount = 0;
    	while (spaceCount < numSpaces)
    	{	
     		 // Write a single space to outs.
      		outs << ' ';
      		// Increment the space counter.
     		spaceCount++;
    	}
    	// Write the message to outs.
    	outs << message;
	while (spaceCount <= 39)
        {
		outs << ' ';
		spaceCount++;
	}
	outs << " | ";
   	// Increment the line counter. 
     	numSpaces = int (20 + 20 * cos (angle2));
    	spaceCount = 0;
    	while (spaceCount < numSpaces)
    	{
      		outs << ' ';
      		spaceCount++;
    	}
    	outs << message;
	while (spaceCount <= 39)
	{
		outs << ' ';
		spaceCount++;
	}
        outs << " |" << endl;
    	angle += 0.3;
	angle2 += 0.3;
   
  }
}	
