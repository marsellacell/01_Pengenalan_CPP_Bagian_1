#include <iostream>
#include <vector>

using namespace std;

int main() {
    int jumlahSimpul, jumlahSisi;

    // menerima input jumlah simpul
    cout << "Masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    // menerima input jumlah sisi
    cout << "Masukkan jumlah sisi: ";
    cin >> jumlahSisi;

    // membuat adjacency matrix
    vector<vector<int>> adjacencyMatrix(jumlahSimpul, vector<int>(jumlahSimpul, 0));

    // menerima input pasangan simpul
    cout << "Masukkan pasangan simpul (misal: 1 2): " << endl;
    for (int i = 0; i < jumlahSisi; i++) {
        int u, v;
        cin >> u >> v;

        // mengurangi 1 untuk indeks array (0-based index)
        u--; 
        v--;

        // mengisi adjacency matrix
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1; // karena graf tidak berarah
    }

    // menampilkan adjacency matrix
    cout << "Adjacency Matrix: " << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}