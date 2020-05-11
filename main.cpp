#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
#include <iomanip>
#include "Header.h"

/*TODO: Probability mechanics. Make it so that 7 is the most likely roll and 2 and 12 are the least likely.
 * You can do this by randomly generating each die's number separately
 * and adding them together to create the amount on the dice.*/


int main()
{
    std::string playerName;
    double amount; // hold player's balance amount
    double bettingAmount;
    int guess;
    int dice; // hold computer generated number
    char choice;

    srand(time(0)); // "Seed" the random generator

    drawLine(60,'_');
    std::cout << "\n\n\n\t\tCASINO DICE GUESSING GAME\n\n\n\n";
    drawLine(60,'_');

    std::cout << "\n\nEnter Your Name : ";
    getline(std::cin, playerName);

    std::cout << "\n\nEnter starting amount in the bank : $";
    std::cin >> amount;
    //TODO: Throw error if user enters a character
    while (amount<=0) {
        std::cout << "Try again. The bank amount must be greater than 0.";
        std::cout << "\n\nEnter starting amount in the bank : $";
        std::cin >>amount;
    }

    do
    {
        system("cls");
        rules();
        std::cout << "\n\nYour current balance is $ " << std::fixed << std::setprecision(2) << std::setfill('0') << amount << "\n";

		// Get player's betting amount
        do
        {
            std::cout <<playerName<<", enter money to bet : $";
            std::cin >> bettingAmount;
            //TODO: Throw error if user enters a character
            while (bettingAmount<=0) {
                std::cout << "Try again. The bet must be greater than 0.\n\n";
                std::cout <<playerName<<", enter money to bet : $";
                std::cin >> bettingAmount;
            }
            if(bettingAmount > amount)
                std::cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bettingAmount > amount);

		// Get player's numbers

        std::cout << "Guess your number to bet between 2 and 12 :";
        std::cin >> guess;
        while (guess<=1 || guess >12) {
            std::cout << "Try again. The number must be between 2 and 12.\n";
            std::cout << "Guess your number to bet between 2 and 12 :";
            std::cin >> guess;
        }
        //TODO:Throw Error if entry is not an integer


        dice = rand()%11 + 2; // Will hold the randomly generated integer between 2 and 12

        if(dice == guess)
        {
            double multiplier = 0;

            switch (guess) {
                case 7:
                    multiplier = 6;
                    break;
                case 6:
                    multiplier = 7.2;
                    break;
                case 8:
                    multiplier = 7.2;
                    break;
                case 5:
                    multiplier = 9;
                    break;
                case 9:
                    multiplier = 9;
                    break;
                case 4:
                    multiplier = 12;
                    break;
                case 10:
                    multiplier = 12;
                    break;
                case 3:
                    multiplier = 18;
                    break;
                case 11:
                    multiplier = 18;
                    break;
                case 2:
                    multiplier = 36;
                    break;
                case 12:
                    multiplier = 36;
                    break;
                default:
                    std::cout <<"Error in program.";
                    break;
                    //TODO: Insert "throw" error statement into default if number is not 2-12.
            }

            std::cout << "\n\nGood Luck!! You won $" << std::fixed << std::setprecision(2) << std::setfill('0') <<bettingAmount * multiplier;
            amount = amount + bettingAmount * multiplier;
        }
        else
        {
            std::cout << "Bad Luck this time !! You lost $ "<< std::fixed << std::setprecision(2) << std::setfill('0') << bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }

        std::cout << "\nThe winning number was : " << dice <<"\n";
        std::cout << "\n"<<playerName<<", You have $ " << std::fixed << std::setprecision(2) << std::setfill('0') << amount << "\n";
        if(amount == 0)
        {
            std::cout << "You have no money to play ";
            break;
        }
        std::cout << "\n\n-->Do you want to play again (y/n)? ";
        std::cin >> choice;
    }while(choice =='Y'|| choice=='y');

    std::cout << "\n\n\n";
    drawLine(70,'=');
    std::cout << "\n\nThanks for playing game. Your balance amount is $ " << std::fixed << std::setprecision(2) << std::setfill('0') <<amount << "\n\n";
    drawLine(70,'=');

    return 0;
}