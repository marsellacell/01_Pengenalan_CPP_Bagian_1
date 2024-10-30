// #include <iostream>
// using namespace std;

// // Struktur node untuk Single Linked List
// struct Node {
//     int data;
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

//     // Fungsi untuk menambahkan elemen di akhir list
//     void insert(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = nullptr;

//         if (head == nullptr) {
//             head = newNode;
//         } else {
//             Node* temp = head;
//             while (temp->next != nullptr) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }
//     }

//     // Fungsi untuk mencari elemen tertentu
//     void searchElement(int value) {
//         Node* current = head;
//         int position = 1;

//         while (current != nullptr) {
//             if (current->data == value) {
//                 cout << "Elemen " << value << " ditemukan pada posisi ke-" << position << endl;
//                 return;
//             }
//             current = current->next;
//             position++;
//         }
//         cout << "Elemen " << value << " tidak ditemukan dalam list." << endl;
//     }
// };