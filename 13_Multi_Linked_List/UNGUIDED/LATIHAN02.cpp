#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan data buku
struct Book {
    string title;
    string returnDate;
    Book* next;

    Book(string bookTitle, string bookReturnDate) {
        title = bookTitle;
        returnDate = bookReturnDate;
        next = nullptr;
    }
};

// Struktur untuk menyimpan data anggota
struct Member {
    string name;
    string id;
    Book* bookHead;
    Member* next;

    Member(string memberName, string memberID) {
        name = memberName;
        id = memberID;
        bookHead = nullptr;
        next = nullptr;
    }
};

// Kelas Multi Linked List
class Library {
private:
    Member* head;

public:
    Library() {
        head = nullptr;
    }

    // Menambahkan anggota baru
    void addMember(string name, string id) {
        Member* newMember = new Member(name, id);
        if (!head) {
            head = newMember;
        } else {
            Member* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newMember;
        }
        cout << "Anggota " << name << " berhasil ditambahkan dengan ID: " << id << ".\n";
    }

    // Menambahkan buku yang dipinjam anggota
    void addBookToMember(string memberID, string bookTitle, string returnDate) {
        Member* temp = head;
        while (temp) {
            if (temp->id == memberID) {
                Book* newBook = new Book(bookTitle, returnDate);
                if (!temp->bookHead) {
                    temp->bookHead = newBook;
                } else {
                    Book* bookTemp = temp->bookHead;
                    while (bookTemp->next) {
                        bookTemp = bookTemp->next;
                    }
                    bookTemp->next = newBook;
                }
                cout << "Buku \"" << bookTitle << "\" berhasil ditambahkan untuk anggota ID: " << memberID << ".\n";
                return;
            }
            temp = temp->next;
        }
        cout << "Anggota dengan ID " << memberID << " tidak ditemukan.\n";
    }

    // Menghapus anggota dan buku yang dipinjam
    void removeMember(string memberID) {
    Member* temp = head;
    Member* prev = nullptr;

    while (temp) {
        if (temp->id == memberID) {
            if (prev) {
                prev->next = temp->next; // Menyambungkan node sebelum dan sesudah node yang dihapus
            } else {
                head = temp->next; // Jika anggota yang dihapus adalah kepala linked list
            }

            // Hapus semua buku yang dipinjam
            Book* bookTemp = temp->bookHead;
            while (bookTemp) {
                Book* toDelete = bookTemp;
                bookTemp = bookTemp->next;
                delete toDelete;
            }
            delete temp; // Menghapus anggota
            cout << "Anggota dengan ID " << memberID << " telah dihapus.\n";
            return;
        }
        prev = temp; // Menyimpan pointer ke anggota sebelumnya
        temp = temp->next; // Beralih ke anggota berikutnya
    }
    cout << "Anggota dengan ID " << memberID << " tidak ditemukan.\n";
}

    // Menampilkan data anggota dan buku yang dipinjam
    void display() {
    Member* temp = head;
    while (temp) { // Iterasi hanya dilakukan selama temp tidak null
        cout << "Anggota: " << temp->name << " (ID: " << temp->id << ")\n";
        Book* bookTemp = temp->bookHead;
        while (bookTemp) { // Menampilkan semua buku yang dipinjam oleh anggota
            cout << "  - Buku: " << bookTemp->title << ", Pengembalian: " << bookTemp->returnDate << "\n";
            bookTemp = bookTemp->next; // Beralih ke buku berikutnya
        }
        temp = temp->next; // Beralih ke anggota berikutnya
        cout << endl;
    }
}


    // Menampilkan menu
    void showMenu() {
        cout << "=== Sistem Manajemen Buku Perpustakaan ===\n";
        cout << "1. Tambah Anggota\n";
        cout << "2. Tambah Buku yang Dipinjam\n";
        cout << "3. Tambahkan Buku Baru (Untuk Anggota Tertentu)\n";
        cout << "4. Hapus Anggota\n";
        cout << "5. Tampilkan Data Anggota dan Buku\n";
        cout << "6. Keluar\n";
        cout << "Pilih opsi: ";
    }

    // Fungsi untuk menambahkan buku baru otomatis (contoh untuk Rani)
    void addDefaultBookToRani() {
        addBookToMember("A001", "Struktur Data", "10/12/2024");
    }
};

int main() {
    Library library;
    int choice;
    string name, id, title, returnDate;

    // Data awal untuk pengujian
    library.addMember("Rani", "A001");
    library.addMember("Dito", "A002");
    library.addMember("Vina", "A003");

    library.addBookToMember("A001", "Pemrograman C++", "01/12/2024");
    library.addBookToMember("A002", "Algoritma Pemrograman", "15/12/2024");

    while (true) {
        library.showMenu();
        cin >> choice;
        cin.ignore(); // Untuk membersihkan newline karakter setelah memasukkan angka

        switch (choice) {
            case 1: // Tambah Anggota
                cout << "Masukkan nama anggota: ";
                getline(cin, name);
                cout << "Masukkan ID anggota: ";
                getline(cin, id);
                library.addMember(name, id);
                break;

            case 2: // Tambah Buku yang Dipinjam
                cout << "Masukkan ID anggota: ";
                getline(cin, id);
                cout << "Masukkan judul buku: ";
                getline(cin, title);
                cout << "Masukkan tanggal pengembalian (dd/mm/yyyy): ";
                getline(cin, returnDate);
                library.addBookToMember(id, title, returnDate);
                break;

            case 3: // Tambahkan Buku Baru (contoh untuk Rani)
                cout << "Menambahkan buku 'Struktur Data' untuk Rani (ID: A001)...\n";
                library.addDefaultBookToRani();
                break;

            case 4: // Hapus Anggota
                cout << "Masukkan ID anggota yang ingin dihapus: ";
                getline(cin, id);
                library.removeMember(id);
                break;

            case 5: // Tampilkan Data Anggota dan Buku
                library.display();
                break;

            case 6: // Keluar
                cout << "Terima kasih! Program selesai.\n";
                return 0;

            default:
                cout << "Opsi tidak valid. Silakan pilih lagi.\n";
        }
    }

    return 0;
}
