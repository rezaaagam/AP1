#include <iostream>

using namespace std;

int main() {
    int bilangan;

    // Meminta pengguna memasukkan bilangan bulat
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    // Memeriksa apakah bilangan tersebut genap atau ganjil
    if (bilangan % 2 == 0) {
        cout << "Bilangan genap" << endl;
    } else {
        cout << "Bilangan ganjil" << endl;
    }

    return 0;
}
