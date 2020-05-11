//
// Created by offbeatmatt on 2/14/2020.
//

#ifndef CRAPS_DIE_H
#define CRAPS_DIE_H

#include <string>

void playGame();
void playFirstRoll(int rollValue);
void playSecondRoll(int rollValue);

class Die {
protected:
    int numSides;
    int increment;
    int currentValue;
    std::string color;
    std::string material;
    int lowestNumOnDie;
    bool isSymbols;

public: //Put setters & getters, roll
    Die(int startingNumberofSides, int startingIncrement,
        int startingLowestNum, std::string startingColor,bool startingIsSymbols, std::string startingMaterial );
    int roll();
    void setNumSides (int newNumSides);
    int getNumSides ();
    void setIncrement (int newIncrement);
    int getIncrement ();
    void setColor (std::string newNewColor);
    std::string getColor ();
    void setIsSymbol (bool newIsSymbol);
    bool getIsSymbol ();
    void setMaterial (std::string newMaterial);
    std::string getMaterial();
    void setLowestNumOnDie(int newLowestNum);
    int getLowestNumOnDie();
    void setCurrentValue(int newCurrentValue);
    int getCurrentValue();
};
#endif //CRAPS_DIE_H
