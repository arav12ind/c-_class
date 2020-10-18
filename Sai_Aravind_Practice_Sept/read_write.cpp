#include<iostream>

using namespace std;

int main ()
{
char line [501];

cout << "Enter a line: " << endl;

cin.read(line, 20);

// reads 20 characters, discard rest of the characters

cout.write(line,cin.gcount());

cout <<endl;

cout << cin.gcount() << " Character read" << endl;

return 0;
}
//read () is a member function of istream class, it can be invoked only by the object of istream class

// gcount () is a member function of istream class

// 1/ write() is a member function of ostream class, it can invoked only be the object of ostream class
