//
// Created by Arana on 2/18/20.
//
#include <iostream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include "QtStarter.h"

#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime> //Needed to seed random numbers
#include <iomanip> //Needed to display bank amount and bet correctly
#include "Header.h"
#include "Die.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QtStarterMainWindow QtStarterApp;

    QtStarterApp.updateUI();
    QtStarterApp.show();


    return app.exec();
}

