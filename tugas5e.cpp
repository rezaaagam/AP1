#include <iostream>
using namespace std;

int main() {
    int n = 26; // Jumlah huruf dalam alfabet
    char startChar = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << static_cast<char>(startChar + i + j) << " ";
        }
        cout << endl;
    }

    return 0;
}