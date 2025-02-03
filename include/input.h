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
void inputSegitigaSiku(BangunDatar &bd, bool hitungKeliling);
void inputSegitigaSamaSisi(BangunDatar &bd);
void inputSegitigaSamaKaki(BangunDatar &bd, bool hitungKeliling);
void inputSegitigaSembarang(BangunDatar &bd);
void inputTrapesium(BangunDatar &bd, bool hitungKeliling);
void inputJajarGenjang(BangunDatar &bd, bool hitungKeliling);
void inputLayangLayang(BangunDatar &bd, bool hitungKeliling);
void inputBelahKetupat(BangunDatar &bd, bool hitungKeliling);
// input bangun datar end

// input untuk bangun ruang
void inputBalok(BangunRuang &br);
void inputKubus(BangunRuang &br);
void inputTabung(BangunRuang &br);
void inputBola(BangunRuang &br);
void inputKerucut(BangunRuang &br, bool hitungLuasPermukaan);
void inputLimas(BangunRuang &br);
void inputPrismaSegiempat(BangunRuang &br, bool hitungLuasPermukaan);
void inputKerucutTerpancung(BangunRuang &br);
void inputLimasSegitiga(BangunRuang &br);
void inputPrismaSegitiga(BangunRuang &br, bool hitungLuasPermukaan);
// input bangun ruang end

#endif