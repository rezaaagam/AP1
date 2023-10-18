#include <iostream>
using namespace std;

int main() {
    const int n = 10; // Jumlah data yang akan dimasukkan
    int data[n];
    int sum = 0;
    int min_value, max_value;

    // Meminta pengguna memasukkan sepuluh data
    for (int i = 0; i < n; i++) {
        cout << "Masukkan bilangan " << i + 1 << " : ";
        cin >> data[i];

        // Menginisialisasi min_value dan max_value dengan data pertama
        if (i == 0) {
            min_value = data[i];
            max_value = data[i];
        }

        // Menghitung jumlah data
        sum += data[i];

        // Mencari nilai terkecil
        if (data[i] < min_value) {
            min_value = data[i];
        }

        // Mencari nilai terbesar
        if (data[i] > max_value) {
            max_value = data[i];
        }
    }

    // Menghitung nilai rata-rata
    double average = static_cast<double>(sum) / n;

    // Menampilkan hasil
    cout << "=====================" << endl;
    cout << "Nilai Rata-rata = " << average << endl;
    cout << "Nilai Terkecil = " << min_value << endl;
    cout << "Nilai Terbesar = " << max_value << endl;

    return 0;
}
