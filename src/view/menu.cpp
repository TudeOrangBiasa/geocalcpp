#include "../../include/menu.h"
using namespace std;

void headerMenu() {
    printAsciiArt("logo.txt", fgBrightYellow());
    cout << fgYellow() << bold();
    cout << "Petunjuk Penggunaan:" << endl;
    cout << "1. Pilih jenis bangun datar atau bangun ruang dari menu utama." << endl;
    cout << "2. Masukkan variabel yang diminta sesuai dengan jenis bangun yang dipilih." << endl;
    cout << "3. Program akan menghitung dan menampilkan hasilnya." << endl;
    cout << "4. Untuk keluar dari program, pilih opsi 'Keluar' dari menu utama." << endl;
    cout << fgMagenta() << bold();
    cout << "" << endl;
    cout << "Kalkulator Bangun Ruang Dan Datar" << endl;
    cout << "Made By TudeOrangBiasa" << endl;
    cout << "Visit Project On GitHub: \033[1;34mhttps://github.com/TudeOrangBiasa/geocalcpp.git\033[0m" << endl;
    cout << "" << endl;
}

void mainMenu() {
    headerMenu();
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << "|" << fgBrightYellow() <<"                    Main Menu                     "<< fgGreen() << bold() << "|" << endl;
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << fgGreen();
    cout << "| 1. Bangun Datar                                  |" << endl;
    cout << "| 2. Bangun Ruang                                  |" << endl;
    cout << "| 3. Keluar                                        |" << endl;
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << fgYellow() << "Pilih menu : ";
    cout << reset();
}

void menuBangunDatar() {
    headerMenu();
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << "|" << fgBrightYellow() <<"                 Bangun Datar                     "<< fgGreen() << bold() << "|" << endl;
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << fgGreen();
    cout << "| 1. Persegi Panjang                               |" << endl;
    cout << "| 2. Persegi                                       |" << endl;
    cout << "| 3. Lingkaran                                     |" << endl;
    cout << "| 4. Segitiga Siku-Siku                            |" << endl;
    cout << "| 5. Segitiga Sama Sisi                            |" << endl;
    cout << "| 6. Segitiga Sama Kaki                            |" << endl;
    cout << "| 7. Segitiga Sembarang                            |" << endl;
    cout << "| 8. Trapesium                                     |" << endl;
    cout << "| 9. Jajar Genjang                                 |" << endl;
    cout << "| 10. Layang-Layang                                |" << endl;
    cout << "| 11. Belah Ketupat                                |" << endl;
    cout << "| 12. Keluar                                       |" << endl;
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << fgYellow() << "Pilih menu : ";
    cout << reset();
}

void menuBangunRuang() {
    headerMenu();
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << "|" << fgBrightYellow() <<"                 Bangun Ruang                     "<< fgGreen() << bold() << "|" << endl;
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << fgGreen();
    cout << "| 1. Balok                                         |" << endl;
    cout << "| 2. Kubus                                         |" << endl;
    cout << "| 3. Tabung                                        |" << endl;
    cout << "| 4. Bola                                          |" << endl;
    cout << "| 5. Kerucut                                       |" << endl;
    cout << "| 6. Limas                                         |" << endl;
    cout << "| 7. Prisma Segiempat                              |" << endl;
    cout << "| 8. Kerucut Terpancung                            |" << endl;
    cout << "| 9. Limas Segitiga                                |" << endl;
    cout << "| 10. Prisma Segitiga                              |" << endl;
    cout << "| 11. Keluar                                       |" << endl;
    cout << fgGreen() << bold() << "+==================================================+" << endl;
    cout << fgYellow() << "Pilih menu : ";
    cout << reset();
}
