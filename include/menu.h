#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "bangunDatar.h"
#include "bangunRuang.h"
#include "clearScreen.h"
#include "printASCII.h"
#include "color.h"
#include "displayImage.h"
#include "input.h"
#include "output.h"
#include <limits>
#include "enums/EnumsMainMenu.h"
#include "enums/EnumsBangunDatar.h"
#include "enums/EnumsBangunRuang.h"
#include "resources/ImagesBangunDatar.h"
#include "resources/ImagesBangunRuang.h"

void mainMenu();
void menuBangunDatar();
void menuBangunRuang();
void displayHeaderAndImage(int pilihan, const char* images[], int maxPilihan);
void handleMenuBangunDatar(int &pilihan);
void handleMenuBangunRuang(int &pilihan);
void handleMainMenu(int &pilihan, void (*menuFunc)(), void (*handleFunc)(int&), const EnumsMainMenu exitOption);

#endif // MENU_H