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
//     // buat node baru
//     Node* newNode = new Node();
//     newNode->data = newData;
//     newNode->next = head;
//     // set newNode sebagai head
//     head = newNode;
// }

// // fungsi untuk menambah node baru di belakang
// void insertAtEnd(Node*& head, int newData) {
//     // buat node baru
//     Node* newNode = new Node();
//     newNode->data = newData;
//     newNode->next = nullptr;

//     // jika linked list kosong, node baru menjadi head
//     if (head == nullptr) {
//         head = newNode;
//         return;
//     }

//     // cari node terakhir
//     Node* last = head;
//     while (last->next != nullptr) {
//         last = last->next;
//     }

//     // tambahkan node baru di akhir
//     last->next = newNode;
// }

// int main() {
//     Node* head = nullptr; // inisialisasi linked list kosong

//     // contoh input yang diberikan
//     insertAtFront(head, 10); // tambah node di depan dengan nilai 10
//     insertAtEnd(head, 20);   // tambah node di belakang dengan nilai 20
//     insertAtFront(head, 5);  // tambah node di depan dengan nilai 5

//     // cetak linked list
//     cout << "";
//     printList(head);

//     return 0;
// }
