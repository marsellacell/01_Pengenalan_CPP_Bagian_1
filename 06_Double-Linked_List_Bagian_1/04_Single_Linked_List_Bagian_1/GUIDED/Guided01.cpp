// #include <iostream>
// #include <cstring>
// using namespace std;

// //deklarasi struct untuk mahasiswa
// struct mahasiswa {
//     char nama[30];
//     char nim[10];
// };

// //deklarasi struct Node
// struct Node {
//     mahasiswa data;
//     Node *next;
// };

// Node *head;
// Node *tail;

// //insialisasi list
// void init() {
//     head = nullptr;
//     tail = nullptr;
// }

// //pengecekan apakah list kosong
// bool isEmpty() {
//     return head == nullptr;
// }

// //tambah depan
// void insertDepan(const mahasiswa &data) {
//     Node *baru = new Node;
//     baru->data = data;
//     baru->next = nullptr;
//     if (isEmpty()) {
//         head = tail = baru;
//     } else {
//         baru->next = head;
//         head = baru;
//     }
// }

// //tambah belakang
// void insertBelakang(const mahasiswa &data) {
//     Node *baru = new Node;
//     baru->data = data;
//     baru->next = nullptr;
//     if (isEmpty()) {
//         head = tail = baru;
//     } else {
//         tail->next = baru;
//         tail = baru;
//     }
// }

// //hitung jumlah list
// int hitungList() {
//     Node *current = head;
//     int jumlah = 0;
//     while (current != nullptr) {
//         jumlah++;
//         current = current->next;
//     }
//     return jumlah;
// }

// //hapus depan
// void hapusDepan() {
//     if (!isEmpty()) {
//         Node *hapus = head;
//         head = head->next;
//         delete hapus;
//         if (head == nullptr) {
//             tail = nullptr; //jika loist menjadi kosong
//         }
//     } else {
//         cout << "List kosong!" << endl;
//     }
// }

// //hapus belakang
// void hapusBelakang() {
//     if (!isEmpty()) {
//         if (head == tail) {
//             delete head;
//             head = tail = nullptr; // List menjadi kosong
//         } else {
//             Node *bantu = head;
//             while (bantu->next != tail) {
//                 bantu = bantu->next;
//             }
//             delete tail;
//             tail = bantu;
//             tail->next = nullptr;
//         }
//     } else {
//         cout << "List kosong!" << endl;
//     }
// }

// //tampilkan list
// void tampil() {
//     Node *current = head;
//     if (!isEmpty()) {
//         while (current != nullptr) {
//             cout << "Nama: " << current->data.nama << ", NIM: " << current->data.nim << endl;
//             current = current->next;
//         }
//     } else {
//         cout << "List masih kosong!" << endl;
//     }
// }

// //hapus list
// void clearList() {
//     Node *current = head;
//     while (current != nullptr) {
//         Node *hapus = current;
//         current = current->next;
//         delete hapus;
//     }
//     head = tail = nullptr;
//     cout << "List berhasil terhapus!" << endl;
// }

// //main function
// int main() {
//     init();
    
// //contoh data mahasiswa
//     mahasiswa m1 = {"Alice", "123456"};
//     mahasiswa m2 = {"Bob", "654321"};
//     mahasiswa m3 = {"Charlie", "112233"};

// //menambahkan mahasiswa ke dalam list
//     insertDepan(m1);
//     tampil();
//     insertBelakang(m2);
//     tampil();
//     insertDepan(m3);
//     tampil();

// //menghapus elemen dari list
// hapusDepan();
//     tampil();
//     hapusBelakang();
//     tampil();

// //menghapus seluruh list
// clearList();
// return 0;
// }