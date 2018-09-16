#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

//The entry point for the app
int main() {
	PrintIntro();

	GetGuessAndPrintBack();
	GetGuessAndPrintBack();

	cout << endl;
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

// get guess from the player
string GetGuessAndPrintBack() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// repeat the guess back to player
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}