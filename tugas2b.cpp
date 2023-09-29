#include <iostream>

using namespace std;

int main() {
    int bilangan1, bilangan2, bilangan3;

    // Meminta pengguna memasukkan tiga bilangan bulat positif
    cout << "Masukkan bilangan bulat positif pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan bulat positif kedua: ";
    cin >> bilangan2;

    cout << "Masukkan bilangan bulat positif ketiga: ";
    cin >> bilangan3;

    // Menentukan bilangan maksimal
    int maksimal = bilangan1; // Anggap bilangan pertama sebagai maksimal awal

    if (bilangan2 > maksimal) {
        maksimal = bilangan2; // Perbarui maksimal jika bilangan kedua lebih besar
    }

    if (bilangan3 > maksimal) {
        maksimal = bilangan3; // Perbarui maksimal jika bilangan ketiga lebih besar
    }

    // Menampilkan bilangan maksimal
    cout << "Bilangan yang paling maksimal adalah: " << maksimal << endl;

    return 0;
}
