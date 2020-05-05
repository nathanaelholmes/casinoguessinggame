//
// Created by 16038 on 5/4/2020.
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
    std::cout << "\t1. Choose any number between 1 to 10\n";
    std::cout << "\t2. If you win you will get 10 times of money you bet\n";
    std::cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(80,'-');
}

void drawLine(int n, char symbol)
{
    for(int i=0; i<n; i++)
        std::cout << symbol;
    std::cout << "\n" ;
}

