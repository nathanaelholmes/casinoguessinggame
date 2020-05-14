#include <iostream>
#include <cstdio>

#include "QtStarter.h"
#include "ui_CGGameMainWindow.h"

#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime> //Needed to seed random numbers
#include <iomanip> //Needed to display bank amount and bet correctly
#include "Header.h"
#include "Die.h"

void displayResults(float currentBank, float currentBet);

CasinoGuessingGameMainWindow :: CasinoGuessingGameMainWindow(QMainWindow *parent):
// Build a GUI  main window for two dice.

        playerName { "Fred" },  // Define default values
        amount { 10000.00 },
        textOutput { "" },
        die1 { 6, 1, 1, "red", false, "Plastic" },
        die2 { 6, 1, 1, "green", false, "Plastic" }

{
    setupUi(this);

    //TODO: Let user pick different type of dice. Perhaps do this in QT?


    srand(time(0)); // "Seed" the random generator with computer clock

    //Title Screen
//    drawLine(60,'_');
//    std::cout << "\n\n\n\t\tCASINO DICE GUESSING GAME\n\n\n\n";
//    drawLine(60,'_');
//    //Character Enters name
//    std::cout << "\n\nEnter Your Name : ";
//    std::string playerName = ""; //String variable for the player's name
//    getline(std::cin, playerName);
//    //Character enters starting bank value
//    std::cout << "\n\nEnter starting amount in the bank : $";
//    double amount = 0; // Double variable that holds the amount in the bank
//    std::cin >> amount;
    //TODO: Convert Error Handling into Try-Catch statements?
//    while (!std::cin || amount <.01) { //Error handling for non-doubles and non-positive numbers
//        std::cin.clear();
//        std::cin.ignore(10000, '\n');
//        std::cout << "Try again. The number must be greater than 0.\n";
//        std::cout << "\n\nEnter starting amount in the bank : $";
//        std::cin>>amount;
//    }

    //Closing Sequence
    std::cout << "\n\n\n";
    drawLine(70,'=');
    std::cout << "\n\nThanks for playing game. Your balance amount is $ " << std::fixed << std::setprecision(2) << std::setfill('0') <<amount << "\n\n";
    drawLine(70,'=');

    QObject::connect(pushButton, SIGNAL(clicked()), this, SLOT(pushButtonClickedHandler()));
}
void CasinoGuessingGameMainWindow::printStringRep() {
    // String representation for QtStarter.
    return;
}
void CasinoGuessingGameMainWindow::updateUI() {
//    printf("Inside updateUI()\n");
    textOutputUI->setText(QString::fromStdString(textOutput));
    textOutputUI->setText(QString::fromStdString(std::to_string(amount)));
}


// Player asked for another roll of the dice.
void CasinoGuessingGameMainWindow::pushButtonClickedHandler() {
    printf("Inside pushButtonClickedHandler()\n");

    // Get player's betting amount
    double bettingAmount = 0; //Double variable that holds a bet amount less than or equal to the bank amount
    bettingAmount = currentBetUI->value();
    //TODO: Convert error handling into try-catch statements?
//        while (!std::cin || bettingAmount<=0) { //Error Handling for non-doubles and non-positive numbers
//            std::cin.clear();
//            std::cin.ignore(10000, '\n');
//            std::cout << "Try again. The bet must be greater than 0.\n\n";
//            std::cout <<playerName<<", enter money to bet : $";
//            std::cin >> bettingAmount;
//        }
//        if(bettingAmount > amount) //Checks that bet is less than bank amount
//            std::cout << "Your betting amount is more than your current balance\n"
//                      <<"\nRe-enter data\n ";

    // Player guesses a number between 2 and 12
    int guess = 0; //Integer to guess the number on a dice
    std::cout << "Guess your number to bet between 2 and 12 :";
    std::cin >> guess;
    //TODO: Convert error-handling into try-catch statements?
    while (!std::cin || guess<=1 || guess >12) { //Error-Handling for non-integers or integers that aren't between 2 and 12
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Try again. The number must be between 2 and 12.\n";
        std::cout << "Guess your number to bet between 2 and 12 :";
        std::cin >> guess;
    }
    int rollValue = 0; //The actual number on the Dice
    rollValue = die1.roll() + die2.roll(); //The Dice are rolled, and summed into a roll amount

    if(rollValue == guess) { //Branch if the guess is the same as the dice

        double multiplier = 0;//A multiplier variable is initialized

        switch (guess) { //Assigns a multiplier based on how likely the number is to appear
            case 7: //1 in 6 chance of rolling a 7
                multiplier = 6;
                break;
            case 6: //5 in 36 chance of rolling a 6
                multiplier = 7.2;
                break;
            case 8: //5 in 36 chance of rolling a 6
                multiplier = 7.2;
                break;
            case 5: //1 in 9 chance of rolling a 5
                multiplier = 9;
                break;
            case 9: //1 in 9 chance of rolling a 9
                multiplier = 9;
                break;
            case 4: //1 in 12 chance of rolling a 4
                multiplier = 12;
                break;
            case 10: //1 in 12 chance of rolling a 10
                multiplier = 12;
                break;
            case 3: //1 in 18 chance of rolling a 3
                multiplier = 18;
                break;
            case 11: //1 in 18 chance of rolling a 3
                multiplier = 18;
                break;
            case 2: //1 in 36 chance of rolling a 2
                multiplier = 36;
                break;
            case 12: //1 in 36 chance of rolling a 12
                multiplier = 36;
                break;
            default:
                std::cout <<"Error in program.";
                break;
                //TODO: Insert "throw" error statement into default if number is not 2-12?
        }

        std::cout << "\n\nGood Luck!! You won $" << std::fixed << std::setprecision(2) << std::setfill('0') <<bettingAmount * multiplier; //Winning message
        amount = amount + bettingAmount * multiplier; //Bank amount updated
    } else {
        std::cout << "Bad Luck this time !! You lost $ "<< std::fixed << std::setprecision(2) << std::setfill('0') << bettingAmount <<"\n"; //Losing message
        amount = amount - bettingAmount; //Bank amount updated
    }

    std::cout << "\nThe winning number was : " << rollValue << "\n"; //Displays amount of dice
    std::cout << "\n"<<playerName<<", You have $ " << std::fixed << std::setprecision(2) << std::setfill('0') << amount << "\n"; //Displays new bank amount
    if(amount < .01) { //Sequence if player has no money left
        std::cout << "You have no money to play ";
    }
    //TODO:Implement so only y and n are options

    updateUI();
}