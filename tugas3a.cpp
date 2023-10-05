#include <iostream>
#include <map>

using namespace std;

// Fungsi untuk mengonversi angka Arab ke angka Romawi
string arab_to_roman(int num) {
    // Membuat peta pasangan angka Arab dan angka Romawi yang sesuai
    map<int, string> roman_numerals;
    roman_numerals[1] = "I";
    roman_numerals[4] = "IV";
    roman_numerals[5] = "V";
    roman_numerals[9] = "IX";
    roman_numerals[10] = "X";
    roman_numerals[40] = "XL";
    roman_numerals[50] = "L";
    roman_numerals[90] = "XC";
    roman_numerals[100] = "C";
    roman_numerals[400] = "CD";
    roman_numerals[500] = "D";
    roman_numerals[900] = "CM";
    roman_numerals[1000] = "M";

    // Membuat string kosong untuk hasil angka Romawi
    string roman = "";

    // Melakukan konversi
    for (auto it = roman_numerals.rbegin(); it != roman_numerals.rend(); ++it) {
        while (num >= it->first) {
            roman += it->second;
            num -= it->first;
        }
    }

    return roman;
}

int main() {
    // Input angka Arab dari pengguna
    int angka_arab;
    cout << "Masukkan angka Arab: ";
    cin >> angka_arab;

    // Memanggil fungsi dan mencetak hasilnya
    string angka_romawi = arab_to_roman(angka_arab);
    cout << "Angka Romawi untuk " << angka_arab << " adalah " << angka_romawi << endl;

    return 0;
}
