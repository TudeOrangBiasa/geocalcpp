#include "../include/validateInput.h"

using namespace std;

void validateInput(const string &prompt , double &input) {
     do {
        cout << prompt;
        cin >> input;

        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Input tidak valid. Masukkan angka." << endl;
        } else if (input <= 0) {
            cout << "Nilai harus lebih dari 0." << endl;
        }
    } while (input <= 0 || cin.fail());
}

