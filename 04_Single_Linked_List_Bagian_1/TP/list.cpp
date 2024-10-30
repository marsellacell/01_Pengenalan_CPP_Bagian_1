// #include "list.h"

// void createList(List &L) {
//     /** this procedure will initialize the list L*/
//     L.first = NULL; // Menggunakan akses langsung
// }

// address allocate(infotype x) {
//     address P = new elmist; // Pastikan menggunakan elmist
//     P->info = x; // Menggunakan akses langsung
//     P->next = NULL; // Menggunakan akses langsung
//     return P;
// }

// void insertFirst(List &L, address P) {
//     P->next = L.first; // Menggunakan akses langsung
//     L.first = P; // Menggunakan akses langsung
// }

// void printInfo(List L) {
//     address P = L.first; // Menggunakan akses langsung
//     while (P != NULL) {
//         cout << P->info << " "; // Menggunakan akses langsung
//         P = P->next; // Menggunakan akses langsung
//     }
//     cout << endl;
// }


// #include "list.h"

// void createList(List &L) {
//     L.first = NULL;
// }

// address allocate(infotype x) {
//     address P = new elmist;
//     P->info = x;
//     P->next = NULL;
//     return P;
// }

// void insertFirst(List &L, address P) {
//     P->next = L.first;
//     L.first = P;
// }

// void insertLast(List &L, address P) {
//     if (L.first == NULL) {
//         L.first = P; // Jika list kosong, elemen pertama
//     } else {
//         address last = L.first;
//         while (last->next != NULL) {
//             last = last->next; // Mencari elemen terakhir
//         }
//         last->next = P; // Menambahkan elemen baru di akhir
//     }
// }

// void insertAfter(List &L, address P, address prev) {
//     if (prev != NULL) {
//         P->next = prev->next;
//         prev->next = P;
//     }
// }

// void deleteLast(List &L) {
//     if (L.first != NULL) {
//         if (L.first->next == NULL) {
//             delete L.first;
//             L.first = NULL; // List menjadi kosong
//         } else {
//             address last = L.first;
//             address secondLast = NULL;
//             while (last->next != NULL) {
//                 secondLast = last;
//                 last = last->next; // Mencari elemen terakhir
//             }
//             delete last; // Menghapus elemen terakhir
//             if (secondLast != NULL) {
//                 secondLast->next = NULL; // Mengubah next dari elemen kedua terakhir menjadi NULL
//             }
//         }
//     }
// }

// void deleteAfter(List &L, address prev) {
//     if (prev != NULL && prev->next != NULL) {
//         address toDelete = prev->next;
//         prev->next = toDelete->next;
//         delete toDelete;
//     }
// }

// address searchInfo(List L, infotype x) {
//     address P = L.first;
//     while (P != NULL) {
//         if (P->info == x) {
//             return P; // Mengembalikan alamat elemen yang ditemukan
//         }
//         P = P->next;
//     }
//     return NULL; // Jika tidak ditemukan
// }

// void printInfo(List L) {
//     address P = L.first;
//     while (P != NULL) {
//         cout << P->info; // Tidak ada koma di akhir
//         P = P->next; // Melanjutkan ke elemen berikutnya
//     }
//     cout << endl;
// }