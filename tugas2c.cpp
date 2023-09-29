#include <iostream>

using namespace std;

int main() {
    double operan1, operan2;
    char operatorMatematika;

    // Meminta pengguna memasukkan dua angka operan dan operator
    cout << "Masukkan operan pertama: ";
    cin >> operan1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operatorMatematika;

    cout << "Masukkan operan kedua: ";
    cin >> operan2;

    double hasil;

    // Melakukan operasi matematika berdasarkan operator
    switch (operatorMatematika) {
        case '+':
            hasil = operan1 + operan2;
            break;
        case '-':
            hasil = operan1 - operan2;
            break;
        case '*':
            hasil = operan1 * operan2;
            break;
        case '/':
            if (operan2 != 0) {
                hasil = operan1 / operan2;
            } else {
                cout << "Pembagian dengan nol tidak diizinkan." << endl;
                return 1; // Keluar program dengan kode kesalahan
            }
            break;
        default:
            cout << "Operator tidak valid." << endl;
            return 1; // Keluar program dengan kode kesalahan
    }

    // Menampilkan nilai operan, operator, dan hasil operasi
    cout << "Operan pertama: " << operan1 << endl;
    cout << "Operator: " << operatorMatematika << endl;
    cout << "Operan kedua: " << operan2 << endl;
    cout << "Hasil: " << hasil << endl;

    return 0;
}
