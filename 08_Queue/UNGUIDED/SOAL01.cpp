// #include <iostream>
// #include <string>

// struct Node {
//     std::string data;
//     Node* next;
// };

// class Queue {
// private:
//     Node* front;
//     Node* back;
//     int count;

// public:
//     Queue() : front(nullptr), back(nullptr), count(0) {}

//     bool isFull() const {
//         return false;
//     }

//     bool isEmpty() const {
//         return front == nullptr;
//     }

//     void enqueue(const std::string& data) {
//         Node* newNode = new Node{data, nullptr};
//         if (isEmpty()) {
//             front = back = newNode;
//         } else {
//             back->next = newNode;
//             back = newNode;
//         }
//         count++;
//         std::cout << "Enqueued: " << data << std::endl;
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             std::cout << "Queue is empty" << std::endl;
//         } else {
//             Node* temp = front;
//             front = front->next;
//             std::cout << "Dequeued: " << temp->data << std::endl;
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
//         Node* current = front;
//         std::cout << "Queue contents:" << std::endl;
//         int position = 1;
//         while (current != nullptr) {
//             std::cout << position++ << ". " << current->data << std::endl;
//             current = current->next;
//         }
//     }
// };

// int main() {
//     Queue queue;
//     queue.enqueue("Andi");
//     queue.enqueue("Maya");
//     queue.display();
//     std::cout << "Queue size = " << queue.size() << std::endl;
//     queue.dequeue();
//     queue.display();
//     std::cout << "Queue size = " << queue.size() << std::endl;
//     queue.clear();
//     queue.display();
//     std::cout << "Queue size = " << queue.size() << std::endl;
//     return 0;
// }