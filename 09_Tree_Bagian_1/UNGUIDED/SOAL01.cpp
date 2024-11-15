// #include <iostream>
// using namespace std;

// /// PROGRAM BINARY TREE

// // Deklarasi Pohon
// struct Pohon {
//     char data;
//     Pohon *left, *right, *parent;
// };

// Pohon *root;

// // Inisialisasi
// void init() {
//     root = NULL;
// }

// // Cek Node
// bool isEmpty() {
//     return root == NULL;
// }

// // Buat Node Baru
// void buatNode(char data) {
//     if (isEmpty()) {
//         root = new Pohon{data, NULL, NULL, NULL};
//         cout << "\nNode " << data << " berhasil dibuat menjadi root." << endl;
//     } else {
//         cout << "\nPohon sudah dibuat." << endl;
//     }
// }

// // Tambah Kiri
// Pohon *insertLeft(char data, Pohon *node) {
//     if (isEmpty()) {
//         cout << "\nBuat tree terlebih dahulu!" << endl;
//         return NULL;
//     }
//     if (node->left != NULL) {
//         cout << "\nNode " << node->data << " sudah ada child kiri!" << endl;
//         return NULL;
//     }
//     Pohon *baru = new Pohon{data, NULL, NULL, node};
//     node->left = baru;
//     cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
//     return baru;
// }

// // Tambah Kanan
// Pohon *insertRight(char data, Pohon *node) {
//     if (isEmpty()) {
//         cout << "\nBuat tree terlebih dahulu!" << endl;
//         return NULL;
//     }
//     if (node->right != NULL) {
//         cout << "\nNode " << node->data << " sudah ada child kanan!" << endl;
//         return NULL;
//     }
//     Pohon *baru = new Pohon{data, NULL, NULL, node};
//     node->right = baru;
//     cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
//     return baru;
// }

// // Ubah Data Tree
// void update(char data, Pohon *node) {
//     if (isEmpty()) {
//         cout << "\nBuat tree terlebih dahulu!" << endl;
//         return;
//     }
//     if (!node) {
//         cout << "\nNode yang ingin diganti tidak ada!" << endl;
//         return;
//     }
//     char temp = node->data;
//     node->data = data;
//     cout << "\nNode " << temp << " berhasil diubah menjadi " << data << endl;
// }

// // Cari Node berdasarkan data
// Pohon* findNode(Pohon* node, char data) {
//     if (node == NULL) return NULL;
//     if (node->data == data) return node;
    
//     Pohon* foundNode = findNode(node->left, data);
//     if (foundNode != NULL) return foundNode;

//     return findNode(node->right, data);
// }

// // Menampilkan Child dari Node
// void showChildren(Pohon *node) {
//     if (node == NULL) {
//         cout << "\nNode tidak ada!" << endl;
//         return;
//     }
//     cout << "\nChild dari node " << node->data << ": ";
//     if (node->left) cout << node->left->data << " (kiri) ";
//     if (node->right) cout << node->right->data << " (kanan) ";
//     if (node->left == NULL && node->right == NULL) cout << "(tidak ada child)";
//     cout << endl;
// }

// // Menampilkan Descendant dari Node
// void showDescendants(Pohon *node) {
//     if (node == NULL) {
//         cout << "\nNode tidak ada!" << endl;
//         return;
//     }
//     cout << "\nDescendant dari node " << node->data << ": ";
//     bool hasDescendant = false;
//     if (node->left) {
//         cout << node->left->data << " ";
//         showDescendants(node->left);
//         hasDescendant = true;
//     }
//     if (node->right) {
//         cout << node->right->data << " ";
//         showDescendants(node->right);
//         hasDescendant = true;
//     }
//     if (!hasDescendant) cout << "(tidak ada descendant)";
//     cout << endl;
// }

// // Fungsi main
// int main() {
//     init();
//     int choice;
//     char data, parentData;

//     while (true) {
//         cout << "\nMenu:\n";
//         cout << "1. Buat Node Root\n";
//         cout << "2. Tambah Child Kiri\n";
//                 cout << "3. Tambah Child Kanan\n";
//         cout << "4. Ubah Data Node\n";
//         cout << "5. Tampilkan Child dari Node\n";
//         cout << "6. Tampilkan Descendant dari Node\n";
//         cout << "7. Keluar\n";
//         cout << "Pilih opsi: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Masukkan data untuk root: ";
//                 cin >> data;
//                 buatNode(data);
//                 break;

//             case 2:
//                 cout << "Masukkan data untuk child kiri: ";
//                 cin >> data;
//                 insertLeft(data, root);
//                 break;

//             case 3:
//                 cout << "Masukkan data untuk child kanan: ";
//                 cin >> data;
//                 insertRight(data, root);
//                 break;

//             case 4:
//                 cout << "Masukkan data baru: ";
//                 cin >> data;
//                 cout << "Masukkan data node yang ingin diubah: ";
//                 cin >> parentData;
//                 {
//                     Pohon* nodeToUpdate = findNode(root, parentData);
//                     update(data, nodeToUpdate);
//                 }
//                 break;

//             case 5:
//                 cout << "Masukkan data node untuk melihat child: ";
//                 cin >> parentData;
//                 {
//                     Pohon* nodeToShowChildren = findNode(root, parentData);
//                     showChildren(nodeToShowChildren);
//                 }
//                 break;

//             case 6:
//                 cout << "Masukkan data node untuk melihat descendant: ";
//                 cin >> parentData;
//                 {
//                     Pohon* nodeToShowDescendants = findNode(root, parentData);
//                     showDescendants(nodeToShowDescendants);
//                 }
//                 break;

//             case 7:
//                 cout << "Keluar dari program." << endl;
//                 return 0;

//             default:
//                 cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
//         }
//     }
// }