#include "../include/output.h"

using namespace std;

void outputHasilBangunDatar(BangunDatar &bd) {
    double luas, keliling;
    hitungBangunDatar(bd, luas, keliling);
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << "Luas: " << luas << endl;
    cout << "Keliling: " << keliling << endl;
    cout << fgGreen() << bold() << "+==================================================+" << endl;
}

void outputHasilBangunRuang(BangunRuang &br) {
    double volume, luasPermukaan;
    hitungBangunRuang(br, volume, luasPermukaan);
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << "Volume: " << volume << endl;
    cout << "Luas Permukaan: " << luasPermukaan << endl;
    cout << fgGreen() << bold() << "+==================================================+" << endl;
}