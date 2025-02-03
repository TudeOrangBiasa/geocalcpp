#include "../../include/menu.h"

using namespace std;

// default menampilkan gambar
void displaySelectedImage(const string &imageName)
{
	displayImage(imageName);
}

// Menampilkan header dan gambar sesuai pilihan
void displayHeaderAndImage(int pilihan, const char *images[], int maxPilihan)
{
	cout << endl;
	if (pilihan >= 1 && pilihan <= maxPilihan && images[pilihan - 1] != nullptr)
	{
		cout << fgGreen() << bold() << "+==================================================+" << endl
				 << endl;

#if defined(__APPLE__) || defined(__MACH__)
		// MacOS menggunakan 'open' dimana itu tidak memblock terminal
		cout << fgRed() << bold() << "      Tutup preview untuk melanjutkan program      " << endl
				 << endl;
#else
		// For Linux and WSL menggunakan feh
		cout << fgRed() << bold() << "         Tekan CTRL + C untuk menutup gambar        " << endl
				 << endl;
#endif

		cout << fgBlue() << bold() << "Image yang Ditampilkan : " << images[pilihan - 1] << endl;
		displaySelectedImage(images[pilihan - 1]);
		cout << fgGreen() << bold() << "+==================================================+" << endl;
	}
	cout << endl;
}

// handle semua menu bangun datar
void handleMenuBangunDatar(int &pilihan)
{
	BangunDatar bd;
	double luas = 0, keliling = 0;
	bool hitungLuas = false, hitungKeliling = false;

	displayHeaderAndImage(pilihan, bangunDatarImages, KELUAR_BANGUN_DATAR);
	bd.jenisBangunDatar = static_cast<EnumsBangunDatar>(pilihan);

	// Menanyakan apakah ingin menghitung luas, keliling, atau keduanya
	cout << "Apa yang ingin Anda hitung?" << endl;
	cout << "1. Luas" << endl;
	cout << "2. Keliling" << endl;
	cout << "3. Keduanya" << endl;
	cout << "Masukkan Pilihan (1-3): ";
	int pilihanHitung;
	cin >> pilihanHitung;

	switch (pilihanHitung)
	{
	case 1:
		hitungLuas = true;
		break;

	case 2:
		hitungKeliling = true;
		break;

	case 3:
		hitungLuas = true;
		hitungKeliling = true;
		break;

	default:
		cout << "Pilihan tidak valid!" << endl;
		return;
	}

	// Input awal berdasarkan jenis bangun datar
	switch (bd.jenisBangunDatar)
	{
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
		inputSegitigaSiku(bd, hitungKeliling);
		break;

	case SEGITIGA_SAMA_SISI:
		inputSegitigaSamaSisi(bd);
		break;

	case SEGITIGA_SAMA_KAKI:
		inputSegitigaSamaKaki(bd, hitungKeliling);
		break;

	case SEGITIGA_SEMBARANG:
		inputSegitigaSembarang(bd);
		break;

	case TRAPESIUM:
		inputTrapesium(bd, hitungKeliling);
		break;

	case JAJAR_GENJANG:
		inputJajarGenjang(bd, hitungKeliling);
		break;

	case LAYANG_LAYANG:
		inputLayangLayang(bd, hitungKeliling);
		break;

	case BELAH_KETUPAT:
		inputBelahKetupat(bd, hitungKeliling);
		break;

	case KELUAR_BANGUN_DATAR:
		cout << "Kembali ke menu utama." << endl;
		return;

	default:
		cout << "Pilihan tidak valid!" << endl;
		return;
	}

	if (pilihan != KELUAR_BANGUN_DATAR)
	{
		// Hitung luas dan/atau keliling
		hitungBangunDatar(bd, luas, keliling);

		// output hasil dari bangun datar
		outputHasilBangunDatar(bd, hitungLuas, hitungKeliling);
	}
	else
	{
		cout << "Kembali ke menu utama." << endl;
		return;
	}
}
// handle menu bangun datar end

// handle semua menu bangun ruang
void handleMenuBangunRuang(int &pilihan)
{
	BangunRuang br;
	double volume = 0, luasPermukaan = 0;
	bool hitungVolume = false, hitungLuasPermukaan = false;

	displayHeaderAndImage(pilihan, bangunRuangImages, KELUAR_BANGUN_RUANG);
	br.jenisBangunRuang = static_cast<EnumsBangunRuang>(pilihan);

	cout << "Apa yang ingin Anda hitung?" << endl;
	cout << "1. Volume" << endl;
	cout << "2. Luas Permukaan" << endl;
	cout << "3. Keduanya" << endl;
	cout << "Masukkan Pilihan (1-3): ";
	int pilihanHitung;
	cin >> pilihanHitung;

	switch (pilihanHitung)
	{
	case 1:
		hitungVolume = true;
		break;

	case 2:
		hitungLuasPermukaan = true;
		break;

	case 3:
		hitungVolume = hitungLuasPermukaan = true;
		break;

	default:
		cout << "Pilihan tidak valid!" << endl;
		return;
	}

	switch (br.jenisBangunRuang)
	{
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
		inputKerucut(br, hitungLuasPermukaan);
		break;

	case LIMAS:
		inputLimas(br);
		break;

	case PRISMA_SEGIEMPAT:
		inputPrismaSegiempat(br, hitungLuasPermukaan);
		break;

	case KERUCUT_TERPANCUNG:
		inputKerucutTerpancung(br);
		break;

	case LIMAS_SEGITIGA:
		inputLimasSegitiga(br);
		break;

	case PRISMA_SEGITIGA:
		inputPrismaSegitiga(br, hitungLuasPermukaan);
		break;

	case KELUAR_BANGUN_RUANG:
		cout << "Kembali ke menu utama." << endl;
		return;

	default:
		cout << "Pilihan tidak valid!" << endl;
		return;
	}

	if (pilihan != KELUAR_BANGUN_RUANG)
	{
		// Hitung volume dan/atau luas permukaan
		hitungBangunRuang(br, volume, luasPermukaan);
		// output hasil dari bangun ruang
		outputHasilBangunRuang(br, hitungVolume, hitungLuasPermukaan);
	}
	else
	{
		cout << "Kembali ke menu utama." << endl;
		return;
	}
}
// handle menu bangun ruang end

// handle menu utama
void handleMainMenu(int &pilihan, void (*menuFunc)(), void (*handleFunc)(int &), const EnumsMainMenu exitOption)
{
	do
	{
		clearScreen();
		menuFunc();
		cin >> pilihan;
		if (cin.fail())
		{
			cin.clear();																				 // membersihkan error flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // menolak valid input
			cout << "Input tidak valid! Silakan masukkan angka." << endl;
			continue;
		}
		handleFunc(pilihan);
		if (pilihan != exitOption)
		{
			cout << fgGreen() << bold() << "Tekan Enter Untuk Melanjutkan..." << endl;
			cin.ignore();
			cin.get();
		}
		else
		{
			cout << fgGreen() << bold() << "Tekan Enter Untuk Kembali Ke Menu Utama" << endl;
			cin.ignore();
			cin.get();
		}
	} while (pilihan != exitOption);
}