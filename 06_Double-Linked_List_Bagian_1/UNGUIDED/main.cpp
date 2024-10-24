// #include "doublelist.h"

// // Function to input vehicle details from the user
// infotype inputVehicle() {
//     infotype x;
//     cout << "Masukkan nomor polisi: ";
//     cin >> x.no_polisi;
//     cout << "Masukkan warna kendaraan: ";
//     cin >> x.warna;
//     cout << "Masukkan tahun kendaraan: ";
//     cin >> x.tahun;
//     return x;
// }

// int main() {
//     List L;
//     createList(L);

//     infotype x;
//     string no_polisi;
//     int choice;
//     bool run = true;

//     while (run) {
//         cout << "\nMenu:" << endl;
//         cout << "1. Tambah kendaraan" << endl;
//         cout << "2. Cari kendaraan berdasarkan nomor polisi" << endl;
//         cout << "3. Hapus kendaraan berdasarkan nomor polisi" << endl;
//         cout << "4. Tampilkan daftar kendaraan" << endl;
//         cout << "5. Keluar" << endl;
//         cout << "Pilihan: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 // Input and add a new vehicle
//                 x = inputVehicle();
//                 insertFirst(L, allocate(x));
//                 cout << "\nKendaraan berhasil ditambahkan!" << endl;
//                 break;

//             case 2:
//                 // Find a vehicle by 'no_polisi'
//                 cout << "Masukkan Nomor Polisi yang dicari: ";
//                 cin >> no_polisi;
//                 if (Node* found = findElm(L, no_polisi)) {
//                     cout << "Kendaraan ditemukan: " << endl;
//                     cout << "No Polisi: " << found->info.no_polisi << endl;
//                     cout << "Warna: " << found->info.warna << endl;
//                     cout << "Tahun: " << found->info.tahun << endl;
//                 } else {
//                     cout << "Kendaraan dengan nomor polisi " << no_polisi << " tidak ditemukan." << endl;
//                 }
//                 break;

//             case 3:
//                 // Delete a vehicle by 'no_polisi'
//                 cout << "Masukkan Nomor Polisi yang akan dihapus: ";
//                 cin >> no_polisi;
//                 if (Node* target = findElm(L, no_polisi)) {
//                     if (target == L.first) {
//                         deleteFirst(L);
//                     } else if (target == L.last) {
//                         deleteLast(L);
//                     } else {
//                         deleteAfter(target->prev, L);
//                     }
//                     cout << "Kendaraan berhasil dihapus!" << endl;
//                 } else {
//                     cout << "Kendaraan dengan nomor polisi " << no_polisi << " tidak ditemukan." << endl;
//                 }
//                 break;

//             case 4:
//                 // Print the vehicle list
//                 printList(L);
//                 break;

//             case 5:
//                 // Exit the program
//                 run = false;
//                 break;

//             default:
//                 cout << "Pilihan tidak valid!" << endl;
//                 break;
//         }
//     }

//     return 0;
// }