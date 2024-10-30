// #include <iostream>
// #include <string>
// using namespace std;

// struct Mahasiswa {
//     string nama;
//     string nim;
//     float uts;
//     float uas;
//     float tugas;
//     float nilaiAkhir;
// };

// // fungsi untuk menghitung nilai akhir
// float hitungNilaiAkhir(float uts, float uas, float tugas) {
//     return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
// }

// int main() {
//     const int MAX_MAHASISWA = 10;
//     Mahasiswa mahasiswa[MAX_MAHASISWA];
//     int jumlahMahasiswa;

//     cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
//     cin >> jumlahMahasiswa;

//     if (jumlahMahasiswa > MAX_MAHASISWA) {
//         cout << "Jumlah mahasiswa melebihi batas maksimal!" << endl;
//         return 1;
//     }

//     for (int i = 0; i < jumlahMahasiswa; ++i) {
//         cout << "Masukkan data mahasiswa ke-" << (i + 1) << ":" << endl;
//         cout << "Nama: ";
//         cin >> mahasiswa[i].nama;
//         cout << "NIM: ";
//         cin >> mahasiswa[i].nim;
//         cout << "UTS: ";
//         cin >> mahasiswa[i].uts;
//         cout << "UAS: ";
//         cin >> mahasiswa[i].uas;
//         cout << "Tugas: ";
//         cin >> mahasiswa[i].tugas;

//         // hitung nilai akhir
//         mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
//     }

//     // tampilkan data mahasiswa
//     cout << "\nData Mahasiswa:" << endl;
//     for (int i = 0; i < jumlahMahasiswa; ++i) {
//         cout << "Mahasiswa ke-" << (i + 1) << ":" << endl;
//         cout << "Nama: " << mahasiswa[i].nama << endl;
//         cout << "NIM: " << mahasiswa[i].nim << endl;
//         cout << "UTS: " << mahasiswa[i].uts << endl;
//         cout << "UAS: " << mahasiswa[i].uas << endl;
//         cout << "Tugas: " << mahasiswa[i].tugas << endl;
//         cout << "Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl;
//     }

//     return 0;
// }