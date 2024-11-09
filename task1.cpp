#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // lets start the game select any random number between 1 to 100
    int targetNumber = rand() % 100 + 1;

    int guess = 0; 
    int attempts = 0;
    cout << "Welcome to the of Guessing the Number!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it is im correct!" << endl;


    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < targetNumber) {
            cout << "Your guess is too low. Try again!" << endl;
        } else if (guess > targetNumber) {
            cout << "Your guess is too high. Try again!" << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
            cout << "It took you " << attempts << " attempts to guess the correct number." << endl;
        }

    } while (guess != targetNumber);

    return 0;
}
