#include <iostream>
using namespace std;

struct Titik {
    double x;
    double y;
};

double hitungJarak(const Titik& titik1, const Titik& titik2) {
    double dx = titik1.x - titik2.x;
    double dy = titik1.y - titik2.y;

    return dx * dx + dy * dy;
}

int main() {
  
    Titik titik1, titik2;
  
    cout << "Masukkan koordinat titik pertama (x y): ";
    cin >> titik1.x >> titik1.y;

    cout << "Masukkan koordinat titik kedua (x y): ";
    cin >> titik2.x >> titik2.y;

    double jarak = hitungJarak(titik1, titik2);
    cout << "Jarak antara dua titik: √" << jarak << endl;

    return 0;
}
