// Guess Number Game
#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int actualNum = rand() % 100, guessedNum;
    
    // Welcome the player
    cout << "Welcome to the Guess Number Land!" <<endl;
    cout << "Guess the number b/w 0-100 to win the game, you have 10 lives\n" <<endl;
  
    // game part
    int livesLeft = 10;
    while (true)
    {
        cin >> guessedNum;
        // validating input 
        while (guessedNum > 100 || guessedNum < 0) {
            cout << "[inputERROR] Please enter a number b/w 0 and 100" <<endl;
            cout<<"Value : ";
            cin >> guessedNum;
        }
        
        // Logic
        if (guessedNum == actualNum)
        {
            cout << "Woohoo! You have guessed the number right wiht " << livesLeft << " lives left!" <<endl;
            break;
        }
        else if (guessedNum < actualNum) {
            cout << "Too Low!" <<endl;
        }
        else cout << "Too High!" <<endl;
        
        livesLeft--;   
        if (livesLeft == 0) { 
            cout << "You have run out of lives." <<endl;
                break;
        }
    }
    return 0;
}

