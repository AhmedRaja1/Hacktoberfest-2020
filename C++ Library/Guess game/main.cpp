// Guess Number Game
#include <iostream>
#include <string>
#include <random>
#include <ctime>

int main()
{
    srand(time(0));
    int actualNum = rand() % 100, guessedNum;
    
    // Welcome the player
    std::cout << "Welcome to the Guess Number Land!" << std::endl;
    std::cout << "Guess the number b/w 0-100 to win the game, you have 10 lives\n" << std::endl;
  
    // game part
    int livesLeft = 10;
    while (true)
    {
        std::cin >> guessedNum;
        // validating input 
        while (guessedNum > 100 || guessedNum < 0) {
            std::cout << "[inputERROR] Please enter a number b/w 0 and 100" << std::endl;
            std::cin >> guessedNum;
        }
        
        // Logic
        if (guessedNum == actualNum)
        {
            std::cout << "Woohoo! You have guessed the number right wiht " << livesLeft << " lives left!" << std::endl;
            break;
        }
        else if (guessedNum < actualNum) {
            std::cout << "Too Low!" << std::endl;
        }
        else std::cout << "Too High!" << std::endl;
        
        livesLeft--;   
        if (livesLeft == 0) { 
            std::cout << "You have run out of lives." << std::endl;
                break;
        }
    }
    return 0;
}

