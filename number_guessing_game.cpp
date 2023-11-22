#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() 
{
    int randomNum, guess;
    srand(time(0));
    randomNum = rand() % 100 + 1;

    cout << "Guess a number between 1 and 100: ";

    do 
    {
        cin >> guess;
        if (guess > randomNum) 
        {
            cout << "Too high! Try again: ";
        } else if (guess < randomNum) 
        {
            cout << "Too low! Try again: ";
        } else 
        {
            cout << "Congratulations! You guessed the correct number.";
        }
    } 
    while (guess != randomNum);

    return 0;
}
