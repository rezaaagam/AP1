#include <iostream>
using namespace std;
// dibaca dua nilai integer  (misal x dan y) lakukan penukaran antara dua bilangan

void swap (int& bil1, int& bil2);

int main() {
  int x,y;
  
  
  cout << "Masukkan nilai x : ";
  cin >> x;
  cout << "Masukkan nilai y : ";
  cin >> y;
  swap(x,y);
  cout << "Nilai x setelah ditukar : " << x ;
  cout << "\nNilai y setelah ditukar : " << y ;
}

void swap (int& bil1, int& bil2){
  int temp;
  temp = bil1;
  bil1 = bil2;
  bil2 = temp;

}
