// #include <iostream>
// using namespace std;

// int main() {
//     int n, i;
//     float arr[100];
//     float max, min, sum = 0;
//     char pilihan;

//     // meminta user untuk memasukkan jumlah elemen array
//     cout << "Masukkan jumlah elemen array: ";
//     cin >> n;

//     // meminta user untuk memasukkan elemen-elemen array
//     cout << "Masukkan elemen-elemen array:\n";
//     for (i = 0; i < n; i++) {
//         cout << "Elemen ke-" << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     // menampilkan menu
//     cout << "\nMenu:\n";
//     cout << "1. Cari Nilai Maksimum\n";
//     cout << "2. Cari Nilai Minimum\n";
//     cout << "3. Cari Nilai Rata-Rata\n";
//     cout << "4. Keluar\n";
//     cout << "Pilih menu: ";
//     cin >> pilihan;

//     switch (pilihan) {
//         case '1':
//             // mencari nilai maksimum
//             max = arr[0];
//             for (i = 1; i < n; i++) {
//                 if (arr[i] > max) {
//                     max = arr[i];
//                 }
//             }
//             cout << "Nilai Maksimum: " << max << endl;
//             break;
//         case '2':
//             // mencari nilai minimum
//             min = arr[0];
//             for (i = 1; i < n; i++) {
//                 if (arr[i] < min) {
//                     min = arr[i];
//                 }
//             }
//             cout << "Nilai Minimum: " << min << endl;
//             break;
//         case '3':
//             // mencari nilai rata-rata
//             for (i = 0; i < n; i++) {
//                 sum += arr[i];
//             }
//             cout << "Nilai Rata-Rata: " << sum / n << endl;
//             break;
//         case '4':
//             // keluar dari program
//             cout << "Terima kasih telah menggunakan program ini!" << endl;
//             break;
//         default:
//             cout << "Pilihan tidak valid. Silakan coba lagi!" << endl;
//     }

//     return 0;
// }