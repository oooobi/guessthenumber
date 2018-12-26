//
//  guessthenumber.cpp
//  
//
//  Created by Obinna Ekezie on 25/12/2018.
//

#include <iostream>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int secret_number = rand() % 101;
    int number_of_guess = 15;
    int player_guess;
    
    std::cout << "Welcome to my guessthenumber game.\n";
    std::cout << "Pick a number between 1 and 100.\n";
    std::cin >> player_guess;
    
    while(player_guess != secret_number)
    {
        if(player_guess > secret_number)
        {
            number_of_guess--;
            std::cout << "You chose a higher number than the secret number. You have " << number_of_guess << " more guesses. Try Again.\n";
            std::cin >> player_guess;
        }
        else if(player_guess < secret_number)
        {
            number_of_guess--;
            std::cout << "You chose a smaller number than the secret number. You have " << number_of_guess << " more guesses. Try Again.\n";
            std::cin >> player_guess;
        }
    }
}
