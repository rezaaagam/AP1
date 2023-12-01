// // Buatlah Algoritma program untuk melakukan pengurutan data secara menurun (dari besar ke kecil) dengan menggunakan selection sort.
// // Data : 21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2

#include <iostream>

using namespace std;

int swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;

return 0;
}

int out(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
      cout << arr[i] << " ";
  }
  cout << endl;
return 0;
}

int Sort_Descend(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int maksimal = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[maksimal]) {
                maksimal = j;
            }
        }
        swap(arr[i], arr[maksimal]);
        out(arr, size);
    }
return 0;
}



int main() {
    int arr[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Sebelum Di Sort (Descending) : ";
    out(arr, size);

    Sort_Descend(arr, size);

    cout << "Array Setelah Di Sort (Descending) : ";
    out(arr, size);

    return 0;
}
