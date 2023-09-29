#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    double jarak = 750.0; // Jarak dalam kilometer
    double waktu = 20.0;  // Waktu dalam jam

    // Menghitung kecepatan
    double kecepatan = jarak / waktu;

    // Menampilkan kecepatan kendaraan Amir
    cout << "Jarak yang ditempuh: " << jarak << " km" << endl;
    cout << "Waktu tempuh: " << waktu << " jam" << endl;
    cout << "Kecepatan kendaraan Amir: " << kecepatan << " km/jam" << endl;

    return 0;
}
