// #include <iostream>
// #include <stack>
// #include <cctype> // Untuk mengabaikan spasi dan mengubah huruf menjadi lowercase

// using namespace std;

// bool isPalindrome(string str) {
//     stack<char> s;
//     int n = str.length();

//     // Push karakter ke stack, abaikan spasi dan ubah ke lowercase
//     for (int i = 0; i < n; i++) {
//         if (isalpha(str[i])) {
//             s.push(tolower(str[i]));
//         }
//     }

//     // Pop karakter dari stack dan bandingkan
//     int i = 0;
//     while (!s.empty()) {
//         if (s.top() != tolower(str[i])) {
//             return false;
//         }
//         s.pop();
//         i++;
//     }

//     return true;
// }

// int main() {
//     string kalimat;

//     cout << "Masukkan kalimat: ";
//     getline(cin, kalimat);

//     if (isPalindrome(kalimat)) {
//         cout << "Kalimat tersebut adalah palindrom" << endl;
//     } else {
//         cout << "Kalimat tersebut bukan palindrom" << endl;
//     }

//     return 0;
// }