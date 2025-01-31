#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include "bangunDatar.h"
#include "bangunRuang.h"
#include "validateInput.h"

// input untuk bangun datar
void inputPersegiPanjang(BangunDatar &bd);
void inputPersegi(BangunDatar &bd);
void inputLingkaran(BangunDatar &bd);
void inputSegitigaSiku(BangunDatar &bd);
void inputSegitigaSamaSisi(BangunDatar &bd);
void inputSegitigaSamaKaki(BangunDatar &bd);
void inputSegitigaSembarang(BangunDatar &bd);
void inputTrapesium(BangunDatar &bd);
void inputJajarGenjang(BangunDatar &bd);
void inputLayangLayang(BangunDatar &bd);
void inputBelahKetupat(BangunDatar &bd);
//input bangun datar end

// input untuk bangun ruang
void inputBalok(BangunRuang &br);
void inputKubus(BangunRuang &br);
void inputTabung(BangunRuang &br);
void inputBola(BangunRuang &br);
void inputKerucut(BangunRuang &br);
void inputLimas(BangunRuang &br);
void inputPrismaSegiempat(BangunRuang &br);
void inputKerucutTerpancung(BangunRuang &br);
void inputLimasSegitiga(BangunRuang &br);
void inputPrismaSegitiga(BangunRuang &br);
// input bangun ruang end


#endif