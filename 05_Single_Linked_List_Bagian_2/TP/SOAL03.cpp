// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = nullptr;
//     }

//     // Fungsi untuk menambahkan elemen secara terurut
//     void insertSorted(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = nullptr;

//         // Jika list kosong atau elemen baru lebih kecil dari head
//         if (head == nullptr || head->data >= newNode->data) {
//             newNode->next = head;
//             head = newNode;
//         } else {
//             Node* current = head;
//             // Temukan posisi untuk elemen baru
//             while (current->next != nullptr && current->next->data < newNode->data) {
//                 current = current->next;
//             }
//             newNode->next = current->next;
//             current->next = newNode;
//         }
//     }

//     // Fungsi untuk menampilkan elemen-elemen list
//     void display() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };