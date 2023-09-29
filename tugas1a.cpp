#include <iostream>
#include <vector>

using namespace std;

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Deklarasi vektor untuk menyimpan nilai-nilai
    vector<double> nilaiTugas(jumlahMahasiswa);
    vector<double> nilaiUTS(jumlahMahasiswa);
    vector<double> nilaiUAS(jumlahMahasiswa);
    vector<double> nilaiAkhir(jumlahMahasiswa);

    // Memasukkan data nilai untuk setiap mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan nilai tugas mahasiswa ke-" << i + 1 << ": ";
        cin >> nilaiTugas[i];

        cout << "Masukkan nilai UTS mahasiswa ke-" << i + 1 << ": ";
        cin >> nilaiUTS[i];

        cout << "Masukkan nilai UAS mahasiswa ke-" << i + 1 << ": ";
        cin >> nilaiUAS[i];

        // Menghitung nilai akhir (rata-rata)
        nilaiAkhir[i] = (nilaiTugas[i] + nilaiUTS[i] + nilaiUAS[i]) / 3.0;
    }

    // Menampilkan semua data nilai dan nilai akhirnya
    cout << "Data Nilai Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke-" << i + 1 << " - Tugas: " << nilaiTugas[i]
             << " UTS: " << nilaiUTS[i] << " UAS: " << nilaiUAS[i]
             << " Nilai Akhir: " << nilaiAkhir[i] << endl;
    }

    return 0;
}
