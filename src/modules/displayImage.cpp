
#include "../include/displayImage.h"

using namespace std;

void displayImage(const string& fileName, int width, int height) {
    // get directory sekarang
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) == NULL) {
        cerr << "Error getting current working directory" << endl;
    }

    string basePath = string(cwd) + "/../assets/";
    string filePath = basePath + fileName;

    #if defined(_WIN32) || defined(_WIN64)
        string command = "w3mimgdisplay -geometry " + to_string(width) + "x" + to_string(height) + " " + filePath; // untuk windows pake w3m
    #elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
        string command = "chafa --size" + to_string(width) + "x" + to_string(height) + " " + filePath; // untuk mac dan linux pake chafa
    #else
        cerr << "Unsupported OS" << endl; // unsupported OS diluar dari 3 OS diatas
        return;
    #endif
    system(command.c_str());
}