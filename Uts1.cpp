#include <iostream>
#include <string>
using namespace std;

string encryptPassword(const string &password) {
    string encryptedPassword = "";
    for (char ch : password) {
        if (isalpha(ch)) {
            char encryptedChar = ch + 2;
            if ((isupper(ch) && encryptedChar > 'Z') || (islower(ch) && encryptedChar > 'z')) {
                encryptedChar -= 26;
            }
            encryptedPassword += encryptedChar;
        } else if (isdigit(ch)) {
            int digit = ch - '0';
            int encryptedDigit = digit * 2;
            if (encryptedDigit > 9) {
                encryptedDigit -= 10;
            }
            encryptedPassword += to_string(encryptedDigit);
        } else {
            cout << "Password contains invalid characters." << endl;
            return "";
        }
    }
    return encryptedPassword;
}

int main() {
    string password;
    
    cout << "Masukkan password (maksimal 8 karakter, tidak ada karakter yang berulang): ";
    cin >> password;
    
    if (password.length() > 8 || password.length() == 0) {
        cout << "Password tidak sesuai dengan aturan (maksimal 8 karakter)." << endl;
        return 1;
    }

    // Mengecek karakter yang berulang
    for (int i = 0; i < password.length(); i++) {
        for (int j = i + 1; j < password.length(); j++) {
            if (password[i] == password[j]) {
                cout << "Password tidak sesuai dengan aturan (terdapat karakter yang berulang)." << endl;
                return 1;
            }
        }
    }

    string encryptedPassword = encryptPassword(password);
    if (!encryptedPassword.empty()) {
        cout << "Password yang dienkripsi: " << encryptedPassword << endl;
    }

    return 0;
}
