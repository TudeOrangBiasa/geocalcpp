# GeoCalc+
GeoCalc+ adalah aplikasi kalkulator geometri yang memungkinkan pengguna untuk menghitung luas dan keliling bangun datar serta volume dan luas permukaan bangun ruang. Aplikasi ini dibuat menggunakan bahasa pemrograman C++ dan menggunakan CMake sebagai sistem build.

## Fitur
- Menghitung luas dan keliling berbagai bangun datar seperti persegi, lingkaran, segitiga, dan lain-lain.
- Menghitung volume dan luas permukaan berbagai bangun ruang seperti kubus, balok, bola, dan lain-lain.
- Tampilan menu interaktif dengan ASCII art.
- Menggunakan modular programming untuk menjaga kode tetap rapi dan mudah dibaca.
- Menampilkan gambar bangun datar dan bangun ruang di terminal menggunakan `chafa` (Linux dan macOS) atau `w3m` (Windows).

## Minimum Requirement
- CMake 3.10 atau lebih baru
- Compiler C++ yang mendukung C++11
- Chafa / w3m
- Terminal yang support ANSI colors
- Sistem operasi Linux, macOS, atau Windows

- **Linux:**
*   **Debian/Ubuntu:** `sudo apt-get install chafa`

*   **Arch/Manjaro:** `sudo pacman -S chafa`
*   **Fedora/CentOS/RHEL:** `sudo dnf install chafa` atau `sudo yum install chafa`
*   **openSUSE:** `sudo zypper install chafa`
*   **Snap (Rekomendasi):** `sudo snap install chafa`
*   **Dari Source Code:** Lihat [https://github.com/hpjansson/chafa](https://github.com/hpjansson/chafa) untuk instruksi kompilasi.
- **macOS:**
  - `chafa`: `brew install chafa`
- **Windows:**
  - `w3m`: Unduh dan instal dari [situs resmi](http://w3m.sourceforge.net/).


## Petunjuk Penginstallan

1. Clone repository ini atau Download source code di repository ini
   lalu jalankan perintah ini :

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
- `src/`: Berisi kode sumber aplikasi.
- `include/`: Berisi header file.
- `src/view/ascii/`: Berisi file ASCII art.
- `build/`: Direktori untuk build output.
- `CMakeLists.txt`: File konfigurasi CMake.
- `README.md`: File ini.
- `kententuan.txt`: Berisi soal dan perencanaan project ini

## Menampilkan Gambar

Program ini menggunakan fungsi `displayImage` untuk menampilkan gambar di terminal. Fungsi ini mendeteksi sistem operasi yang digunakan dan memilih pustaka yang sesuai (`chafa` untuk Linux dan macOS, `w3m` untuk Windows).


## Kontribusi
Jika Anda ingin berkontribusi pada proyek ini, silakan fork repository ini dan buat pull request dengan perubahan Anda. 

## Lisensi
Proyek ini dilisensikan di bawah MIT License.

Terima kasih telah menggunakan GeoCalc+!