#include <iostream>
#include <string>

using namespace std;

int main() {
	// introduce game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";

	// get guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// repeat the guess back to player
	cout << "Your guess was: " << Guess << endl;

	// get guess from the player
	cout << "Enter your guess: ";
	getline(cin, Guess);

	// repeat the guess back to player
	cout << "Your guess was: " << Guess << endl;

	cout << endl;
	return 0;
}