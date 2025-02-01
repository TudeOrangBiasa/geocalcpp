#include "../include/displayImage.h"

using namespace std;

// ## ini adalah default dari parameter fungsi menampilkan gambar tanpa custom ukuran
// ## tambahkan parameter width dan height jika ingin mensetting ukuran gambar contoh code bisa di liat pada file header displayImage.h
void displayImage(const string& fileName) {
    // get directory sekarang
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) == NULL) {
        cerr << "Error getting current working directory" << endl;
    }

    string basePath = string(cwd) + "/../assets/";
    string filePath = basePath + fileName;

    #if defined(_WIN32) || defined(_WIN64)
        // ## uncomment line code ini jika ingin mengaktifkan custom ukuran gambar 
        // string command = "w3mimgdisplay -geometry " + to_string(width) + "x" + to_string(height) + " " + filePath;  untuk windows pake w3m
        // ## default menampilkan gambar tanpa custom ukuran
        string command = "w3mimgdisplay " + filePath; // untuk windows pake w3m 
    #elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
        // ## uncomment line code ini jika ingin mengaktifkan custom ukuran gambar
        // string command = "chafa --stretch --size " + to_string(width) + "x" + to_string(height) + " " + filePath;  untuk mac dan linux pake chafa
        // ## default menampilkan gambar tanpa custom ukuran
        string command = "chafa " + filePath; // untuk mac dan linux pake chafa
    #else
        cerr << "Unsupported OS" << endl; // unsupported OS diluar dari 3 OS diatas
        return;
    #endif
    system(command.c_str());
}