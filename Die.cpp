//
// Created by offbeatmatt on 2/14/2020.
//
//File to create the dice class
#include "Die.h"
#include <random>
#include <string>

Die::Die(int startingNumberofSides, int startingIncrement,
         int startingLowestNum, std::string startingColor, bool startingIsSymbols, std::string startingMaterial){
    numSides = startingNumberofSides;
    increment = startingIncrement;
    lowestNumOnDie = startingLowestNum;
    color = startingColor;
    material = startingMaterial;
    isSymbols = startingIsSymbols;
}

int Die::roll(){ //Generate random number between increment and number of sides multiply  by increment (count by 10s, etc)
    return (rand() % numSides + (lowestNumOnDie/increment)) * increment;
}
void Die::setNumSides (int newNumSides){
    numSides = newNumSides;
}
int Die::getNumSides (){
    return numSides;
}
void Die::setIncrement (int newIncrement){
    increment = newIncrement;
}
int Die::getIncrement (){
    return increment;
}
void Die::setColor (std::string newNewColor){
    color = newNewColor;
}
std::string Die:: getColor (){
    return color;
}
void Die::setIsSymbol (bool newIsSymbol){
    isSymbols = newIsSymbol;
}
bool Die::getIsSymbol (){
    return isSymbols;
}
void Die::setMaterial (std::string newMaterial){
    material = newMaterial;
}
std::string Die::getMaterial(){
    return material;
}
void Die::setLowestNumOnDie(int newLowestNum){
    lowestNumOnDie = newLowestNum;
}
int Die::getLowestNumOnDie(){
    return lowestNumOnDie;
}
void Die::setCurrentValue(int newCurrentValue){
    currentValue = newCurrentValue;
}
int Die::getCurrentValue(){
    return currentValue;
}