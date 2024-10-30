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

// // fungsi untuk mencari node dengan nilai tertentu
// bool searchNode(Node* head, int key) {
//     Node* current = head;
//     while (current != nullptr) {
//         if (current->data == key) {
//             return true;
//         }
//         current = current->next;
//     }
//     return false;
// }

// // fungsi untuk menghitung panjang linked list
// int getListLength(Node* head) {
//     int length = 0;
//     Node* current = head;
//     while (current != nullptr) {
//         length++;
//         current = current->next;
//     }
//     return length;
// }

// int main() {
//     Node* head = nullptr; // inisialisasi linked list kosong

//     // contoh input
//     insertAtFront(head, 10); // tambah node di depan dengan nilai 10
//     insertAtEnd(head, 20);   // tambah node di belakang dengan nilai 20
//     insertAtFront(head, 5);  // tambah node di depan dengan nilai 5

//     // mencari node dengan nilai 20
//     int searchValue = 20;
//     if (searchNode(head, searchValue)) {
//         cout << "Node dengan nilai " << searchValue << " ditemukan." << endl;
//     } else {
//         cout << "Node dengan nilai " << searchValue << " tidak ditemukan." << endl;
//     }

//     // menghitung panjang linked list
//     int length = getListLength(head);
//     cout << "Panjang linked list: " << length << endl;

//     return 0;
// }