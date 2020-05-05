#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
#include "Header.h"



int main()
{
    std::string playerName;
    int amount; // hold player's balance amount
    int bettingAmount;
    int guess;
    int dice; // hold computer generated number
    char choice;

    srand(time(0)); // "Seed" the random generator

    drawLine(60,'_');
    std::cout << "\n\n\n\t\tCASINO GAME\n\n\n\n";
    drawLine(60,'_');

    std::cout << "\n\nEnter Your Name : ";
    getline(std::cin, playerName);

    std::cout << "\n\nEnter Deposit amount to play game : $";
    std::cin >> amount;

    do
    {
        system("cls");
        rules();
        std::cout << "\n\nYour current balance is $ " << amount << "\n";

		// Get player's betting amount
        do
        {
            std::cout <<playerName<<", enter money to bet : $";
            std::cin >> bettingAmount;
            if(bettingAmount > amount)
                std::cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bettingAmount > amount);

		// Get player's numbers
        do
        {
            std::cout << "Guess your number to bet between 1 to 10 :";
            std::cin >> guess;
            if(guess <= 0 || guess > 10)
                std::cout << "Please check the number!! should be between 1 to 10\n"
                    <<"\nRe-enter data\n ";
        }while(guess <= 0 || guess > 10);

        dice = rand()%10 + 1; // Will hold the randomly generated integer between 1 and 10

        if(dice == guess)
        {
            std::cout << "\n\nGood Luck!! You won Rs." << bettingAmount * 10;
            amount = amount + bettingAmount * 10;
        }
        else
        {
            std::cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }

        std::cout << "\nThe winning number was : " << dice <<"\n";
        std::cout << "\n"<<playerName<<", You have $ " << amount << "\n";
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
    std::cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
    drawLine(70,'=');

    return 0;
}