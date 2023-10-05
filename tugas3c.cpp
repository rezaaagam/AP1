#include <iostream>
#include <map>
using namespace std;

int main() {
    // Membuat peta (dictionary) yang menyimpan informasi bonus berdasarkan tipe rumah
    map<string, int> bonus_per_rumah;
    bonus_per_rumah["45 > 5"] = 500000;
    bonus_per_rumah["45 5 - 1"] = 250000;
    bonus_per_rumah["54 > 5"] = 1000000;
    bonus_per_rumah["54 5 - 1"] = 500000;
    bonus_per_rumah["70 > 5"] = 1250000;
    bonus_per_rumah["70 5 - 1"] = 1000000;

    string nama_karyawan;
    cout << "Masukkan nama karyawan: ";
    cin >> nama_karyawan;

    int total_bonus = 0;
    int jumlah_penjualan;

    // Meminta input jumlah penjualan rumah tipe 45
    cout << "Masukkan jumlah penjualan rumah tipe 45: ";
    cin >> jumlah_penjualan;

    if (jumlah_penjualan > 5) {
        total_bonus += bonus_per_rumah["45 > 5"] * jumlah_penjualan;
    } else if (jumlah_penjualan >= 1) {
        total_bonus += bonus_per_rumah["45 5 - 1"] * jumlah_penjualan;
    }

    // Meminta input jumlah penjualan rumah tipe 54
    cout << "Masukkan jumlah penjualan rumah tipe 54: ";
    cin >> jumlah_penjualan;

    if (jumlah_penjualan > 5) {
        total_bonus += bonus_per_rumah["54 > 5"] * jumlah_penjualan;
    } else if (jumlah_penjualan >= 1) {
        total_bonus += bonus_per_rumah["54 5 - 1"] * jumlah_penjualan;
    }

    // Meminta input jumlah penjualan rumah tipe 70
    cout << "Masukkan jumlah penjualan rumah tipe 70: ";
    cin >> jumlah_penjualan;

    if (jumlah_penjualan > 5) {
        total_bonus += bonus_per_rumah["70 > 5"] * jumlah_penjualan;
    } else if (jumlah_penjualan >= 1) {
        total_bonus += bonus_per_rumah["70 5 - 1"] * jumlah_penjualan;
    }

    // Menampilkan total bonus yang diterima karyawan
    cout << "Total Bonus yang diterima " << nama_karyawan << " = Rp. " << total_bonus << endl;

    return 0;
}
