#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int jumlah_simpul;

    // meminta jumlah simpul (kota)
    cout << "Silakan masukkan jumlah simpul : ";
    cin >> jumlah_simpul;
    cin.ignore(); // membersihkan buffer input

    vector<string> simpul(jumlah_simpul);

    // memasukkan nama-nama simpul
    for (int i = 0; i < jumlah_simpul; ++i) {
        cout << "Silakan masukkan nama simpul\nSimpul " << i + 1 << " : ";
        getline(cin, simpul[i]);
    }

    // membuat matriks bobot (berisi nol awalnya)
    vector<vector<int>> matriks_bobot(jumlah_simpul, vector<int>(jumlah_simpul, 0));

    // meminta bobot antar simpul dari pengguna
    cout << "\nSilakan masukkan bobot antar simpul\n";
    for (int i = 0; i < jumlah_simpul; ++i) {
        for (int j = 0; j < jumlah_simpul; ++j) {
            if (i != j) { // tidak meminta bobot ke simpul yang sama (diagonal tetap 0)
                cout << simpul[i] << " --> " << simpul[j] << " = ";
                cin >> matriks_bobot[i][j];
            }
        }
    }

    // menampilkan matriks bobot
    cout << "\n\t";
    for (const auto& nama : simpul) {
        cout << nama << "\t";
    }
    cout << "\n";

    for (int i = 0; i < jumlah_simpul; ++i) {
        cout << simpul[i] << "\t";
        for (int j = 0; j < jumlah_simpul; ++j) {
            cout << matriks_bobot[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nProcess returned 0 (0x0)   execution time : 0.000 s\nPress any key to continue.";
    return 0;
}