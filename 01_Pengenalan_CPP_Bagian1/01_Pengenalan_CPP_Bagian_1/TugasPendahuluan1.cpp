/*#include <iostream>

using namespace std;

int main(){
    string nama, nim;
    cout << "Siapa nama anda?";
    cin >> nama;
    cout << "Berapa nim anda? ";
    cin >> nim;
    cout << "Nama saya:" << nama << endl;
    cout << "Nim saya:" << nim << endl;

    return 0;
}*/

/*#include <iostream>

using namespace std;

int main(){
    int bil1 = 3, bil2 = 4, hasil1;
    float bil3 = 3.0, bil4 = 4.0, hasil2;
    hasil1 = bil1 + bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 - bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 * bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 / bil2; // integer division
    cout << hasil1 << endl;
    hasil1 = bil2 / bil1; // integer division
    cout << hasil1 << endl;
    hasil1 = bil1 % bil2; // modulo
    cout << hasil1 << endl;
    hasil1 = bil2 % bil1; // modulo
    cout << hasil1 << endl;
    hasil2 = bil3 / bil4;
    cout << hasil2 << endl;
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main(){
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2;
    cout << hasil << endl;
    hasil = bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 <= bil2;
    cout << hasil << endl;
    hasil = bil1 == bil2;
    cout << hasil << endl;
    hasil = bil1 != bil2;
    cout << hasil << endl;
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main(){
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 <= bil2 and bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2 or bil1 < bil2;
    cout << hasil << endl;
    hasil = not(bil1 >= bil2) or bil1 < bil2;
    cout << hasil << endl;
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main(){
    int nilai;
    cin >> nilai;
    if (nilai > 80){
        cout << "A" << endl;
    } else {
        cout << "Bukan A" << endl;
    }
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main(){
    int a, b, bilangan;
    cout << "Masukan batas bawah: ";
    cin >> a;
    cout << "Masukan batas atas: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++){
        cout << "Bilangan " << bilangan << endl;
    }
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main(){
    int bilangan, asli, jumlah;

    cout << "Masukan bilangan asli; ";
    cin >> asli;

    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli){
        if (bilangan % 2 == 0){
            jumlah += bilangan;
        }
        bilangan ++;
    }
    cout << "Jumlah bilangan genap:" <<jumlah << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> num1;
    cout << "Masukkan bilangan kedua: ";
    cin >> num2;

    // Melakukan operasi aritmatika
    float penjumlahan = num1 + num2;
    float pengurangan = num1 - num2;
    float perkalian = num1 * num2;
    float pembagian = num1 / num2;

    // Menampilkan hasil
    cout << "Hasil penjumlahan: " << penjumlahan << endl;
    cout << "Hasil pengurangan: " << pengurangan << endl;
    cout << "Hasil perkalian: " << perkalian << endl;
    cout << "Hasil pembagian: " << pembagian << endl;

    return 0;
}*/

/*#include <iostream>
#include <string>

using namespace std;

string satuan[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};
string belasan[] = {"Sepuluh", "Sebelas", "Dua Belas", "Tiga Belas", "Empat Belas", "Lima Belas", "Enam Belas", "Tujuh Belas", "Delapan Belas", "Sembilan Belas"};
string puluhan[] = {"", "", "Dua Puluh", "Tiga Puluh", "Empat Puluh", "Lima Puluh", "Enam Puluh", "Tujuh Puluh", "Delapan Puluh", "Sembilan Puluh"};

string terbilang(int angka) {
    string hasil;

    if (angka == 0) {
        return "Nol";
    } else if (angka < 10) {
        return satuan[angka];
    } else if (angka < 20) {
        return belasan[angka - 10];
    } else {
        hasil = puluhan[angka / 10];
        if (angka % 10 != 0) {
            hasil += " " + satuan[angka % 10];
        }
        return hasil;
    }
}

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        cout << angka << " : " << terbilang(angka) << endl;
    } else {
        cout << "Angka harus antara 0 dan 100." << endl;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan bilangan: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        // Cetak angka menurun
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        // Cetak tanda '*'
        cout << "*";

        // Cetak angka menaik
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        cout << endl;
    }

    // Cetak tanda '*' tambahan di baris terakhir
    cout << "*";

    return 0;
}*/
