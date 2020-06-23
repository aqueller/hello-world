// Document your program using comments. It will help you down the line.

// Comments are ignored by the COMPILER

// This is a LINE COMMENT. It starts with a double slash and spans a single line

/* This is a BLOCK COMMENT.
   It may span over multiple lines up to a block comment delimiter */

// The following line is a compiler directive. It instructs the compiler
// to use a I/O library that we will be using in our program.

#include <iostream>

// We'll discuss namespace later in this session. For now, use it as-is

using namespace std; 

// Following is a FUNCTION. We'll study about functions later this course.
// the main() function is a special one. This is where every C++ program starts execution

void main()
{
	cout << "Hello Beautiful World!" << endl;		// Send message to screen
	cin.ignore();						// Freeze the screen display
	cin.get();
}
