#include <iostream>
#include <cstdio>

#include "QtStarter.h"
#include "ui_CGGameMainWindow.h"

#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime> //Needed to seed random numbers
#include <iomanip> //Needed to display bank amount and bet correctly
#include "Die.h"

void displayResults(float currentBank, float currentBet);

CasinoGuessingGameMainWindow :: CasinoGuessingGameMainWindow(QMainWindow *parent):
// Build a GUI  main window for two dice.

        playerName { "Fred" },  // Define default values
        amount { 1000.00 },
        bettingAmount {0},
        textOutput { "" },
        die1Amount{0},
        die2Amount{0},
        guessValue { 0 },
        die1 { 6, 1, 1, "red", false, "Plastic" },
        die2 { 6, 1, 1, "green", false, "Plastic" }


{
    setupUi(this);

    //TODO: Let user pick different type of dice. Perhaps do this in QT?


    srand(time(0)); // "Seed" the random generator with computer clock

    //Connect all the buttons
    QObject::connect(resetButton, SIGNAL(clicked()), this, SLOT(resetButtonClickedHandler()));
    QObject::connect(currentBetUI, SIGNAL(valueChanged(int)), this, SLOT(currentBetUIValueChangedHandler()));
    QObject::connect(guess2Button, SIGNAL(clicked()), this, SLOT(guess2ButtonClickedHandler()));
    QObject::connect(guess3Button, SIGNAL(clicked()), this, SLOT(guess3ButtonClickedHandler()));
    QObject::connect(guess4Button, SIGNAL(clicked()), this, SLOT(guess4ButtonClickedHandler()));
    QObject::connect(guess5Button, SIGNAL(clicked()), this, SLOT(guess5ButtonClickedHandler()));
    QObject::connect(guess6Button, SIGNAL(clicked()), this, SLOT(guess6ButtonClickedHandler()));
    QObject::connect(guess7Button, SIGNAL(clicked()), this, SLOT(guess7ButtonClickedHandler()));
    QObject::connect(guess8Button, SIGNAL(clicked()), this, SLOT(guess8ButtonClickedHandler()));
    QObject::connect(guess9Button, SIGNAL(clicked()), this, SLOT(guess9ButtonClickedHandler()));
    QObject::connect(guess10Button, SIGNAL(clicked()), this, SLOT(guess10ButtonClickedHandler()));
    QObject::connect(guess11Button, SIGNAL(clicked()), this, SLOT(guess11ButtonClickedHandler()));
    QObject::connect(guess12Button, SIGNAL(clicked()), this, SLOT(guess12ButtonClickedHandler()));
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

void CasinoGuessingGameMainWindow::playTurn(int guessedValue) {
    // Player guesses a number between 2 and 12
    //TODO: Convert error-handling into try-catch statements?
    if (bettingAmount < amount || bettingAmount == amount){ //Makes sure player has enough money in bank
        int rollValue = 0; //The actual number on the Dice
        die1Amount= die1.roll();//Sets Value for Die 1
        die2Amount= die2.roll();//Sets Value for Die 2
        rollValue = die1Amount+die2Amount; //The Dice are rolled, and summed into a roll amount
        //textOutputUI->setText(QString::fromStdString(textOutput));
        die1OutputUI->setText(QString::fromStdString(std::to_string(die1Amount))); //Displays Die 1 Value
        die2OutputUI->setText(QString::fromStdString(std::to_string(die2Amount))); //Displays Die 2 Value

        if(rollValue == guessedValue) { //Branch if the guess is the same as the dice
            double multiplier = 0;//A multiplier variable is initialized
            switch (guessedValue) { //Assigns a multiplier based on how likely the number is to appear
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
            amount = amount + (bettingAmount * multiplier);
            textOutputUI->setText(QString::fromStdString(std::to_string(amount)));
            updateUI();
        }
        else {
            amount = amount - (bettingAmount);
            if (amount <0) {
                amount =0;
            }
            textOutputUI->setText(QString::fromStdString(std::to_string(amount)));
            updateUI();
        }
    }

}

void CasinoGuessingGameMainWindow::currentBetUIValueChangedHandler() { //Player makes a bet
    printf("Counter for current bet is at: ");
    bettingAmount = currentBetUI->value();
    std::cout<<bettingAmount << "\n\n";
}
void CasinoGuessingGameMainWindow::guess2ButtonClickedHandler() {//Player guesses 2
    printf("Pushed Button 2\n");
    guessValue = 2;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess3ButtonClickedHandler() {//Player guesses 3
    printf("Pushed Button 3\n");
    guessValue = 3;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess4ButtonClickedHandler() {//Player guesses 4
    printf("Pushed Button 4\n");
    guessValue = 4;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess5ButtonClickedHandler() {//Player guesses 5
    printf("Pushed Button 5\n");
    guessValue = 5;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess6ButtonClickedHandler() {//Player guesses 6
    printf("Pushed Button 6\n");
    guessValue = 6;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess7ButtonClickedHandler() {//Player guesses 7
    printf("Pushed Button 7\n");
    guessValue = 7;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess8ButtonClickedHandler() {//Player guesses 8
    printf("Pushed Button 8\n");
    guessValue = 8;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess9ButtonClickedHandler() {//Player guesses 9
    printf("Pushed Button 9\n");
    guessValue = 9;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess10ButtonClickedHandler() {//Player guesses 10
    printf("Pushed Button 10\n");
    guessValue = 10;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess11ButtonClickedHandler() {//Player guesses 11
    printf("Pushed Button 11\n");
    guessValue = 11;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::guess12ButtonClickedHandler() { //Player guesses 12
    printf("Pushed Button 12\n");
    guessValue = 12;
    playTurn(guessValue);
}
void CasinoGuessingGameMainWindow::resetButtonClickedHandler() { //Resets the game
    printf("Game Reset()\n");
    amount= 1000.00;

    updateUI();
}