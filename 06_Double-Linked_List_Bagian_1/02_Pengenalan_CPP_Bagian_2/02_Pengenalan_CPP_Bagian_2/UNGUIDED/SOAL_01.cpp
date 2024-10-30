// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> data;
//     int input;

//     // input data array
//     cout << "masukkan data array (akhiri dengan angka negatif): ";
//     while (true) {
//         cin >> input;
//         if (input < 0) {
//             break;
//         }
//         data.push_back(input);
//     }

//     // pisahkan bilangan genap dan ganjil
//     vector<int> genap, ganjil;
//     for (int num : data) {
//         if (num % 2 == 0) {
//             genap.push_back(num);
//         } else {
//             ganjil.push_back(num);
//         }
//     }

//     // tampilkan hasil
//     cout << "Data Array: ";
//     for (int num : data) {
//         cout << num << " ";
//     }
//     cout << endl;

//     cout << "Nomor Genap: ";
//     for (int num : genap) {
//         cout << num << ", ";
//     }
//     cout << endl;

//     cout << "Nomor Ganjil: ";
//     for (int num : ganjil) {
//         cout << num << ", ";
//     }
//     cout << endl;

//     return 0;
// }