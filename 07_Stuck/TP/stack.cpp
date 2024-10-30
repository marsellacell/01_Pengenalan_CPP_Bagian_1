// #include <iostream>
// #include "stack.h"
// using namespace std;

// void createStack(stack &S) {
//     S.Top = 0;
// }

// bool isEmpty(stack S) {
//     return (S.Top == 0);
// }

// bool isFull(stack S) {
//     return (S.Top == 15);
// }

// void push(stack &S, infotype x) {
//     if (!isFull(S)) {
//         S.Top = S.Top + 1;
//         S.info[S.Top] = x;
//     }
// }

// infotype pop(stack &S) {
//     infotype x = S.info[S.Top];
//     S.Top = S.Top - 1;
//     return x;
// }

// void printInfo(stack S) {
//     for (int i = S.Top; i >= 1; i--) {
//         cout << S.info[i] << " ";
//     }
//     cout << endl;
// }