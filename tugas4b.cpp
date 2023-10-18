#include <iostream>

void getNexttime(int &hour, int &minute, int &second) {
    second++; // Tambahkan 1 detik

    // Cek apakah detik melebihi 59
    if (second >= 60) {
        second = 0; // Atur detik kembali ke 0
        minute++; // Tambahkan 1 menit

        // Cek apakah menit melebihi 59
        if (minute >= 60) {
            minute = 0; // Atur menit kembali ke 0
            hour++; // Tambahkan 1 jam

            // Cek apakah jam melebihi 23 (24 jam dalam sehari)
            if (hour >= 24) {
                hour = 0; // Atur jam kembali ke 0 (midnight)
            }
        }
    }
}

int main() {
    int hour, minute, second;

    // Masukkan jam, menit, dan detik awal
    std::cout << "Masukkan jam: ";
    std::cin >> hour;
    std::cout << "Masukkan menit: ";
    std::cin >> minute;
    std::cout << "Masukkan detik: ";
    std::cin >> second;

    // Panggil fungsi getNexttime
    getNexttime(hour, minute, second);

    // Output jam, menit, dan detik berikutnya
    std::cout << "Nexttime: " << hour << ":" << minute << ":" << second << std::endl;

    return 0;
}
