// #include "UnguidedSinglelist.cpp"

// int main() {
//     List L;
//     Elemen* P1, * P2, * P3, * P4, * P5 = NULL;
//     createList(L);

//     // alokasi dan insert data sesuai ilustrasi
//     P1 = alokasi(2);
//     insertFirst(L, P1);

//     P2 = alokasi(0);
//     insertFirst(L, P2);

//     P3 = alokasi(8);
//     insertFirst(L, P3);

//     P4 = alokasi(12);
//     insertFirst(L, P4);

//     P5 = alokasi(9);
//     insertFirst(L, P5);

//     // cetak hasil
//     printInfo(L);

//     // mencari elemen dengan nilai 8
//     Elemen* found = findElm(L, 8);
//     if (found != NULL) {
//         cout << found->data << " ditemukan dalam list" << endl;
//     } else {
//         cout << "Elemen tidak ditemukan" << endl;
//     }

//     // menghitung total nilai semua elemen
//     int total = sumALLElements(L);
//     cout << "Total info dari kelima elemen adalah " << total << endl;

//     return 0;
// }