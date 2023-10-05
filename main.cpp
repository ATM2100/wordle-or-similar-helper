#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>

int main()
{
    int size = 2315; //different wordle words
    int guesses = 6; // length of the game
    std::srand(time(NULL));

    std::cout << time(NULL) << "\n";

    char word[6];
    char guess[6];

    std::ifstream input;
    input.open("Wordle.txt");

    // determain the word to guess
    
    int guessPosition = rand() % size;
    std::cout << guessPosition << "\n";

    for(int i = 0; i < size; ++i)
    {
        if(i == guessPosition)
        {
            input.getline(word, 256, '\n');
            std::cout << word << "\n";
            break;
        }
        input.ignore(256, '\n');
    }

    char first[26], second[26], third[26], fourth[26], fifth[26]; //guessed letters that are in the word or in a spot
    char inword[26]; //guessed letters that are in the word
    char knowns[6] = {' ', ' ', ' ', ' ', ' ', '\0'};
    //guessing game
    for(int i = 0; i < guesses; ++i)
    {
        for(int j = 0; j < 5/*number of letters in word*/; ++j)
        {
            //correct case
            if(guess == word)
            {
                std::cout << "correct\n";
                break;
            }

            //they don't match
            if(guess[j] == word[j]) 
                knowns[j] = guess[j];
            else
            {

                for(int k = 0; k < 5; ++k)
                {
                    if(guess[j] == word[k])
                    {
                        
                    }
                }
            }
        }
    }

    return 0;
}
