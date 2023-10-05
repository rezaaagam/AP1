#include <iostream>
using namespace std;

int main() {
    double panjang_kertas, lebar_kertas;
    double margin_atas, margin_bawah, margin_kiri, margin_kanan;
    double ukuran_titik;
    char spasi;
    
    // Meminta input dari pengguna
    cout << "Masukkan panjang kertas (inci): ";
    cin >> panjang_kertas;
    cout << "Masukkan lebar kertas (inci): ";
    cin >> lebar_kertas;
    cout << "Masukkan margin atas (inci): ";
    cin >> margin_atas;
    cout << "Masukkan margin bawah (inci): ";
    cin >> margin_bawah;
    cout << "Masukkan margin kiri (inci): ";
    cin >> margin_kiri;
    cout << "Masukkan margin kanan (inci): ";
    cin >> margin_kanan;
    cout << "Masukkan ukuran titik suatu garis (inci): ";
    cin >> ukuran_titik;
    cout << "Jika garisnya diberi spasi ganda (Y/N): ";
    cin >> spasi;
    
    // Menghitung lebar efektif
    double lebar_efektif = lebar_kertas - margin_kiri - margin_kanan;
    
    // Menghitung jumlah karakter dalam satu baris
    int karakter_per_baris = static_cast<int>(lebar_efektif / ukuran_titik);
    
    // Menggandakan ukuran titik jika spasi ganda
    if (spasi == 'Y' || spasi == 'y') {
        karakter_per_baris *= 2;
    }
    
    // Menghitung jumlah baris yang dapat dicetak
    double tinggi_efektif = panjang_kertas - margin_atas - margin_bawah;
    int jumlah_baris = static_cast<int>(tinggi_efektif / ukuran_titik);
    
    // Menampilkan hasil
    cout << "Jumlah karakter dalam satu baris: " << karakter_per_baris << endl;
    cout << "Jumlah baris yang dapat dicetak: " << jumlah_baris << endl;
    
    return 0;
}
