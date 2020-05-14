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
    void updateUI();

private:
    bool dummyVariable;
    std::string textOutput;
    std::string playerName;
    double amount ;
    Die die1, die2;
    void printStringRep();


public Q_SLOTS:
    void pushButtonClickedHandler();

};

#endif //QTSTARTERSTARTER_QTSTARTER_H
