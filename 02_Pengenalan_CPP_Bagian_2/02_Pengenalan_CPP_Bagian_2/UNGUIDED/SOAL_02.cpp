// #include <iostream>
// using namespace std;

// int main() {
//     int baris, kolom, lapis;
//     int i, j, k;

//     // meminta user untuk memasukkan ukuran array
//     cout << "Masukkan jumlah baris: ";
//     cin >> baris;
//     cout << "Masukkan jumlah kolom: ";
//     cin >> kolom;
//     cout << "Masukkan jumlah lapis: ";
//     cin >> lapis;

//     // membuat array tiga dimensi
//     int arr[baris][kolom][lapis];

//     // meminta user untuk memasukkan elemen-elemen array
//     cout << "Masukkan elemen-elemen array:\n";
//     for (i = 0; i < baris; i++) {
//         for (j = 0; j < kolom; j++) {
//             for (k = 0; k < lapis; k++) {
//                 cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
//                 cin >> arr[i][j][k];
//             }
//         }
//     }

//     // menampilkan array yang telah diinputkan
//     cout << "Data Array:\n";
//     for (i = 0; i < baris; i++) {
//         for (j = 0; j < kolom; j++) {
//             for (k = 0; k < lapis; k++) {
//                 cout << arr[i][j][k] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }

//     return 0;
// }