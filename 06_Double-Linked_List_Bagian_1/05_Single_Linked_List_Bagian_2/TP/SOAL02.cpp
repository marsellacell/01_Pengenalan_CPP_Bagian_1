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

//     void bubbleSort() {
//         if (head == nullptr) return;

//         bool swapped;
//         do {
//             swapped = false;
//             Node* current = head;

//             while (current->next != nullptr) {
//                 if (current->data > current->next->data) {
//                     // Tukar data
//                     int temp = current->data;
//                     current->data = current->next->data;
//                     current->next->data = temp;
//                     swapped = true;
//                 }
//                 current = current->next;
//             }
//         } while (swapped);
//     }

//     void display() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };