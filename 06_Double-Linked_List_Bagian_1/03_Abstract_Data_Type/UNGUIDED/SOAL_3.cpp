// #include <stdio.h>

// // Function to display a 2D integer array
// void displayArray(int arr[3][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// // Function to swap two elements in a 2D integer array
// void swapArrayElements(int arr1[3][3], int arr2[3][3], int row, int col) {
//     int temp = arr1[row][col];
//     arr1[row][col] = arr2[row][col];
//     arr2[row][col] = temp;
// }

// // Function to swap the values of two integer pointers
// void swapPointers(int* p1, int* p2) {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// int main() {
//     // Initialize two 2D integer arrays
//     int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

//     // Initialize two integer pointers
//     int a = 20;
//     int b = 30;
//     int* p1 = &a;
//     int* p2 = &b;

//     // Display the initial arrays and pointers
//     printf("Initial arrays:\n");
//     displayArray(arr1);
//     displayArray(arr2);
//     printf("Initial pointers: p1 = %d, p2 = %d\n", *p1, *p2);

//     // Swap elements in the arrays
//     swapArrayElements(arr1, arr2, 1, 1);
//     printf("Arrays after swapping elements:\n");
//     displayArray(arr1);
//     displayArray(arr2);

//     // Swap the values of the pointers
//     swapPointers(p1, p2);
//     printf("Pointers after swapping: p1 = %d, p2 = %d\n", *p1, *p2);

//     return 0;
// }