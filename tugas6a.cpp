#include <iostream>

// Fungsi untuk mengonversi meter ke centimeter
double meterToCentimeter(double meter) {
    return meter * 100.0;
}

// Fungsi untuk mengonversi centimeter ke meter
double centimeterToMeter(double centimeter) {
    return centimeter / 100.0;
}

int main() {
    // Panjang pita dalam meter
    double panjangPitaMeter = 12.0;

    // Panjang pita dalam centimeter
    double panjangPitaCentimeter = meterToCentimeter(panjangPitaMeter);

    // Panjang pita yang dibutuhkan untuk setiap ikatan bunga rangkai dalam centimeter
    double panjangSatuIkatanCentimeter = 45.0;

    // Menghitung jumlah ikatan bunga rangkai yang dapat dibuat
    int jumlahIkatan = panjangPitaCentimeter / panjangSatuIkatanCentimeter;

    // Menghitung sisa pita yang belum dipakai dalam centimeter
    double sisaPitaCentimeter = panjangPitaCentimeter - (jumlahIkatan * panjangSatuIkatanCentimeter);

    // Menampilkan hasil
    std::cout << "Jumlah ikatan bunga rangkai yang dapat dibuat: " << jumlahIkatan << std::endl;
    std::cout << "Sisa pita yang belum dipakai: " << sisaPitaCentimeter << " cm" << std::endl;

    return 0;
}
