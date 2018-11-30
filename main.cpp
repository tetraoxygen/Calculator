#include <iostream>
#include <string>
#include <string>
#include <sstream>
#include <cstdlib>     /* strtof */
using namespace std;

// Lets me check if a number is a float.
// It just makes the code look nicer, there are messier and faster ways of doing this.
//Shamelessly stolen from here: https://stackoverflow.com/questions/447206/c-isfloat-function

bool isFloat( string myString ) {
	std::istringstream iss(myString);
	float f;
	iss >> noskipws >> f; // noskipws considers leading whitespace invalid
// Check the entire string was consumed and if either failbit or badbit is set
	return iss.eof() && !iss.fail();
}

int main() {
	// Stores the user's operator inputs.
	string input = "";
	// This is a string so I can check for if the input number isn't a number without the program crashing.
	string inputNum;
	float fInputNum;
	// I need an actual float to store the answer.
	float answer;
	cout << "NotCalzy by Tetraoxygen Software" << endl;
	cout << "Type an answer, and then terminate it with '='." << endl << "> ";
	cin >> inputNum;
	if(isFloat(inputNum) == false){
		cout << "Hold on there, that's not a number. Let's fix that. " << endl << ">";
		cin >> inputNum;
	}
	previousNumber = inputNum;
	answer = previousNumber;

	// DEBUG
	cout << previousNumber << endl;
	while (input != "="){
		cout << "Do what to " << answer << "?" << endl << ">";
		cin >> input;
		if (input == "+"){
			cout << "Add what to '" << answer << "'?" << endl << ">";
			cin >> inputNum;
			while(isFloat(inputNum) == false){
				cout << "Hold on there, that's not a number. Let's fix that. " << endl << "Add what to '" << answer << "'?" << endl << ">";
				cin >> inputNum;
			}
			fInputNum =
			// Appends " + [inputNum]" to the number.
			answer = answer + " + " + fInputNum;
			// strtof converts a string to a float.
			//Makes the previousNumber, well, the previous number.
			previousNumber = inputNum;
		}
	}
	cout << "First, how many digits of precision would you like to this answer?" << endl;
	cout << endl << "The answer to the answer " << answer << " is ";
}

