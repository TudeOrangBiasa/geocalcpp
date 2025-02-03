#include "../../include/printASCII.h"

using namespace std;

void printAsciiArt(const string& fileName, const string& colorCode) {
    // Get directory sekarang
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) == NULL) {
      cerr << "Error getting current working directory" << endl;
    }

    string basePath = string(cwd) + "/../src/view/ascii/";
    string filePath = basePath + fileName;
    ifstream file(filePath);
    if (file.is_open()) {
        string line;
        cout << colorCode; // Set color
        while (getline(file, line)) {
            cout << line << endl;
        }
        cout << "\033[0m"; // Reset color
        file.close();
    } else {
        cerr << "Unable to open file: " << filePath << endl;
    }
}