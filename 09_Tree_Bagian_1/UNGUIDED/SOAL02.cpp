// #include <iostream>
// #include <limits> // Untuk INT_MIN dan INT_MAX
// using namespace std;

// // Definisi struktur Pohon
// struct Pohon {
//     int data;
//     Pohon* left;
//     Pohon* right;
// };

// // Fungsi untuk memeriksa apakah pohon adalah BST
// bool is_valid_bst(Pohon* node, int min_val, int max_val) {
//     if (node == NULL) return true;

//     if (node->data < min_val || node->data > max_val) return false;

//     return is_valid_bst(node->left, min_val, node->data - 1) &&
//            is_valid_bst(node->right, node->data + 1, max_val);
// }

// int main() {
//     // Pohon yang valid sebagai BST
//     Pohon* root1 = new Pohon{5, NULL, NULL};
//     root1->left = new Pohon{3, NULL, NULL};
//     root1->right = new Pohon{7, NULL, NULL};
//     root1->left->left = new Pohon{2, NULL, NULL};
//     root1->left->right = new Pohon{4, NULL, NULL};
//     root1->right->left = new Pohon{6, NULL, NULL};
//     root1->right->right = new Pohon{8, NULL, NULL};

//     cout << "Pohon 1: " << (is_valid_bst(root1, INT_MIN, INT_MAX) ? "Valid" : "Not Valid") << endl;

//     // Pohon yang tidak valid sebagai BST
//     Pohon* root2 = new Pohon{5, NULL, NULL};
//     root2->left = new Pohon{7, NULL, NULL}; // Ini akan menyebabkan BST tidak valid
//     root2->right = new Pohon{3, NULL, NULL};

//     cout << "Pohon 2: " << (is_valid_bst(root2, INT_MIN, INT_MAX) ? "Valid" : "Not Valid") << endl;

//     // Pohon yang valid sebagai BST
//     Pohon* root3 = new Pohon{10, NULL, NULL};
//     root3->left = new Pohon{5, NULL, NULL};
//     root3->right = new Pohon{15, NULL, NULL};
//     root3->left->left = new Pohon{2, NULL, NULL};
//     root3->left->right = new Pohon{7, NULL, NULL};
//     root3->right->left = new Pohon{12, NULL, NULL};
//     root3->right->right = new Pohon{20, NULL, NULL};

//     cout << "Pohon 3: " << (is_valid_bst(root3, INT_MIN, INT_MAX) ? "Valid" : "Not Valid") << endl;

//     // Menghapus pohon untuk menghindari memory leak
//     // (Anda bisa menambahkan fungsi untuk menghapus pohon jika diperlukan)

//     return 0;
// }