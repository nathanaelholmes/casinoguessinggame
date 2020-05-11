//
// Created by offbeatmatt on 5/4/2020.
//

#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
#include "Header.h"

void rules()
{
    system("cls");
    std::cout << "\n\n";
    drawLine(80,'-');
    std::cout << "\t\tRULES OF THE GAME\n";
    drawLine(80,'-');
    std::cout << "\t1. Choose any number between 2 and 12.\n";
    std::cout << "\t2. If your number matches the combined value on the dice,\n";
    std::cout << "\tyou will win the following based on the value:\n\n";
    std::cout << "\t\t7: X6 multiplier\n";
    std::cout << "\t\t6 or 8: X7.2 multiplier\n";
    std::cout << "\t\t5 or 9: X9 multiplier\n";
    std::cout << "\t\t4 or 10: X12 multiplier\n";
    std::cout << "\t\t3 or 11: X18 multiplier\n";
    std::cout << "\t\t2 or 12: X36 multiplier\n\n";
    std::cout << "\t3. If the number you guess does not match the dice,\n";
    std::cout << "\tyou will lose your betting amount.\n\n";

    drawLine(80,'-');
}

void drawLine(int n, char symbol)
{
    for(int i=0; i<n; i++)
        std::cout << symbol;
    std::cout << "\n" ;
}

