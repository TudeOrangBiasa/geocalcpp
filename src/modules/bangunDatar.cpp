#include "../../include/bangunDatar.h"

using namespace std;

const double PI = 3.14;

void hitungBangunDatar(const BangunDatar &bd, double &luas, double &keliling) {
    switch (bd.jenisBangunDatar) {
        case PERSEGI_PANJANG:
            luas = bd.input1 * bd.input2;
            keliling = 2 * (bd.input1 + bd.input2);
            break;
        case PERSEGI:
            luas = bd.input1 * bd.input1;
            keliling = 4 * bd.input1;
            break;
        case LINGKARAN:
            luas = PI * bd.input1 * bd.input1;
            keliling = 2 * PI * bd.input1;
            break;
        case SEGITIGA_SIKU:
            luas = 0.5 * bd.input1 * bd.input2;
            keliling = bd.input1 + bd.input2 + bd.input3;
            break;
        case SEGITIGA_SAMA_SISI:
            luas = (sqrt(3) / 4) * bd.input1 * bd.input1;
            keliling = 3 * bd.input1;
            break;
        case SEGITIGA_SAMA_KAKI:
            luas = 0.5 * bd.input1 * bd.input2;
            keliling = 2 * sqrt(pow(bd.input1 / 2, 2) + pow(bd.input2, 2)) + bd.input1;
            break;
        case SEGITIGA_SEMBARANG:
        {
            double s = (bd.input1 + bd.input2 + bd.input3) / 2;
            luas = sqrt(s * (s - bd.input1) * (s - bd.input2) * (s - bd.input3));
            keliling = bd.input1 + bd.input2 + bd.input3;
        }
        break;
        case TRAPESIUM:
            luas = 0.5 * (bd.input1 + bd.input2) * bd.input3;
            keliling = bd.input1 + bd.input2 + bd.input4 + bd.input5;
            break;
        case JAJAR_GENJANG:
            luas = bd.input1 * bd.input2; 
            keliling = 2 * (bd.input1 + bd.input3);
            break;
        case LAYANG_LAYANG:
            luas = 0.5 * bd.input1 * bd.input2;
            keliling = 2 * (bd.input1 + bd.input2);
            break;
        case BELAH_KETUPAT:
            luas = 0.5 * bd.input1 * bd.input2;
            keliling = 4 * bd.input1;
            break;
        case KELUAR_BANGUN_DATAR:
            break;
        default:
            cout << "Input tidak valid" << endl;
            break;
    }
}