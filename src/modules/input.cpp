#include "../../include/input.h"

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

void inputSegitigaSiku(BangunDatar &bd, bool hitungKeliling) {
    validateInput("Masukkan alas: ", bd.input1);
    validateInput("Masukkan tinggi: ", bd.input2);
    if (hitungKeliling) {
			validateInput("Masukkan sisi miring: ", bd.input3);
		}
}

void inputSegitigaSamaSisi(BangunDatar &bd) {
    validateInput("Masukkan sisi: ", bd.input1);
}

void inputSegitigaSamaKaki(BangunDatar &bd, bool hitungKeliling) {
    validateInput("Masukkan alas: ", bd.input1);
    validateInput("Masukkan tinggi: ", bd.input2);
  	if (hitungKeliling) {
        string sisiMiring;
        cout << "Masukkan panjang sisi miring (atau ketik 'none' untuk kalkulasi otomatis): ";
       	cin >> sisiMiring;
        if (sisiMiring != "none") {
            bd.input3 = stod(sisiMiring);
        } else {
            bd.input3 = sqrt(pow(bd.input1/2, 2) + pow(bd.input2, 2));
        		}
    	}
}

void inputSegitigaSembarang(BangunDatar &bd) {
    validateInput("Masukkan sisi A: ", bd.input1);
    validateInput("Masukkan sisi B: ", bd.input2);
    validateInput("Masukkan sisi C: ", bd.input3);
}

void inputTrapesium(BangunDatar &bd, bool hitungKeliling ) {
     validateInput("Masukkan sisi sejajar 1: ", bd.input1);
     validateInput("Masukkan sisi sejajar 2: ", bd.input2);
     validateInput("Masukkan tinggi: ", bd.input3);
     if (hitungKeliling) {
        validateInput("Masukkan sisi miring 1: ", bd.input4);
        validateInput("Masukkan sisi miring 2: ", bd.input5);
      }    
}

void inputJajarGenjang(BangunDatar &bd, bool hitungKeliling ) {
    validateInput("Masukkan alas: ", bd.input1);
    validateInput("Masukkan tinggi: ", bd.input2);
    if (hitungKeliling) {
				validateInput("Masukkan panjang sisi miring: ", bd.input3);
		} 
}

void inputLayangLayang(BangunDatar &bd, bool hitungKeliling ) {
    validateInput("Masukkan diagonal 1: ", bd.input1);
    validateInput("Masukkan diagonal 2: ", bd.input2);
    if (hitungKeliling) {
        string sisiAtas, sisiBawah;
        cout << "Masukkan panjang sisi atas (atau ketik 'none' jika tidak tersedia): ";
        cin >> sisiAtas;
        cout << "Masukkan panjang sisi bawah (atau ketik 'none' jika tidak tersedia): ";
        cin >> sisiBawah;
                
        if (sisiAtas != "none" && sisiBawah != "none") {
            bd.input3 = stod(sisiAtas);
            bd.input4 = stod(sisiBawah);
        } else {
            bd.input3 = sqrt(pow(bd.input1, 2) + pow(bd.input2, 2)) / 2;
            bd.input4 = bd.input3;
         }
    }
}

void inputBelahKetupat(BangunDatar &bd, bool hitungKeliling ) {
    validateInput("Masukkan diagonal 1: ", bd.input1);
    validateInput("Masukkan diagonal 2: ", bd.input2);
    if (hitungKeliling) {
       	string sisi;
        cout << "Masukkan panjang sisi (atau ketik 'none' untuk kalkulasi otomatis): ";
        cin >> sisi;
        
       	if (sisi != "none") {
            bd.input3 = stod(sisi);
       	} else {
            bd.input3 = sqrt(pow(bd.input1/2, 2) + pow(bd.input2/2, 2));
       		}
    }
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

void inputKerucut(BangunRuang &br, bool hitungLuasPermukaan ) {
    validateInput("Masukkan jari-jari: ", br.input1);
    validateInput("Masukkan tinggi: ", br.input2);
		if (hitungLuasPermukaan) {
        string garisPelukis;
        cout << "Masukkan panjang garis pelukis (atau ketik 'none' untuk kalkulasi otomatis): ";
        cin >> garisPelukis;
        
        if (garisPelukis != "none") {
            br.input3 = stod(garisPelukis);
        } else {
            br.input3 = sqrt(pow(br.input1, 2) + pow(br.input2, 2));
        }
    }
}

void inputLimas(BangunRuang &br) {
    validateInput("Masukkan panjang alas: ", br.input1);
    validateInput("Masukkan lebar alas: ", br.input2);
    validateInput("Masukkan tinggi: ", br.input3);
}

void inputPrismaSegiempat(BangunRuang &br, bool hitungLuasPermukaan ) {
    validateInput("Masukkan panjang alas: ", br.input1);
    validateInput("Masukkan lebar alas: ", br.input2);
    validateInput("Masukkan tinggi: ", br.input3);
		if (hitungLuasPermukaan) {
        string sisiMiring;
        cout << "Masukkan panjang sisi miring (atau ketik 'none' untuk kalkulasi otomatis): ";
        cin >> sisiMiring;
        
        if (sisiMiring != "none") {
            br.input4 = stod(sisiMiring);
        } else {
            br.input4 = sqrt(pow(br.input1/2, 2) + pow(br.input3, 2));
        }
    }
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

void inputPrismaSegitiga(BangunRuang &br, bool hitungLuasPermukaan ) {
    validateInput("Masukkan sisi alas: ", br.input1);
    validateInput("Masukkan tinggi: ", br.input2);
		if (hitungLuasPermukaan) {
        string sisiMiring;
        cout << "Masukkan panjang sisi miring (atau ketik 'none' untuk kalkulasi otomatis): ";
        cin >> sisiMiring;
        
        if (sisiMiring != "none") {
            br.input3 = stod(sisiMiring);
        } else {
            br.input3 = sqrt(pow(br.input1/2, 2) + pow(br.input2, 2));
        }
    }
}

// input bangun ruang end