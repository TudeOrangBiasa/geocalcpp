#include "../../include/output.h"

using namespace std;

void outputHasilBangunDatar(BangunDatar &bd, bool hitungLuas, bool hitungKeliling) {
    double luas, keliling;
    hitungBangunDatar(bd, luas, keliling);
    cout << fgGreen() << bold() << "+==================================================+" << endl;
		cout << "\nHasil perhitungan:" << endl;
		if (hitungLuas) {
			cout << "Luas: " << luas << endl;
		}
    if (hitungKeliling) {
				cout << "Keliling: " << keliling << endl;
		}
    cout << fgGreen() << bold() << "+==================================================+" << endl;
}

void outputHasilBangunRuang(BangunRuang &br, bool hitungVolume, bool hitungLuasPermukaan) {
    double volume, luasPermukaan;
    hitungBangunRuang(br, volume, luasPermukaan);
    cout << fgGreen() << bold() << "+==================================================+" << endl;
		cout << "\nHasil perhitungan:" << endl;
		if (hitungVolume) {
				cout << "Volume: " << volume << endl;
		}
		if (hitungLuasPermukaan) { 
				cout << "Luas Permukaan: " << luasPermukaan << endl;
		}
    cout << fgGreen() << bold() << "+==================================================+" << endl;
}