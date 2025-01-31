#include "../include/input.h"

using namespace std;

// input bangun datar
void inputPersegiPanjang(BangunDatar &bd) {
    validateInput("Masukkan panjang: ", bd.input1);
    validateInput("Masukkan lebar: ", bd.input2);
}

void inputPersegi(BangunDatar &bd) {
    validateInput("Masukkan sisi: ", bd.input1);
}

void inputLingkaran(BangunDatar &bd) {
    validateInput("Masukkan jari-jari: ", bd.input1);
}

void inputSegitigaSiku(BangunDatar &bd) {
    validateInput("Masukkan alas: ", bd.input1);
    validateInput("Masukkan tinggi: ", bd.input2);
    validateInput("Masukkan sisi miring: ", bd.input3);
}

void inputSegitigaSamaSisi(BangunDatar &bd) {
    validateInput("Masukkan sisi: ", bd.input1);
}

void inputSegitigaSamaKaki(BangunDatar &bd) {
    validateInput("Masukkan alas: ", bd.input1);
    validateInput("Masukkan tinggi: ", bd.input2);
}

void inputSegitigaSembarang(BangunDatar &bd) {
    validateInput("Masukkan sisi A: ", bd.input1);
    validateInput("Masukkan sisi B: ", bd.input2);
    validateInput("Masukkan sisi C: ", bd.input3);
}

void inputTrapesium(BangunDatar &bd) {
    validateInput("Masukkan sisi sejajar 1: ", bd.input1);
    validateInput("Masukkan sisi sejajar 2: ", bd.input2);
    validateInput("Masukkan tinggi: ", bd.input3);    
}

void inputJajarGenjang(BangunDatar &bd) {
    validateInput("Masukkan alas: ", bd.input1);
    validateInput("Masukkan tinggi: ", bd.input2);
}

void inputLayangLayang(BangunDatar &bd) {
    validateInput("Masukkan diagonal 1: ", bd.input1);
    validateInput("Masukkan diagonal 2: ", bd.input2);
}

void inputBelahKetupat(BangunDatar &bd) {
    validateInput("Masukkan diagonal 1: ", bd.input1);
    validateInput("Masukkan diagonal 2: ", bd.input2);
}
// input bangun datar end


// input bangun ruang

void inputBalok(BangunRuang &br) {
    validateInput("Masukkan panjang: ", br.input1);
    validateInput("Masukkan lebar: ", br.input2);
    validateInput("Masukkan tinggi: ", br.input3);
}

void inputKubus(BangunRuang &br) {
    validateInput("Masukkan sisi: ", br.input1);
}

void inputTabung(BangunRuang &br) {
    validateInput("Masukkan jari-jari: ", br.input1);
    validateInput("Masukkan tinggi: ", br.input2);
}

void inputBola(BangunRuang &br) {
    validateInput("Masukkan jari-jari: ", br.input1);
}

void inputKerucut(BangunRuang &br) {
    validateInput("Masukkan jari-jari: ", br.input1);
    validateInput("Masukkan tinggi: ", br.input2);
}

void inputLimas(BangunRuang &br) {
    validateInput("Masukkan panjang alas: ", br.input1);
    validateInput("Masukkan lebar alas: ", br.input2);
    validateInput("Masukkan tinggi: ", br.input3);
}

void inputPrismaSegiempat(BangunRuang &br) {
    validateInput("Masukkan panjang alas: ", br.input1);
    validateInput("Masukkan lebar alas: ", br.input2);
    validateInput("Masukkan tinggi: ", br.input3);
}

void inputKerucutTerpancung(BangunRuang &br) {
    validateInput("Masukkan jari-jari bawah: ", br.input1);
    validateInput("Masukkan jari-jari ats: ", br.input2);
    validateInput("Masukkan tinggi: ", br.input3);
}

void inputLimasSegitiga(BangunRuang &br) {
    validateInput("Masukkan sisi alas: ", br.input1);
    validateInput("Masukkan tinggi: ", br.input2);
}

void inputPrismaSegitiga(BangunRuang &br) {
    validateInput("Masukkan sisi alas: ", br.input1);
    validateInput("Masukkan tinggi: ", br.input2);
}

// input bangun ruang end