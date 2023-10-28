#include <iostream>

// Fungsi untuk menampilkan segitiga bintang
void segitigaBintang(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Fungsi untuk menampilkan segitiga bintang terbalik
void segitigaBintangTerbalik(int tinggi) {
    for (int i = tinggi; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Fungsi untuk menampilkan persegi bintang
void persegiBintang(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int tinggi;
    
    std::cout << "Masukkan tinggi bintang: ";
    std::cin >> tinggi;

    std::cout << "Segitiga Bintang:" << std::endl;
    segitigaBintang(tinggi);

    std::cout << "Segitiga Bintang Terbalik:" << std::endl;
    segitigaBintangTerbalik(tinggi);

    std::cout << "Persegi Bintang:" << std::endl;
    persegiBintang(tinggi);

    return 0;
}
