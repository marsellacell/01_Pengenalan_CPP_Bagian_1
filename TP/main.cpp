// #include <iostream>
// #include "stack.h"
// using namespace std;

// int main() {
//     stack S;
//     createStack(S);
    
//     // Ganti angka terakhir NIM Anda di sini
//     int nimLastDigit = 0; // Misalnya NIM berakhiran 0
    
//     switch (nimLastDigit % 4) {
//         case 0:
//             // I F L A B J A Y A
//             push(S, 'A');
//             push(S, 'Y');
//             push(S, 'A');
//             push(S, 'J');
//             push(S, 'B');
//             push(S, 'A');
//             push(S, 'L');
//             push(S, 'F');
//             push(S, 'I');
            
//             // Print initial stack
//             printInfo(S);
            
//             // Pop until "JAYA" remains
//             while (S.Top > 4) {
//                 pop(S);
//             }
            
//             // Print final stack
//             printInfo(S);
//             break;
            
//         case 1:
//             // H A L O B A N D U N G
//             push(S, 'H');
//             push(S, 'A');
//             push(S, 'L');
//             push(S, 'O');
//             push(S, 'B');
//             push(S, 'A');
//             push(S, 'N');
//             push(S, 'D');
//             push(S, 'U');
//             push(S, 'N');
//             push(S, 'G');
            
//             // Print initial stack
//             printInfo(S);
            
//             // Pop until "BANDUNG" remains
//             while (S.Top > 7) {
//                 pop(S);
//             }
            
//             // Print final stack
//             printInfo(S);
//             break;
            
//         case 2:
//             // P E R C A Y A D I R I
//             push(S, 'P');
//             push(S, 'E');
//             push(S, 'R');
//             push(S, 'C');
//             push(S, 'A');
//             push(S, 'Y');
//             push(S, 'A');
//             push(S, 'D');
//             push(S, 'I');
//             push(S, 'R');
//             push(S, 'I');
            
//             // Print initial stack
//             printInfo(S);
            
//             // Pop until "DIRI" remains
//             while (S.Top > 4) {
//                 pop(S);
//             }
            
//             // Print final stack
//             printInfo(S);
//             break;
            
//         case 3:
//             // S T R U K T U R D A T A
//             push(S, 'S');
//             push(S, 'T');
//             push(S, 'R');
//             push(S, 'U');
//             push(S, 'K');
//             push(S, 'T');
//             push(S, 'U');
//             push(S, 'R');
//             push(S, 'D');
//             push(S, 'A');
//             push(S, 'T');
//             push(S, 'A');
            
//             // Print initial stack
//             printInfo(S);
            
//             // Pop until "DATA" remains
//             while (S.Top > 4) {
//                 pop(S);
//             }
            
//             // Print final stack
//             printInfo(S);
//             break;
//     }
    
//     return 0;
// }