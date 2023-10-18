#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    if (n < 0) {
        cout << "Faktorial tidak terdefinisi untuk n negatif." << endl;
    } else {
        int result = factorial(n);
        cout << n << "! = " << result << endl;
    }

    return 0;
}