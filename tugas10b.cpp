
#include <iostream>
using namespace std;
int main(){
  struct penjualan{
  string kode,nama;
  int jumlah,harga;
  };

  int ukuran_awal,bonus;

  cout << "Masukkan Ukuran Array : ";
  cin >> ukuran_awal;
  cout << "Masukkan Keuntungan (%) : ";
  cin >> bonus;
  cout << "\n";

  const int ukuran = ukuran_awal;
  penjualan mahasiswa[ukuran];

  for (int i = 0; i < ukuran; i++){
    cout << "Masukkan Kode barang ke-"<< i << " : ";
    cin >> mahasiswa[i].kode;
    cout << "Masukkan Nama barang ke-" << i << " : ";
    cin >> mahasiswa[i].nama;
    cout << "Masukkan Jumlah barang ke-" << i << " : ";
    cin >> mahasiswa[i].jumlah;
    cout << "Masukkan Harga barang ke-" << i << " : ";
    cin >> mahasiswa[i].harga;
    cout << "\n";
  }

  int total = 0;
  for (int j= 0; j < ukuran; j++){

    int a;
    a = mahasiswa[j].jumlah * mahasiswa[j].harga;

   total += a;
  }
    cout << "Total Penjualan : " << total;
    bonus = total * bonus;
    bonus = bonus/100;
    cout << "\nKeuntungan yang diperoleh : " << bonus;
}
