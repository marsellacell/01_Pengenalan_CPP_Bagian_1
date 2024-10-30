// #include <iostream>
// #include <stack>
// #include <string>
// #include <sstream>

// using namespace std;

// string reverseWords(string s) {
//     stringstream ss(s);
//     string word, reversed;

//     while (ss >> word) {
//         stack<char> st;
//         for (char c : word) {
//             st.push(c);
//         }
//         while (!st.empty()) {
//             reversed += st.top();
//             st.pop();
//         }
//         reversed += " ";
//     }

//     // Hapus spasi ekstra di akhir
//     reversed.pop_back();

//     return reversed;
// }

// int main() {
//     string kalimat;

//     cout << "Masukkan kalimat: ";
//     getline(cin, kalimat);

//     string hasil = reverseWords(kalimat);
//     cout << "Kalimat setelah dibalik: " << hasil << endl;

//     return 0;
// }