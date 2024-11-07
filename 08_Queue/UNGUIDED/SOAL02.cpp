// #include <iostream>
// #include <string>

// struct Mahasiswa {
//     std::string nama;
//     std::string nim;
//     Mahasiswa* next;
// };

// class Queue {
// private:
//     Mahasiswa* front;
//     Mahasiswa* back;
//     int count;

// public:
//     Queue() : front(nullptr), back(nullptr), count(0) {}

//     bool isFull() const {
//         return false; 
//     }

//     bool isEmpty() const {
//         return front == nullptr;
//     }

//     void enqueue(const std::string& nama, const std::string& nim) {
//         Mahasiswa* newMahasiswa = new Mahasiswa{nama, nim, nullptr};
//         if (isEmpty()) {
//             front = back = newMahasiswa;
//         } else {
//             back->next = newMahasiswa;
//             back = newMahasiswa;
//         }
//         count++;
//         std::cout << "Enqueued: " << nama << " (" << nim << ")" << std::endl;
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             std::cout << "Queue is empty" << std::endl;
//         } else {
//             Mahasiswa* temp = front;
//             front = front->next;
//             std::cout << "Dequeued: " << temp->nama << " (" << temp->nim << ")" << std::endl;
//             delete temp;
//             count--;
//             if (isEmpty()) {
//                 back = nullptr;
//             }
//         }
//     }

//     int size() const {
//         return count;
//     }

//     void clear() {
//         while (!isEmpty()) {
//             dequeue();
//         }
//     }

//     void display() const {
//         Mahasiswa* current = front;
//         std::cout << "Queue contents:" << std::endl;
//         int position = 1;
//         while (current != nullptr) {
//             std::cout << position++ << ". " << current->nama << " (" << current->nim << ")" << std::endl;
//             current = current->next;
//         }
//     }
// };

// int main() {
//     Queue queue;
//     int choice;
//     std::string nama, nim;

//     do {
//         std::cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Clear\n5. Exit\n";
//         std::cout << "Enter your choice: ";
//         std::cin >> choice;

//         switch (choice) {
//             case 1:
//                 std::cout << "Enter Nama Mahasiswa: ";
//                 std::cin.ignore(); // To ignore the newline character left by std::cin
//                 std::getline(std::cin, nama);
//                 std::cout << "Enter NIM Mahasiswa: ";
//                 std::getline(std::cin, nim);
//                 queue.enqueue(nama, nim);
//                 break;
//             case 2:
//                 queue.dequeue();
//                 break;
//             case 3:
//                 queue.display();
//                 break;
//             case 4:
//                 queue.clear();
//                 break;
//             case 5:
//                 std::cout << "Exiting...\n";
//                 break;
//             default:
//                 std::cout << "Invalid choice, please try again.\n";
//         }
//     } while (choice != 5);

//     return 0;
// }