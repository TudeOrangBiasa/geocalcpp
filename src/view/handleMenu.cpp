#include "../../include/menu.h"

using namespace std;

// Menampilkan gambar sesuai nama file
void displaySelectedImage(const string& imageName) {
    int width = 80;
    int height = 40;
    displayImage(imageName, width, height);
}

// Menampilkan header dan gambar sesuai pilihan
void displayHeaderAndImage(int pilihan, const char* images[], int maxPilihan){
    cout << endl;
    if (pilihan >= 1 && pilihan <= maxPilihan && images[pilihan - 1] != nullptr) {
        cout << fgGreen() << bold() << "+==================================================+" << endl << endl;
        displaySelectedImage(images[pilihan - 1]);
        cout << fgGreen() << bold() << "+==================================================+" << endl;
    }
    cout << endl;
}

// handle semua menu bangun datar
void handleMenuBangunDatar(int &pilihan) {
    BangunDatar bd;
    double luas, keliling;
    
    displayHeaderAndImage(pilihan, bangunDatarImages, KELUAR_BANGUN_DATAR);

    bd.jenisBangunDatar = static_cast<EnumsBangunDatar>(pilihan);

    switch (bd.jenisBangunDatar) {
        case PERSEGI_PANJANG:
            inputPersegiPanjang(bd);
            break;
        case PERSEGI:
            inputPersegi(bd);
            break;
        case LINGKARAN:
            inputLingkaran(bd);
            break;
        case SEGITIGA_SIKU:
            inputSegitigaSiku(bd);
            break;
        case SEGITIGA_SAMA_SISI:
            inputSegitigaSamaSisi(bd);
            break;
        case SEGITIGA_SAMA_KAKI:
            inputSegitigaSamaKaki(bd);
            break;
        case SEGITIGA_SEMBARANG:
            inputSegitigaSembarang(bd);
            break;
        case TRAPESIUM:
            inputTrapesium(bd);
            break;
        case JAJAR_GENJANG:
            inputJajarGenjang(bd);
            break;
        case LAYANG_LAYANG:
            inputLayangLayang(bd);
            break;
        case BELAH_KETUPAT:
            inputBelahKetupat(bd);
            break;
        case KELUAR_BANGUN_DATAR:
            cout << "Kembali ke menu utama." << endl;
            return;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return;
    }

    if (pilihan != KELUAR_BANGUN_DATAR) {
        outputHasilBangunDatar(bd);
    }
}

// handle semua menu bangun ruang
void handleMenuBangunRuang(int &pilihan) {
    BangunRuang br;
    double volume, luasPermukaan;

    displayHeaderAndImage(pilihan, bangunRuangImages, KELUAR_BANGUN_RUANG);
    br.jenisBangunRuang = static_cast<EnumsBangunRuang>(pilihan);

    switch (br.jenisBangunRuang) {
        case BALOK:
            inputBalok(br);
            break;
        case KUBUS:
            inputKubus(br);
            break;
        case TABUNG:
            inputTabung(br);
            break;
        case BOLA:
            inputBola(br);
            break;
        case KERUCUT:
            inputKerucut(br);
            break;
        case LIMAS:
            inputLimas(br);
            break;
        case PRISMA_SEGIEMPAT:
            inputPrismaSegiempat(br);
            break;
        case KERUCUT_TERPANCUNG:
            inputKerucutTerpancung(br);
            break;
        case LIMAS_SEGITIGA:
            inputLimasSegitiga(br);
            break;
        case PRISMA_SEGITIGA:
            inputPrismaSegitiga(br);
            break;
        case KELUAR_BANGUN_RUANG:
            cout << "Kembali ke menu utama." << endl;
            return;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return;
    }

    if (pilihan != KELUAR_BANGUN_RUANG) {
        outputHasilBangunRuang(br);
    }
}

void handleMainMenu(int &pilihan, void (*menuFunc)(), void (*handleFunc)(int&), const EnumsMainMenu exitOption) {
    do {
        clearScreen();
        menuFunc();
        cin >> pilihan;
        if (cin.fail()) {
            cin.clear(); // membersihkan error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // menolak valid input
            cout << "Input tidak valid! Silakan masukkan angka." << endl;
            continue;
        }
        handleFunc(pilihan);
        if (pilihan != exitOption) {
            cout << fgGreen() << bold() << "Tekan Enter Untuk Melanjutkan..." << endl;
            cin.ignore();
            cin.get();
        } else {
            cout << fgGreen() << bold() << "Tekan Enter Untuk Kembali Ke Menu Utama" << endl;
            cin.ignore();
            cin.get();
        }
    } while (pilihan != exitOption);
}