#include <iostream>
using namespace std;

int main() {
    const double harga_kamar = 100.0;  // Harga sewa satu kamar per malam (konstan)
    const int diskon_10_kamar = 10;    // Diskon 10% untuk memesan 10 kamar
    const int diskon_20_kamar = 20;    // Diskon 20% untuk memesan 20 kamar
    const int diskon_30_kamar = 30;    // Diskon 30% untuk memesan 30 kamar
    const double diskon_durasi = 0.05; // Diskon tambahan 5% untuk durasi minimal 3 hari

    int jumlah_kamar, durasi;
    double biaya_total, diskon, jumlah_tagihan, pajak_penjualan;

    // Meminta input dari pengguna
    cout << "Masukkan biaya sewa satu kamar per malam: $";
    cin >> harga_kamar;
    cout << "Masukkan jumlah kamar yang dipesan: ";
    cin >> jumlah_kamar;
    cout << "Masukkan durasi pemesanan (malam): ";
    cin >> durasi;
    cout << "Masukkan pajak penjualan (persen): ";
    cin >> pajak_penjualan;

    // Menghitung biaya total sebelum diskon
    biaya_total = harga_kamar * jumlah_kamar * durasi;

    // Menghitung diskon berdasarkan jumlah kamar yang dipesan
    if (jumlah_kamar >= 30) {
        diskon = (diskon_30_kamar / 100.0) * biaya_total;
    } else if (jumlah_kamar >= 20) {
        diskon = (diskon_20_kamar / 100.0) * biaya_total;
    } else if (jumlah_kamar >= 10) {
        diskon = (diskon_10_kamar / 100.0) * biaya_total;
    } else {
        diskon = 0.0;  // Tidak ada diskon jika kurang dari 10 kamar
    }

    // Menghitung diskon tambahan berdasarkan durasi
    if (durasi >= 3) {
        diskon += (diskon_durasi / 100.0) * biaya_total;
    }

    // Menghitung pajak penjualan
    pajak_penjualan = (pajak_penjualan / 100) * biaya_total;

    // Menghitung jumlah tagihan akhir
    jumlah_tagihan = biaya_total - diskon + pajak_penjualan;

    // Menampilkan hasil
    cout << "Biaya sewa satu kamar per malam: $" << harga_kamar << endl;
    cout << "Diskon untuk " << jumlah_kamar << " kamar: " << (diskon * 100) << "%" << endl;
    cout << "Jumlah kamar yang dipesan: " << jumlah_kamar << endl;
    cout << "Durasi pemesanan (malam): " << durasi << endl;
    cout << "Biaya total kamar: $" << biaya_total << endl;
    cout << "Pajak penjualan (" << pajak_penjualan << "%): $" << pajak_penjualan << endl;
    cout << "Jumlah tagihan: $" << jumlah_tagihan << endl;

    return 0;
}
