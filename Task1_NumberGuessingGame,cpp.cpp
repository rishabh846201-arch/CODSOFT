#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "==================================" << endl;
    cout << "      NUMBER GUESSING GAME" << endl;
    cout << "==================================" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess > secretNumber)
        {
            cout << "Too High! Try Again." << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too Low! Try Again." << endl;
        }
        else
        {
            cout << "\nCongratulations! You guessed the correct number: "
                 << secretNumber << endl;
        }

    } while (guess != secretNumber);

    return 0;
}