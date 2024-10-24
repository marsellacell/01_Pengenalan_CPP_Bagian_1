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

// // Fungsi untuk menambahkan elemen di awal list
// void insertFirst(DoublyLinkedList* list, int data) {
//     Node* newNode = createNode(data);
//     if (list->head == NULL) {
//         list->head = newNode;
//         list->tail = newNode;
//     } else {
//         newNode->next = list->head;
//         list->head->prev = newNode;
//         list->head = newNode;
//     }
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
// void printList(DoublyLinkedList* list) {
//     Node* temp = list->head;
//     printf("DAFTAR ANGGOTA LIST: ");
//     while (temp != NULL) {
//         printf("%d", temp->data);
//         if (temp->next != NULL) {
//             printf(" <-> ");
//         }
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main() {
//     DoublyLinkedList list;
//     list.head = NULL;
//     list.tail = NULL;

//     int elemen1, elemen2, elemen3;
//     printf("Input: Masukkan elemen pertama = ");
//     scanf("%d", &elemen1);
//     insertLast(&list, elemen1);

//     printf("Input: Masukkan elemen kedua di awal = ");
//     scanf("%d", &elemen2);
//     insertFirst(&list, elemen2);

//     printf("Input: Masukkan elemen ketiga di akhir = ");
//     scanf("%d", &elemen3);
//     insertLast(&list, elemen3);

//     printList(&list);

//     return 0;
// }