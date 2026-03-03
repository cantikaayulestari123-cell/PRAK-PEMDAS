// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l, luas;

// Implementasi Prosedur dan Fungsi
void input() {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin>> l;
}

int luaspersegi(){
    return p * l;
}

void output(){
    cout << "hasilnya = " << luaspersegi() << endl;
    cout << "terima kasih";
}

int main() { //mulai
    input();
    output();
}