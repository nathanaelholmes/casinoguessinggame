#include <iostream>
#include <cstdio>

#include "QtStarter.h"
#include "ui_QtStarterMainWindow.h"

void displayResults(float currentBank, float currentBet);

QtStarterMainWindow :: QtStarterMainWindow(QMainWindow *parent):
// Build a GUI  main window for two dice.

        dummyVariable { true },
        textOutput { "" }
{
    setupUi(this);

    QObject::connect(pushButton, SIGNAL(clicked()), this, SLOT(pushButtonClickedHandler()));
}
void QtStarterMainWindow::printStringRep() {
    // String representation for QtStarter.
    return;
}
void QtStarterMainWindow::updateUI() {
//    printf("Inside updateUI()\n");
    textOutputUI->setText(QString::fromStdString(textOutput));
}


// Player asked for another roll of the dice.
void QtStarterMainWindow::pushButtonClickedHandler() {
    printf("Inside pushButtonClickedHandler()\n");
    if (textOutput != "Hello World!" || textOutput == "") {
        textOutput = "Hello World!";
    } else {
        textOutput = "Happy to Meet You.";
    }
    updateUI();
}