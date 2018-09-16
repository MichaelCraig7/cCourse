#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

//The entry point for the app
int main() {
	PrintIntro();

	//loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++) {
		GetGuessAndPrintBack();
		cout << endl;
	}

	return 0;
}

void PrintIntro() {
	// introduce game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	return;
}

string GetGuessAndPrintBack() {
	// get guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// repeat the guess back to player
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}