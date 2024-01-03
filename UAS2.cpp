#include <iostream>
#include <algorithm>

struct Child {
    std::string name;
    int day, month, year;
};

bool compareByYear(const Child &a, const Child &b) {
    return a.year < b.year;
}

int main() {
    const int maxData = 20;
    Child children[maxData];

    // Membaca data anak secara acak
    for (int i = 0; i < maxData; ++i) {
        std::cout << "Data Anak ke-" << i + 1 << ":\n";
        std::cout << "Nama: ";
        std::cin >> children[i].name;
        std::cout << "Tanggal Lahir (Tanggal Bulan Tahun): ";
        std::cin >> children[i].day >> children[i].month >> children[i].year;
        std::cout << std::endl;
    }

    // Menampilkan data sebelum diurutkan
    std::cout << "Data Anak Sebelum Diurutkan:\n";
    for (int i = 0; i < maxData; ++i) {
        std::cout << "Nama: " << children[i].name << ", Tanggal Lahir: " << children[i].day << "/" << children[i].month << "/" << children[i].year << std::endl;
    }
    std::cout << std::endl;

    // Mengurutkan data berdasarkan Tahun Lahir
    std::sort(children, children + maxData, compareByYear);

    // Menampilkan data setelah diurutkan
    std::cout << "Data Anak Setelah Diurutkan Berdasarkan Tahun Lahir:\n";
    for (int i = 0; i < maxData; ++i) {
        std::cout << "Nama: " << children[i].name << ", Tanggal Lahir: " << children[i].day << "/" << children[i].month << "/" << children[i].year << std::endl;
    }
    std::cout << std::endl;

    // Mencari dan menampilkan data anak dengan Tahun Lahir 2020
    std::cout << "Data Anak dengan Tahun Lahir 2020:\n";
    for (int i = 0; i < maxData; ++i) {
        if (children[i].year == 2020) {
            std::cout << "Nama: " << children[i].name << ", Tanggal Lahir: " << children[i].day << "/" << children[i].month << "/" << children[i].year << std::endl;
        }
    }

    return 0;
}
