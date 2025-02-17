#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100: " << endl;

    while (true) {
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again: ";
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
            break;
        }
    }

    return 0;
}
