// #include <stdio.h>
// #include <stdlib.h>

// // Struktur Node Doubly Linked List
// typedef struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// } Node;

// // Struktur Doubly Linked List
// typedef struct {
//     Node* head;
//     Node* tail;
// } DoublyLinkedList;

// // Fungsi untuk membuat node baru
// Node* createNode(int data) {
//     Node* newNode = (Node*) malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Memory error\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     newNode->prev = NULL;
//     return newNode;
// }

// // Fungsi untuk menambahkan elemen di akhir list
// void insertLast(DoublyLinkedList* list, int data) {
//     Node* newNode = createNode(data);
//     if (list->tail == NULL) {
//         list->head = newNode;
//         list->tail = newNode;
//     } else {
//         newNode->prev = list->tail;
//         list->tail->next = newNode;
//         list->tail = newNode;
//     }
// }

// // Fungsi untuk menampilkan elemen dalam list dari depan ke belakang
// void printListForward(DoublyLinkedList* list) {
//     Node* temp = list->head;
//     printf("Daftar elemen dari depan ke belakang: ");
//     while (temp != NULL) {
//         printf("%d", temp->data);
//         if (temp->next != NULL) {
//             printf(" <-> ");
//         }
//         temp = temp->next;
//     }
//     printf("\n");
// }

// // Fungsi untuk menampilkan elemen dalam list dari belakang ke depan
// void printListBackward(DoublyLinkedList* list) {
//     Node* temp = list->tail;
//     printf("Daftar elemen dari belakang ke depan: ");
//     while (temp != NULL) {
//         printf("%d", temp->data);
//         if (temp->prev != NULL) {
//             printf(" <-> ");
//         }
//         temp = temp->prev;
//     }
//     printf("\n");
// }

// int main() {
//     DoublyLinkedList list;
//     list.head = NULL;
//     list.tail = NULL;

//     int elemen;
//     // Menambahkan 4 elemen ke dalam list
//     for (int i = 0; i < 4; i++) {
//         printf("Input: Masukkan elemen ke-%d = ", i + 1);
//         scanf("%d", &elemen);
//         insertLast(&list, elemen);
//     }

//     // Menampilkan elemen dari depan ke belakang
//     printListForward(&list);
//     // Menampilkan elemen dari belakang ke depan
//     printListBackward(&list);

//     return 0;
// }