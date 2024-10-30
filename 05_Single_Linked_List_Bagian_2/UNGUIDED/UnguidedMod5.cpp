// #include <iostream>
// #include <string>

// using namespace std;

// // Struktur untuk menyimpan data mahasiswa
// struct Node {
//     int nim;
//     string nama;
//     Node* next;
// };

// // Kelas untuk mengelola Single Linked List
// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = nullptr;
//     }

//     // Fungsi untuk menambahkan data mahasiswa
//     void tambahMahasiswa(int nim, const string& nama) {
//         Node* newNode = new Node();
//         newNode->nim = nim;
//         newNode->nama = nama;
//         newNode->next = head; // Menambahkan di depan list
//         head = newNode;
//         cout << "Mahasiswa dengan NIM " << nim << " telah ditambahkan.\n";
//     }

//     // Fungsi untuk mencari mahasiswa berdasarkan NIM
//     void cariMahasiswa(int nim) {
//         Node* current = head;
//         while (current != nullptr) {
//             if (current->nim == nim) {
//                 cout << "Mahasiswa ditemukan: " << current->nama << endl;
//                 return;
//             }
//             current = current->next;
//         }
//         cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan.\n";
//     }

//     // Fungsi untuk menampilkan semua mahasiswa (opsional)
//     void tampilkanSemuaMahasiswa() {
//         Node* current = head;
//         if (current == nullptr) {
//             cout << "Tidak ada data mahasiswa.\n";
//             return;
//         }
//         while (current != nullptr) {
//             cout << "NIM: " << current->nim << ", Nama: " << current->nama << endl;
//             current = current->next;
//         }
//     }
// };