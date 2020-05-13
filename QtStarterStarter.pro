QT += widgets
requires(qtConfig(combobox))

HEADERS     = QtStarter.h
SOURCES     = QtStarter.cpp QtStarterGame.cpp
FORMS       = QtStarterMainWindow.ui
RESOURCES   = QtStarterResources.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/layouts/QtStarter
INSTALLS += target
