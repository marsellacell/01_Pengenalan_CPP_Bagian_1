// #include <iostream>
// using namespace std;

// // Definisi struktur Pohon
// struct Pohon {
//     int data;
//     Pohon* left;
//     Pohon* right;
// };

// // Fungsi untuk menghitung jumlah simpul daun
// int cari_simpul_daun(Pohon* node) {
//     // Jika node adalah NULL, kembalikan 0
//     if (node == NULL) {
//         return 0;
//     }

//     // Jika node adalah daun (tidak memiliki anak kiri dan kanan)
//     if (node->left == NULL && node->right == NULL) {
//         return 1; // Hitung simpul daun ini
//     }

//     // Rekursi ke anak kiri dan kanan
//     return cari_simpul_daun(node->left) + cari_simpul_daun(node->right);
// }

// int main() {
//     // Membuat pohon contoh
//     Pohon* root = new Pohon{1, NULL, NULL};
//     root->left = new Pohon{2, NULL, NULL};
//     root->right = new Pohon{3, NULL, NULL};
//     root->left->left = new Pohon{4, NULL, NULL};
//     root->left->right = new Pohon{5, NULL, NULL};
//     root->right->left = new Pohon{6, NULL, NULL}; // Menambahkan simpul daun baru
//     root->right->right = new Pohon{7, NULL, NULL}; // Menambahkan simpul daun baru

//     // Menghitung jumlah simpul daun
//     int jumlah_daun = cari_simpul_daun(root);
//     cout << "Jumlah simpul daun: " << jumlah_daun << endl;

//     // Menghapus pohon untuk menghindari memory leak
//     // (Anda bisa menambahkan fungsi untuk menghapus pohon jika diperlukan)

//     return 0;
// }