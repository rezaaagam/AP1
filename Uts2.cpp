#include <iostream>
using namespace std;

int main() {
    double dollarAmount = 12000.0;  // Jumlah dana dalam US Dollar
    double euroAmount = 20000.0;    // Jumlah dana dalam Euro
    double usdToIdrExchangeRate = 15000.0;  // Kurs tukar US Dollar ke Rupiah
    double eurToUsdExchangeRate = 0.997;   // Kurs tukar Euro ke US Dollar
    double carPriceInIdr = 425000000.0;     // Harga mobil baru dalam Rupiah

    // Mengkonversi tabungan dalam Euro ke US Dollar
    double euroToUsd = euroAmount * eurToUsdExchangeRate;

    // Menghitung total tabungan dalam US Dollar
    double totalUsd = dollarAmount + euroToUsd;

    // Mengkonversi total tabungan ke Rupiah
    double totalIdr = totalUsd * usdToIdrExchangeRate;

    // Menghitung sisa uang setelah membeli mobil
    double remainingIdr = totalIdr - carPriceInIdr;

    cout << "Total dana Pak Anto dalam Rupiah: " << totalIdr << " IDR" << endl;
    cout << "Sisa uang Pak Anto setelah membeli mobil: " << remainingIdr << " IDR" << endl;

    return 0;
}
