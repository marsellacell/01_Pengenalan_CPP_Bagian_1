#include <iostream>
#include <string>
using namespace std;

//struktutr mahasiswa 
struct Mahasiswa {
    string nama;
    string nim;
    char jenis_kelamin;
    float ipk;
};

typedef Mahasiswa infotype;
typedef struct ElmList *address;

struct ElmList{
    infotype info;
    address next; //pointer ke elemen berikutnya
}; 

struct List {
    address first; //Menyimpan pointer ke elemen head
};

void createList(List &L){
    L.first = nullptr; 
}
//membuat elemen node baru pada list
address allocate(infotype data ){
    address P =  new ElmList;
    P->info = data;
    P->next = nullptr;
    return P;
}

//Menambahkan elemen di awal 
void insertFirst(List &L, address P) {
    if(L.first == nullptr) {
        L.first = P;
    }else {
        P->next = L.first;
        L.first = P;
    }
}
//menabahkan elemen di akhir
void insertLast(List &L, address P) {
    if(L.first == nullptr) {
        L.first = P;
    }else {
        address Q = L.first;
        while (Q->next != nullptr){
            Q = Q->next;
        }
        Q->next =P;
    }
}

void insertAfter(address prec, address P){
    if (prec != nullptr) {
        P->next = prec->next;
        prec->next = P;
    }
}

//menambahkan elemen setelah elemen tertentu 
void printList(const List &L){
    address P = L.first;
    while (P != nullptr){
        cout <<"Nama : " <<P->info.nama <<endl;
        cout << "NIM : " <<P->info.nim <<endl;
        cout<<"L/P : " <<P->info.jenis_kelamin <<endl;
        cout <<"IPK : " <<P->info.ipk <<endl;
        cout <<endl;
        P = P->next;
    }
}

int main (){
    List L;
    createList(L);
    //membuat data mahasiswa
    infotype m1 = {"Adi", "01",'L',3.3};
    infotype m2 = {"Nopita", "02",'P',3.8};
    infotype m3 = {"Ghilank", "03",'L',3.8};
    infotype m4 = {"Sopiah", "04",'P',3.9};
    infotype m5 = {"Adi", "05",'L',3.6};
    infotype m6 = {"Dedi", "06",'L',3.7};
    infotype m7 = {"Dani", "07",'L',3.4};
    infotype m8 = {"Siti", "08",'P',3.3};


//alokasi elemen 
address p1 = allocate (m1);
address p2 = allocate (m2);
address p3 = allocate (m3);
address p4 = allocate (m4);
address p5 = allocate (m5);
address p6 = allocate (m6);
address p7 = allocate (m7);
address p8 = allocate (m8);

//memasukan elemen list 
insertFirst (L,p1);
insertLast (L,p2);
insertLast (L,p4);
insertAfter(p2,p3);
insertLast(L,p5);
insertLast(L,p6);
insertLast(L,p7);
insertLast(L,p8);

//cetak isi list 
cout << "Coba insert first last dan after\n" << endl;
printList(L);

return 0;
}