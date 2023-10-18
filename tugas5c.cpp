#include <iostream>
using namespace std;

int main() {
    int n = 1000; // Jumlah suku dalam deret
    double S = 0.0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            S -= 1.0 / i;
        } else {
            S += 1.0 / i;
        }
    }

    cout << "Nilai S = " << S << endl;

    return 0;
}
