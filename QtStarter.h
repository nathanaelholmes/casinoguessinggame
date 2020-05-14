//
// Created by Arana Fireheart on 2/2/20.
//

#ifndef QTSTARTERSTARTER_QTSTARTER_H
#define QTSTARTERSTARTER_QTSTARTER_H

#include "ui_CGGameMainWindow.h"
#include "Die.h"
#include <QMainWindow>

class CasinoGuessingGameMainWindow : public QMainWindow, private Ui::QtStarterMainWindow {
Q_OBJECT

public:
    CasinoGuessingGameMainWindow(QMainWindow *parent = nullptr);
    void printStringRep();
    void updateUI();

private:
    std::string playerName;
    double amount;
    std::string textOutput;
    Die die1, die2;
    int guessValue;

public Q_SLOTS:
    void playTurn(int guessedValue);
    void pushButtonClickedHandler();
    void guess2ButtonClickedHandler();
    void guess3ButtonClickedHandler();
    void guess4ButtonClickedHandler();
};

#endif //QTSTARTERSTARTER_QTSTARTER_H
