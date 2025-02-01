#include "../include/bangunRuang.h"

using namespace std;

const double PI = 3.14;

void hitungBangunRuang(const BangunRuang &br, double &volume, double &luasPermukaan) {
    switch (br.jenisBangunRuang) {
        case BALOK:
            volume = br.input1 * br.input2 * br.input3;
            luasPermukaan = 2 * (br.input1 * br.input2 + br.input1 * br.input3 + br.input2 * br.input3);
            break;
        case KUBUS:
            volume = br.input1 * br.input1 * br.input1;
            luasPermukaan = 6 * br.input1 * br.input1;
            break;
        case TABUNG:
            volume = PI * br.input1 * br.input1 * br.input2;
            luasPermukaan = 2 * PI * br.input1 * (br.input1 + br.input2);
            break;
        case BOLA:
            volume = (4.0 / 3.0) * PI * br.input1 * br.input1 * br.input1;
            luasPermukaan = 4 * PI * br.input1 * br.input1;
            break;
        case KERUCUT:
            volume = (1.0 / 3.0) * PI * br.input1 * br.input1 * br.input2;
            luasPermukaan = PI * br.input1 * (br.input1 + sqrt(br.input1 * br.input1 + br.input2 * br.input2));
            break;
        case LIMAS: 
            volume = (1.0 / 3.0) * br.input1 * br.input2 * br.input3;
            {
                double s = sqrt((br.input1 / 2.0) * (br.input1 / 2.0) + br.input3 * br.input3); 
                double t = sqrt((br.input2 / 2.0) * (br.input2 / 2.0) + br.input3 * br.input3); 
                luasPermukaan = br.input1 * br.input2 + 2 * br.input1 * s/2 + 2 * br.input2 * t/2;
            }
            break;
        case PRISMA_SEGIEMPAT:
            volume = br.input1 * br.input2 * br.input3;
            luasPermukaan = 2 * (br.input1 * br.input2 + br.input1 * br.input3 + br.input2 * br.input3); 
            break;
        case KERUCUT_TERPANCUNG:
            volume = (1.0 / 3.0) * PI * br.input3 * (br.input1 * br.input1 + br.input1 * br.input2 + br.input2 * br.input2);
            luasPermukaan = PI * (br.input1 + br.input2) * sqrt((br.input1 - br.input2) * (br.input1 - br.input2) + br.input3 * br.input3) + PI * br.input1 * br.input1 + PI * br.input2 * br.input2;
            break;
        case LIMAS_SEGITIGA:
            volume = (1.0 / 3.0) * 0.5 * br.input1 * br.input2 * br.input3;
            {
                double s = sqrt((br.input2/2.0)*(br.input2/2.0) + br.input3*br.input3);
                luasPermukaan = 0.5 * br.input1 * br.input2 + (br.input1 * s * 3/2); 
            }
            break;
        case PRISMA_SEGITIGA:
            volume = 0.5 * br.input1 * br.input2 * br.input3;
            luasPermukaan = (br.input1 * br.input2) + (2 * 0.5 * br.input1 * br.input2) + (br.input1 + br.input2 + sqrt(br.input1*br.input1 + br.input2*br.input2)) * br.input3; // Luas 2 alas segitiga + 3 sisi tegak
            break;
        case KELUAR_BANGUN_RUANG:
            break;
        default:
            cout << "Input tidak valid" << endl;
            break;
    }
}