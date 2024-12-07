#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan data proyek
struct Project {
    string name;
    int duration;
    Project* next;

    Project(string projectName, int projectDuration) {
        name = projectName;
        duration = projectDuration;
        next = nullptr;
    }
};

// Struktur untuk menyimpan data pegawai
struct Employee {
    string name;
    string id;
    Project* projectHead;
    Employee* next;

    Employee(string employeeName, string employeeID) {
        name = employeeName;
        id = employeeID;
        projectHead = nullptr;
        next = nullptr;
    }
};

// Kelas Multi Linked List
class MultiLinkedList {
private:
    Employee* head;

public:
    MultiLinkedList() {
        head = nullptr;
    }

    // Menambahkan pegawai baru
    void addEmployee(string name, string id) {
        Employee* newEmployee = new Employee(name, id);
        if (!head) {
            head = newEmployee;
        } else {
            Employee* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newEmployee;
        }
    }

    // Menambahkan proyek ke pegawai
    void addProjectToEmployee(string employeeID, string projectName, int duration) {
        Employee* temp = head;
        while (temp) {
            if (temp->id == employeeID) {
                Project* newProject = new Project(projectName, duration);
                if (!temp->projectHead) {
                    temp->projectHead = newProject;
                } else {
                    Project* projTemp = temp->projectHead;
                    while (projTemp->next) {
                        projTemp = projTemp->next;
                    }
                    projTemp->next = newProject;
                }
                return;
            }
            temp = temp->next;
        }
        cout << "Pegawai dengan ID " << employeeID << " tidak ditemukan.\n";
    }

    // Menampilkan data pegawai dan proyek mereka
    void display() {
        Employee* temp = head;
        while (temp) {
            cout << "Pegawai: " << temp->name << " (ID: " << temp->id << ")\n";
            Project* projTemp = temp->projectHead;
            while (projTemp) {
                cout << "  - Proyek: " << projTemp->name << " (" << projTemp->duration << " bulan)\n";
                projTemp = projTemp->next;
            }
            temp = temp->next;
            cout << endl;
        }
    }
};

int main() {
    MultiLinkedList company;

    // 1. Menambahkan data pegawai
    company.addEmployee("Andi", "P001");
    company.addEmployee("Budi", "P002");
    company.addEmployee("Citra", "P003");

    // 2. Menambahkan proyek ke pegawai
    company.addProjectToEmployee("P001", "Aplikasi Mobile", 12);
    company.addProjectToEmployee("P002", "Sistem Akuntansi", 8);
    company.addProjectToEmployee("P003", "E-commerce", 10);

    cout << "Data pegawai dan proyek sebelum menambahkan proyek baru untuk Andi:\n";
    company.display();

    // 3. Menambahkan proyek baru untuk Andi
    company.addProjectToEmployee("P001", "Analisis Data", 6);

    cout << "Data pegawai dan proyek setelah menambahkan proyek baru untuk Andi:\n";
    company.display();

    return 0;
}