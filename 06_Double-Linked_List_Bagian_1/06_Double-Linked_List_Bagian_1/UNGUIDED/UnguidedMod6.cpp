// #include <iostream>
// #include <string>

// using namespace std;

// // Struktur Node untuk menyimpan informasi buku
// struct Node {
//     int IDBuku;
//     string JudulBuku;
//     string PenulisBuku;
//     Node* next;
//     Node* prev;

//     Node(int id, string judul, string penulis) {
//         IDBuku = id;
//         JudulBuku = judul;
//         PenulisBuku = penulis;
//         next = nullptr;
//         prev = nullptr;
//     }
// };

// // Kelas untuk mengelola Double Linked List
// class DoubleLinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     DoubleLinkedList() {
//         head = nullptr;
//         tail = nullptr;
//     }

//     // Fungsi untuk menambahkan buku di akhir linked list
//     void addBook(int id, string judul, string penulis) {
//         Node* newNode = new Node(id, judul, penulis);
//         if (!head) {
//             head = newNode;
//             tail = newNode;
//         } else {
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//     }

//     // Fungsi untuk menampilkan semua buku dari awal ke akhir
//     void displayFromStart() {
//         Node* current = head;
//         while (current) {
//             cout << "ID Buku: " << current->IDBuku << ", Judul: " << current->JudulBuku << ", Penulis: " << current->PenulisBuku << endl;
//             current = current->next;
//         }
//     }

//     // Fungsi untuk menampilkan semua buku dari akhir ke awal
//     void displayFromEnd() {
//         Node* current = tail;
//         while (current) {
//             cout << "ID Buku: " << current->IDBuku << ", Judul: " << current->JudulBuku << ", Penulis: " << current->PenulisBuku << endl;
//             current = current->prev;
//         }
//     }

//     // Destructor untuk menghapus semua node
//     ~DoubleLinkedList() {
//         Node* current = head;
//         while (current) {
//             Node* nextNode = current->next;
//             delete current;
//             current = nextNode;
//         }
//     }
// };

// // Fungsi utama
// int main() {
//     DoubleLinkedList daftarBuku;
//     daftarBuku.addBook(1, "Filosofi Teras", "Henry Manampiring");
//     daftarBuku.addBook(2, "Kata", "Rintik Sedu");
//     daftarBuku.addBook(3, "Dear Tomorrow", "Maudy Ayunda");

//     cout << "Daftar Buku (dari awal ke akhir):" << endl;
//     daftarBuku.displayFromStart();

//     cout << "\nDaftar Buku (dari akhir ke awal):" << endl;
//     daftarBuku.displayFromEnd();

//     return 0;
// }