// #include <iostream>
// using namespace std;

// const int maksimalQueue = 5; //maksimal antrian
// int front = 0; //penanda antrian
// int back = 0; //penanda
// string queueTeller[5]; //fungsi pengecekan

// bool isFull()
// { //pengecekan antrian penuh atau tidak
//     if (back == maksimalQueue)
//     {
//         return true; // =1
//     }
//     else
//     {
//         return false;
//     }
// }

// bool isEmpty()
// { //antrian nya kosong atau tidak
//     if (back == 0)
//     {
//         return true;
//     }
//     else 
//     {
//         return false;
//     }
// }

// void enqueueAntrian(string data)
// { // fungsi menambahkan antrian
//     if (isFull())
//     {
//         cout << "Antrian penuh" << endl;
//     }
//     else 
//     {
//         if (isEmpty())
//         { // kondisi ketika queue kosong
//             queueTeller[0] = data;
//             front++;
//             back++;
//         }
//         else
//         {
//             queueTeller[back] = data;
//             back++;
//         }
//     }
// }

// void dequeueAntrian()
// { // fungsi mengurangi antrian
//     if (isEmpty())
//     {
//         cout << "Antrian kosong" << endl;
//     }
//     else
//     {
//         for (int i = 0; i < back -1; i++) //pindahkan elemen ke depan
//         {
//             queueTeller[i] = queueTeller[i + 1];
//         }
//         queueTeller[back - 1] = ""; //kosongkan elemen terakhir
//         back--;
//     }
// }

// int countQueue()
// { //fungsi menghitung banyak antrian
//     return back;
// }

// void clearQueue()
// { //fungsi menghapus semua antrian
//     if (isEmpty())
//     {
//         cout << "Antrian kosong" << endl;
//     }
//     else 
//     {
//         for (int i = 0; i < back; i++)
//         {
//             queueTeller[i] = "";
//         }
//         back = 0;
//         front = 0;
//     }
// }

// void viewQueue()
// { //fungsi melihat antrian
//     cout << "Data antrian teller:" << endl;
//     for (int i = 0; i < maksimalQueue; i++)
//     {
//         if (queueTeller[i] != "")
//         {
//             cout << i + 1 <<". " << queueTeller[i] << endl;
//         }
//         else
//         {
//             cout << i + 1 << ". (kosong)" << endl;
//         }
//     }
// }

// int main()
// {
//     enqueueAntrian("Andi");
//     enqueueAntrian("Maya");
//     viewQueue();
//     cout << "Jumlah antrian = " << countQueue() << endl;
//     dequeueAntrian();
//     viewQueue(); 
//     cout << "Jumlah antrian = " << countQueue() << endl;
//     clearQueue();
//     viewQueue();
//     cout << "Jumlah antrian = " << countQueue() << endl;
//     return 0;
// }