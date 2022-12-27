#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream myFile1;
	myFile1.open("users.txt", fstream::out | fstream::app);
	string input;
	getline(cin, input);
	myFile1 << input << "\n";
	myFile1.close();
	fstream myFile2;
	myFile2.open("users.txt", fstream::in);
	string buffer;

	while (getline(myFile2, buffer)) {
		cout << buffer << "\n";
	}
	myFile2.close();
}
