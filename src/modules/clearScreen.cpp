#include "../../include/clearScreen.h"

using namespace std;

// Best Practice: Membuat fungsi clearScreen untuk membersihkan layar 
// note (Tude) : Sebenernya bisa pake system cls/clear tapi ini lebih portable karena bisa dijalankan di windows, linux, dan mac !
// Ansi escape 
// \033[2j = Membersihkan layar
// \033[1;1H = Pindah kursor ke posisi 1,1

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

