#include <iostream>
#include <limits>
#include "../include/menu.h"

using namespace std;

int main() {
    int pilihan;
    do {
        clearScreen();
        mainMenu();
        cin >> pilihan;
        if (cin.fail()) {
            cin.clear(); // membersihkan error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // menolak valid input
            cout << "Input tidak valid! silahkan masukkan angka." << endl;
            continue;
        }
        switch (pilihan) {
            case BANGUN_DATAR:
                handleMainMenu(pilihan, menuBangunDatar, handleMenuBangunDatar, static_cast<EnumsMainMenu>(KELUAR_BANGUN_DATAR));
                break;
            case BANGUN_RUANG:
                handleMainMenu(pilihan, menuBangunRuang, handleMenuBangunRuang, static_cast<EnumsMainMenu>(KELUAR_BANGUN_RUANG));
                break;
            case EXIT_PROGRAM:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << fgRed() << "Pilihan tidak valid!" << endl;
                cin.ignore();
                cin.get();
                break;
        }
    } while (pilihan != EXIT_PROGRAM);
    return 0;
}