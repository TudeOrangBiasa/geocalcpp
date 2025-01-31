#include "../include/bangunRuang.h"

using namespace std;

const double PI = 3.14;

void hitungBangunRuang(const BangunRuang &br, double &volume, double &luasPermukaan) {
    switch (br.jenisBangunRuang) {
        case BALOK: // Balok
            // br.input1 = panjang
            // br.input2 = lebar
            // br.input3 = tinggi
            volume = br.input1 * br.input2 * br.input3;
            luasPermukaan = 2 * (br.input1 * br.input2 + br.input1 * br.input3 + br.input2 * br.input3);
            break;
        case KUBUS: // Kubus
            // br.input1 = sisi
            volume = br.input1 * br.input1 * br.input1;
            luasPermukaan = 6 * br.input1 * br.input1;
            break;
        case TABUNG: // Tabung
            // br.input1 = jari-jari
            // br.input2 = tinggi
            volume = PI * br.input1 * br.input1 * br.input2;
            luasPermukaan = 2 * PI * br.input1 * (br.input1 + br.input2);
            break;
        case BOLA: // Bola
            // br.input1 = jari-jari
            volume = 4.0 / 3.0 * PI * br.input1 * br.input1 * br.input1;
            luasPermukaan = 4 * PI * br.input1 * br.input1;
            break;
        case KERUCUT: // Kerucut
            // br.input1 = jari-jari
            // br.input2 = tinggi
            volume = 1.0 / 3.0 * PI * br.input1 * br.input1 * br.input2;
            luasPermukaan = PI * br.input1 * (br.input1 + sqrt(br.input1 * br.input1 + br.input2 * br.input2));
            break;
        case LIMAS: // Limas
            // br.input1 = panjang alas
            // br.input2 = lebar alas
            // br.input3 = tinggi
            volume = 1.0 / 3.0 * br.input1 * br.input2 * br.input3;
            luasPermukaan = br.input1 * br.input2 + 2 * 0.5 * br.input1 * sqrt((br.input2 / 2) * (br.input2 / 2) + br.input3 * br.input3) + 2 * 0.5 * br.input2 * sqrt((br.input1 / 2) * (br.input1 / 2) + br.input3 * br.input3);
            break;
        case PRISMA_SEGIEMPAT: // Prisma Segiempat
            // br.input1 = panjang alas
            // br.input2 = lebar alas
            // br.input3 = tinggi
            volume = br.input1 * br.input2 * br.input3;
            luasPermukaan = 2 * (br.input1 * br.input2) + br.input3 * (br.input1 + br.input2);
            break;
        case KERUCUT_TERPANCUNG: // Kerucut Terpancung
            // br.input1 = jari-jari 1
            // br.input2 = jari-jari 2
            // br.input3 = tinggi
            volume = 1.0 / 3.0 * PI * br.input3 * (br.input1 * br.input1 + br.input1 * br.input2 + br.input2 * br.input2);
            luasPermukaan = PI * (br.input1 + br.input2) * sqrt((br.input1 - br.input2) * (br.input1 - br.input2) + br.input3 * br.input3) + PI * br.input1 * br.input1 + PI * br.input2 * br.input2;
            break; 
        case LIMAS_SEGITIGA: // Limas Segitiga
            // br.input1 = alas segitiga
            // br.input2 = tinggi segitiga
            // br.input3 = tinggi limas
            volume = 1.0 / 3.0 * 0.5 * br.input1 * br.input2 * br.input3;
            luasPermukaan = 0.5 * br.input1 * br.input2 + 3 * 0.5 * br.input1 * sqrt((br.input2 / 2) * (br.input2 / 2) + br.input3 * br.input3);
            break;
        case PRISMA_SEGITIGA: // Prisma Segitiga
            // br.input1 = alas segitiga
            // br.input2 = tinggi segitiga
            // br.input3 = tinggi prisma
            volume = 0.5 * br.input1 * br.input2 * br.input3;
            luasPermukaan = br.input1 * br.input2 + 3 * br.input1 * br.input3;
            break;
        case KELUAR_BANGUN_RUANG: // Keluar
            break;
        default:
            cout << "Input tidak valid" << endl;
            break;
    }
}