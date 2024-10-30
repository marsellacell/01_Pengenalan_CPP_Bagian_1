// #include <iostream>

// using namespace std;

// // definisi tipe data elemen dan pointer ke elemen
// struct Elemen {
//     int data;
//     Elemen* next;
// };

// // definisi tipe data untuk List
// struct List {
//     Elemen* first;
// };

// // fungsi untuk membuat list kosong
// void createList(List& L) {
//     L.first = NULL;
// }

// // fungsi untuk mengalokasikan elemen baru
// Elemen* alokasi(int x) {
//     Elemen* P = new Elemen;
//     if (P != NULL) {
//         P->data = x;
//         P->next = NULL;
//     }
//     return P;
// }

// // fungsi untuk menambahkan elemen di awal list
// void insertFirst(List& L, Elemen* P) {
//     P->next = L.first;
//     L.first = P;
// }

// // fungsi untuk mencetak semua elemen di list
// void printInfo(List L){
//     Elemen* P = L.first;
//     while (P != NULL) {
//         cout << P->data << " ";
//         P = P->next;
//     }
//     cout << endl;
// }

// // fungsi untuk mencari elemen dengan nilai x
// Elemen* findElm(List L, int x) {
//     Elemen* P = L.first;
//     while (P != NULL) {
//         if (P->data == x) {
//             return P; // Elemen ditemukan
//         }
//         P = P->next;
//     }
//     return NULL; // Elemen tidak ditemukan
// }

// // fungsi untuk menghitung total nilai semua elemen dalam list
// int sumALLElements(List L) {
//     int total = 0;
//     Elemen* P = L.first;
//     while (P != NULL) {
//         total += P->data;
//         P = P->next;
//     }
//     return total;
// }