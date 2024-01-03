#include <iostream>
#include <cctype>

std::string convertPassword(const std::string &password) {
    std::string convertedPassword = "";

    for (char ch : password) {
        if (std::isalpha(ch)) {
            // Konversi huruf
            char convertedChar = (ch - 'a' + 2) % 26 + 'a';
            convertedPassword += convertedChar;
        } else if (std::isdigit(ch) && ch >= '1' && ch <= '4') {
            // Konversi angka
            int convertedDigit = (ch - '0') * 2;
            convertedPassword += std::to_string(convertedDigit);
        } else {
            // Karakter tidak valid
            std::cout << "Password tidak valid. Hanya huruf dan angka 1-4 yang diperbolehkan.\n";
            return "";
        }
    }

    return convertedPassword;
}

int main() {
    std::string password;

    // Input password
    std::cout << "Masukkan password (maksimal 8 digit): ";
    std::cin >> password;

    // Validasi panjang password
    if (password.length() > 8) {
        std::cout << "Password terlalu panjang. Maksimal 8 digit.\n";
        return 1;
    }

    // Validasi karakter unik
    for (size_t i = 0; i < password.length(); ++i) {
        for (size_t j = i + 1; j < password.length(); ++j) {
            if (password[i] == password[j]) {
                std::cout << "Password tidak valid. Tidak boleh ada huruf atau angka yang berulang.\n";
                return 1;
            }
        }
    }

    // Konversi dan tampilkan password
    std::string convertedPassword = convertPassword(password);
    if (!convertedPassword.empty()) {
        std::cout << "Password yang dientry: " << password << std::endl;
        std::cout << "Password yang tersimpan: " << convertedPassword << std::endl;
    }

    return 0;
}
