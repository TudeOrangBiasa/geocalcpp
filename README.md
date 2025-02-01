# GeoCalc+

GeoCalc+ adalah aplikasi kalkulator geometri yang memungkinkan pengguna untuk menghitung luas dan keliling bangun datar serta volume dan luas permukaan bangun ruang. Aplikasi ini dibuat menggunakan bahasa pemrograman C++ dan menggunakan CMake sebagai sistem build.

## Fitur

- Menghitung luas dan keliling berbagai bangun datar seperti persegi, lingkaran, segitiga, dan lain-lain.
- Menghitung volume dan luas permukaan berbagai bangun ruang seperti kubus, balok, bola, dan lain-lain.
- Tampilan menu interaktif dengan ASCII art.
- Menggunakan modular programming untuk menjaga kode tetap rapi dan mudah dibaca.
- Menampilkan gambar bangun datar dan bangun ruang di terminal menggunakan `chafa` (Linux dan macOS), `w3m` (Windows) atau `chafa` dengan WSL (Windows).

## Minimum Requirement

- CMake 3.10 atau lebih baru
- Compiler C++ yang mendukung C++11
- Chafa / w3m
- Terminal yang support ANSI colors
- Sistem operasi Linux, macOS, atau Windows

**Perhatikan! untuk memastikan bahwa sudah menginstall semua requirement**

1. **Compiler C++:** Buka terminal Anda dan jalankan perintah berikut:

```sh
   g++ --version
   ```

2. **CMAKE** Jalankan perintah ini di terminal anda:

```sh
   cmake --version
   ```

3. **Chafa/W3m** Jalankan perintah ini di terminal anda:

```sh
   chafa --version
   ```

   atau

```sh
   w3m --version
   ```

4. **Support ANSI color** Jalankan perintah ini di terminal anda, pastikan teks ini berubah    warna menjadi merah

```sh
   printf "\e[31mThis text should be red.\e[0m\n"
   ```

**Pastikan versi dan semua requirement sudah terpenuhi**


## Instalasi untuk support output gambar sesuai OS yang dipakai :

### Linux

- **Debian/Ubuntu:** `sudo apt-get install chafa`
- **Arch/Manjaro:** `sudo pacman -S chafa`
- **Fedora/CentOS/RHEL:** `sudo dnf install chafa` atau `sudo yum install chafa`
- **openSUSE:** `sudo zypper install chafa`
- **Snap (Rekomendasi):** `sudo snap install chafa`
- **Dari Source Code:** Lihat [https://github.com/hpjansson/chafa](https://github.com/hpjansson/chafa) untuk instruksi kompilasi.

### macOS

- `chafa`: `brew install chafa`

### Windows

- **Untuk Windows memiliki 2 opsi:**
  1. Menggunakan WSL (Windows Subsystem for Linux) dengan menginstall `chafa`. Ini adalah opsi yang lebih sederhana karena Anda dapat menggunakan Terminal bawaan Windows (RECOMMENDED).
  2. Menggunakan `Cygwin` Terminal untuk support menjalankan program ini. Jika menggunakan `Cygwin`, pastikan menginstall `w3m` supaya support untuk output gambar di terminal.
- `Cygwin`: Unduh dan instal dari [situs resmi](https://www.cygwin.com/)
- `w3m`: Unduh dan instal dari [situs resmi](http://w3m.sourceforge.net/).
 **Note : Saya menyarankan menggunakan WSL dengan Menginstall chafa pada WSL karena lebih mudah digunakan dibanding `Cygwin`**


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

Program ini menggunakan fungsi `displayImage` untuk menampilkan gambar di terminal. Fungsi ini mendeteksi sistem operasi yang digunakan dan memilih pustaka yang sesuai (`chafa` untuk Linux dan macOS, `w3m` untuk Windows atau `chafa` WSL untuk Windows).

## Kontribusi

Jika Anda ingin berkontribusi pada proyek ini, silakan fork repository ini dan buat pull request dengan perubahan Anda.

## Lisensi

Proyek ini dilisensikan di bawah MIT License.

Terima kasih telah menggunakan GeoCalc+!