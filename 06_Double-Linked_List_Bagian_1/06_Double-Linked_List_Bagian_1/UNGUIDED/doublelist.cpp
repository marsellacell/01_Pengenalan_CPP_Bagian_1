// #include "doublelist.h"

// // Initialize an empty list
// void createList(List &L) {
//     L.first = nullptr;
//     L.last = nullptr;
// }

// // Allocate a new node with given vehicle information
// Node* allocate(infotype x) {
//     Node* newNode = new Node;
//     newNode->info = x;
//     newNode->next = nullptr;
//     newNode->prev = nullptr;
//     return newNode;
// }

// // Deallocate memory of a node
// void deallocate(Node* P) {
//     delete P;
// }

// // Search for a node by 'no_polisi'
// Node* findElm(List L, string no_polisi) {
//     Node* P = L.first;
//     while (P != nullptr) {
//         if (P->info.no_polisi == no_polisi)
//             return P;
//         P = P->next;
//     }
//     return nullptr;
// }

// // Insert a new node at the beginning of the list
// void insertFirst(List &L, Node* P) {
//     if (L.first == nullptr) {
//         L.first = P;
//         L.last = P;
//     } else {
//         P->next = L.first;
//         L.first->prev = P;
//         L.first = P;
//     }
// }

// // Delete the first node
// void deleteFirst(List &L) {
//     if (L.first != nullptr) {
//         Node* P = L.first;
//         if (L.first == L.last) {
//             L.first = nullptr;
//             L.last = nullptr;
//         } else {
//             L.first = L.first->next;
//             L.first->prev = nullptr;
//         }
//         deallocate(P);
//     }
// }

// // Delete the last node
// void deleteLast(List &L) {
//     if (L.first != nullptr) {
//         Node* P = L.last;
//         if (L.first == L.last) {
//             L.first = nullptr;
//             L.last = nullptr;
//         } else {
//             L.last = L.last->prev;
//             L.last->next = nullptr;
//         }
//         deallocate(P);
//     }
// }

// // Delete a node after a given node
// void deleteAfter(Node* prec, List &L) {
//     if (prec != nullptr && prec->next != nullptr) {
//         Node* P = prec->next;
//         prec->next = P->next;
//         if (P->next != nullptr) {
//             P->next->prev = prec;
//         }
//         if (P == L.last) {
//             L.last = prec;
//         }
//         deallocate(P);
//     }
// }

// // Print the entire list of vehicles
// void printList(List L) {
//     Node* P = L.first;
//     int i = 1;
//     cout << "DATA LIST:" << endl;
//     while (P != nullptr) {
//         cout << i << ". No Polisi: " << P->info.no_polisi << endl;
//         cout << "   Warna: " << P->info.warna << endl;
//         cout << "   Tahun: " << P->info.tahun << endl;
//         P = P->next;
//         i++;
//     }
// }