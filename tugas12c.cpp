#include <iostream>
using namespace std;

// Anda diminta untuk membuat perhitungan pembayaran penggunaan Listrik di rumah,
// dengan ketentuan seperti tabel berikut ini :
// Kondisi Daya     Biaya per Kwh
//   1      900 VA   Rp.1.350
//   2     1300 VA   Rp. 1.440
//   3     2200 VA   Rp. 1.450
//   4     3500 VA   Rp. 1.500
// Sebuah Rumah dengan Daya Listrik yang digunakan 2200 VA, rincian penggunaan
// listrik tiap harinya rata-rata sebagai berikut :
// a) AC = 800 wh
// b) Kulkas = 200 wh
// c) Strika = 150 wh
// d) Mesin cuci = 250 wh
// e) Lampu-lampu = 250 wh
// f) Lainnya = 100 wh
// Hitunglah berapa biaya untuk pembayaran listrik tiap bulannya?

void pemilihan(int daya, int& biaya){
  switch (daya) {
    case 900:
        biaya = 1350;
        break;
    case 1300:
        biaya = 1440;
        break;
    case 2200:
        biaya = 1450;
        break;
    case 3500:
        biaya = 1500;
        break;
    default:
        cout << "Daya Listrik Tidak Tersedia." << endl;
    }
}
int main() {
  
  int daya,total;
  int biaya = 0;
  cout << "Masukkan daya listrik yang digunakan rumah (900/1300/2200/3500) : ";
  cin >> daya;

  pemilihan(daya,biaya);
  
    int ac = 800;
    int kulkas = 200;
    int strika = 150;
    int mesin_cuci = 250;
    int lampu = 250;
    int lainnya = 100;

  total = ac + kulkas + strika + mesin_cuci + lampu + lainnya;
  
  if (biaya != 0){
  cout << "Biaya listrik per bulan : " << total * daya << endl;
  }
}
