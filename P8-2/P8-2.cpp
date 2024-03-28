#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {

	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		cout << "Word count: " << countWords(input) << endl;
	}

}

int countWords(string str) {
	int wordCounter = 0;
	if (str.length() < 1) {
		wordCounter = 0;
	}
	else {
		wordCounter = 1;
	}

	for (int i = 0; i < str.length(); i++) {
		string previousLetter = "";
		string currentLetter = str.substr(i, 1);
		if (i > 0) {
			previousLetter = str.substr(i - 1, 1);
		}
		if (currentLetter == " " && (previousLetter != " ")) {
			wordCounter++;
		}
	}
	return wordCounter;
}