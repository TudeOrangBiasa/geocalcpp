
#include "../include/bangunDatar.h"

using namespace std;

const double PI = 3.14;

void hitungBangunDatar(const BangunDatar &bd, double &luas, double &keliling) {
    switch (bd.jenisBangunDatar) {
        case PERSEGI_PANJANG: //bangun datar persegi panjang
            //bd.input1 = panjang
            //bd.input2 = lebar
            luas = bd.input1 * bd.input2;
            keliling = 2 * (bd.input1 + bd.input2);
            break;
        case PERSEGI: //bangun datar persegi
            //bd.input1 = sisi
            luas = bd.input1 * bd.input1;
            keliling = 4 * bd.input1;
            break;
        case LINGKARAN: //bangun datar lingkaran
            //bd.input1 = jari-jari
            luas = PI * bd.input1 * bd.input1;
            keliling = 2 * PI * bd.input1;
            break;
        case SEGITIGA_SIKU: //bangun datar segitiga siku siku
            //bd.input1 = alas
            //bd.input2 = tinggi
            //bd.input3 = sisi miring
            luas = 0.5 * bd.input1 * bd.input2;
            keliling = bd.input1 + bd.input2 + bd.input3;
            break;
        case SEGITIGA_SAMA_SISI: //bangun datar segitiga sama sisi
            //bd.input1 = sisi
            luas = (sqrt(3) / 4) * bd.input1 * bd.input1;
            keliling = 3 * bd.input1;
            break;
        case SEGITIGA_SAMA_KAKI:  //bangun datar segitiga sama kaki
            //bd.input1 = alas
            //bd.input2 = tinggi
            luas = 0.5 * bd.input1 * bd.input2;
            keliling = 2 * sqrt(pow(bd.input1 / 2, 2) + pow(bd.input2, 2)) + bd.input1;
            break;
        case SEGITIGA_SEMBARANG: //bangun datar segitiga sembarang
            //bd.input1 = sisi a
            //bd.input2 = sisi b
            //bd.input3 = sisi c
            {
                double s = (bd.input1 + bd.input2 + bd.input3) / 2;
                luas = sqrt(s * (s - bd.input1) * (s - bd.input2) * (s - bd.input3));
                keliling = bd.input1 + bd.input2 + bd.input3;
            }
            break;
        case TRAPESIUM: //bangun datar trapesium
            //bd.input1 = sisi sejajar 1
            //bd.input2 = sisi sejajar 2
            //bd.input3 = tinggi
            //bd.input4 = sisi miring 1
            //bd.input5 = sisi miring 2
            luas = 0.5 * (bd.input1 + bd.input2) * bd.input3;
            keliling = bd.input1 + bd.input2 + bd.input4 + bd.input5;
            break;
        case JAJAR_GENJANG: //bangun datar jajar genjang
            //bd.input1 = alas
            //bd.input2 = tinggi
            //bd.input3 = sisi miring
            luas = 0.5 * bd.input1 * bd.input2;
            keliling = 2 * bd.input1 + bd.input3;
            break;
        case LAYANG_LAYANG: //bangun datar layang-layang
            //bd.input1 = diagonal 1
            //bd.input2 = diagonal 2
            luas = 0.5 * bd.input1 * bd.input2;
            keliling = 2 * (bd.input1 + bd.input2);
            break;
        case BELAH_KETUPAT: //bangun datar belah ketupat
            //bd.input1 = diagonal 1
            //bd.input2 = diagonal 2
            luas = 0.5 * bd.input1 * bd.input2;
            keliling = 4 * bd.input1;
            break;
        case KELUAR_BANGUN_DATAR: //exit
            break;
        default : 
            cout << "Input tidak valid" << endl;
            break;
    }   
}