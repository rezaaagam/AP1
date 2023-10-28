#include <iostream>

int main() {
    int a, b, c;
    double x = 1.0;  // Menggunakan double untuk hasil yang mungkin berupa desimal

    // Membaca tiga bilangan bulat a, b, dan c dari pengguna
    std::cout << "Masukkan nilai a: ";
    std::cin >> a;

    std::cout << "Masukkan nilai b: ";
    std::cin >> b;

    std::cout << "Masukkan nilai c: ";
    std::cin >> c;

    // Menghitung hasil ekspresi matematika
    double hasil = 6 * (a * x * x + b * x + c);

    // Menampilkan hasil perhitungan
    std::cout << "Hasil perhitungan 6 * (ax^2 + bx + c) untuk x = 1 adalah: " << hasil << std::endl;

    return 0;
}
