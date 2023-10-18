#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void getNextday(int &day, int &month, int &year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Cek apakah tahun saat ini adalah tahun kabisat
    if (isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    day++; // Tambahkan 1 pada tanggal saat ini

    // Jika tanggal melebihi jumlah hari dalam bulan saat ini
    if (day > daysInMonth[month]) {
        day = 1; // Atur tanggal kembali ke 1
        month++; // Tambahkan 1 pada bulan

        // Jika bulan melebihi Desember (12)
        if (month > 12) {
            month = 1; // Atur bulan kembali ke Januari
            year++; // Tambahkan 1 pada tahun
        }
    }
}

int main() {
    int day, month, year;

    // Masukkan tanggal, bulan, dan tahun awal
    std::cout << "Masukkan tanggal: ";
    std::cin >> day;
    std::cout << "Masukkan bulan: ";
    std::cin >> month;
    std::cout << "Masukkan tahun: ";
    std::cin >> year;

    // Panggil fungsi getNextday
    getNextday(day, month, year);

    // Output tanggal, bulan, dan tahun berikutnya
    std::cout << "Nextday: " << day << " " << month << " " << year << std::endl;

    return 0;
}
