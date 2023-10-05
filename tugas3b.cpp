#include <iostream>
using namespace std;

int main() {
    double nilai_tes, nilai_uts, nilai_uas, nilai_tugas;
    double nilai_akhir;
    char indeks_nilai;

    // Membaca input dari pengguna
    cout << "Masukkan nilai tes: ";
    cin >> nilai_tes;
    cout << "Masukkan nilai UTS: ";
    cin >> nilai_uts;
    cout << "Masukkan nilai UAS: ";
    cin >> nilai_uas;
    cout << "Masukkan nilai Tugas: ";
    cin >> nilai_tugas;

    // Menghitung nilai akhir
    nilai_akhir = 0.20 * nilai_tes + 0.30 * nilai_uts + 0.30 * nilai_uas + 0.20 * nilai_tugas;

    // Mengonversi nilai akhir menjadi indeks nilai
    if (nilai_akhir <= 50) {
        indeks_nilai = 'D';
    } else if (nilai_akhir <= 70) {
        indeks_nilai = 'C';
    } else if (nilai_akhir <= 80) {
        indeks_nilai = 'B';
    } else {
        indeks_nilai = 'A';
    }

    // Menampilkan nilai akhir dan indeks nilai
    cout << "Nilai Akhir: " << nilai_akhir << endl;
    cout << "Indeks Nilai: " << indeks_nilai << endl;

    return 0;
}
