# GeoCalc+

GeoCalc+ adalah aplikasi kalkulator geometri yang memungkinkan pengguna untuk menghitung luas dan keliling bangun datar serta volume dan luas permukaan bangun ruang. Aplikasi ini dibuat menggunakan bahasa pemrograman C++ dan menggunakan CMake sebagai sistem build.

## Fitur

- Menghitung luas dan keliling berbagai bangun datar seperti persegi, lingkaran, segitiga, dan lain-lain.
- Menghitung volume dan luas permukaan berbagai bangun ruang seperti kubus, balok, bola, dan lain-lain.
- Tampilan menu interaktif dengan ASCII art.
- Menggunakan modular programming untuk menjaga kode tetap rapi dan mudah dibaca.
- Menampilkan gambar bangun datar dan bangun ruang di terminal menggunakan `feh` (Linux), untuk (MacOS) sudah ada built in image viewer, `feh` dengan WSL (Windows).

## Minimum Requirement

- CMake 3.10 atau lebih baru
- Compiler C++ yang mendukung C++11
- feh untuk Linux dan Windows(WSL)
- Terminal yang support ANSI colors
- Sistem operasi Linux, macOS, atau Windows(WSL)

**Perhatikan! untuk memastikan bahwa sudah menginstall semua requirement**

1. **Compiler C++:** Buka terminal Anda dan jalankan perintah berikut:

```sh
   g++ --version
```

2. **CMAKE** Jalankan perintah ini di terminal anda:

```sh
   cmake --version
```

3. **feh** Jalankan perintah ini di terminal anda:

```sh
   feh --version
```

4. **Support ANSI color** Jalankan perintah ini di terminal anda, pastikan teks ini berubah warna menjadi merah

```sh
   printf "\e[31mThis text should be red.\e[0m\n"
```

**Pastikan versi dan semua requirement sudah terpenuhi**

## Instalasi untuk support output gambar sesuai OS yang dipakai :

### Linux

- **Debian/Ubuntu:** `sudo apt-get install feh`
- **Arch/Manjaro:** `sudo pacman -S feh`
- **Fedora:** `sudo dnf install feh`
- **openSUSE:** `sudo zypper install feh`

### macOS

- sudah ada built-in image viewer

### Windows

- **Untuk Windows Gunakan WSL:**
  Menggunakan WSL (Windows Subsystem for Linux) dengan menginstall `feh`. Ini adalah opsi yang lebih sederhana karena Anda dapat menggunakan Terminal bawaan Windows.

## Petunjuk Penginstallan Project Ini

1. Clone repository ini atau download source code di repository ini, lalu jalankan perintah ini:

   ```sh
   cd geocalcpp
   ```

2. Buat direktori build dan masuk ke dalamnya:

   ```sh
   mkdir build
   cd build
   ```

3. Jalankan CMake untuk menghasilkan Makefile:

   ```sh
   cmake ..
   ```

4. Kompilasi program:

   ```sh
   make
   ```

5. Jalankan aplikasi:

   ```sh
   ./geocalcpp
   ```

## Struktur Direktori

- [src](http://_vscodecontentref_/0): Berisi kode sumber aplikasi.
- [include](http://_vscodecontentref_/1): Berisi header file.
- [assets](http://_vscodecontentref_/2): Folder untuk images yang digunakan aplikasi.
- [modules](http://_vscodecontentref_/3): Berisi kode fungsi aplikasi.
- [resources](http://_vscodecontentref_/4): Berisi array untuk mendaftarkan image yang berada di [assets](http://_vscodecontentref_/5).
- [view](http://_vscodecontentref_/6): Berisi kode untuk tampilan aplikasi.
- [ascii](http://_vscodecontentref_/7): Berisi file ASCII art.
- [build](http://_vscodecontentref_/8): Direktori untuk build output.
- [CMakeLists.txt](http://_vscodecontentref_/9): File konfigurasi CMake.
- [README.md](http://_vscodecontentref_/10): File ini.
- [ketentuan.txt](http://_vscodecontentref_/11): Berisi soal dan perencanaan project ini.

## Menampilkan Gambar

Program ini menggunakan fungsi `displayImage` untuk menampilkan gambar di terminal. Fungsi ini mendeteksi sistem operasi yang digunakan dan memilih pustaka yang sesuai (`feh` untuk Linux, untuk MacOS sudah built-in image viewer, `feh` untuk Windows WSL ).

## Kontribusi

Jika Anda ingin berkontribusi pada proyek ini, silakan fork repository ini dan buat pull request dengan perubahan Anda.

## Lisensi

Proyek ini dilisensikan di bawah MIT License.

Terima kasih telah menggunakan GeoCalc+!
