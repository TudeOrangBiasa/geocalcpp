#include "../include/validateInput.h"

using namespace std;

void validateInput(const string &prompt , double &input) {
    do {
        cout << prompt;
        cin >> input;
        if (input <= 0) cout << "nilai harus lebih dari 0" << endl;
    
    } while (input <= 0);

}

