#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {

	cout << countWords("one two three 4    5 6 7 eight");

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