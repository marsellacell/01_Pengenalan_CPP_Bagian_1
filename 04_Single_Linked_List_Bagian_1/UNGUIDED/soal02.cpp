// #include <iostream>
// using namespace std;

// // definisi struktur Node
// struct Node {
//     int data;
//     Node* next;
// };

// // fungsi untuk mencetak seluruh isi linked list
// void printList(Node* n) {
//     while (n != nullptr) {
//         cout << n->data;
//         if (n->next != nullptr) {
//             cout << " -> ";
//         }
//         n = n->next;
//     }
//     cout << endl;
// }

// // fungsi untuk menambah node baru di depan
// void insertAtFront(Node*& head, int newData) {
//     Node* newNode = new Node();
//     newNode->data = newData;
//     newNode->next = head;
//     head = newNode;
// }

// // fungsi untuk menambah node baru di belakang
// void insertAtEnd(Node*& head, int newData) {
//     Node* newNode = new Node();
//     newNode->data = newData;
//     newNode->next = nullptr;

//     if (head == nullptr) {
//         head = newNode;
//         return;
//     }

//     Node* last = head;
//     while (last->next != nullptr) {
//         last = last->next;
//     }
//     last->next = newNode;
// }

// // fungsi untuk menghapus node dengan nilai tertentu
// void deleteNode(Node*& head, int key) {
//     // menangani kasus linked list kosong
//     if (head == nullptr) {
//         cout << "List kosong. Tidak ada node yang bisa dihapus." << endl;
//         return;
//     }

//     // jika node yang akan dihapus adalah head
//     if (head->data == key) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return;
//     }

//     // cari node sebelum node yang memiliki nilai tertentu
//     Node* current = head;
//     Node* previous = nullptr;
//     while (current != nullptr && current->data != key) {
//         previous = current;
//         current = current->next;
//     }

//     // jika node dengan nilai tertentu tidak ditemukan
//     if (current == nullptr) {
//         cout << "Node dengan nilai " << key << " tidak ditemukan." << endl;
//         return;
//     }

//     // node ditemukan, hapus node
//     previous->next = current->next;
//     delete current;
// }

// int main() {
//     Node* head = nullptr; // inisialisasi linked list kosong

//     // contoh input
//     insertAtFront(head, 10); // tambah node di depan dengan nilai 10
//     insertAtEnd(head, 20);   // tambah node di belakang dengan nilai 20
//     insertAtFront(head, 5);  // tambah node di depan dengan nilai 5

//     // cetak linked list sebelum penghapusan
//     cout << "Linked list sebelum penghapusan: ";
//     printList(head);

//     // hapus node dengan nilai 10
//     deleteNode(head, 10);

//     // cetak linked list setelah penghapusan
//     cout << "Linked list setelah penghapusan: ";
//     printList(head);

//     return 0;
// }