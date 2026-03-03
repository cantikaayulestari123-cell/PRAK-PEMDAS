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
    //selesai
}

// library
#include <iostream>
using namespace std;
// deklarasi global
int p, l;

// Implementasi Prosedur dan Fungsi
void input() {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a + b + c;
}

int luasPersegiP(int a, int b){
    return a * b;
}

void output(){
    cout << "Hasilnya = " << luasPersegiP(p, l) << endl;
    cout << "terima kasih" << endl;
}

int main() { //mulai
    input();
    output();
    cout << "hasil penjumlahan= " << jumlah(15.1, 24.9, 67);
 //selesai   
}

#include<iostream>
using namespace std;
//deklarasi variable
float jarijari;
float phi = 3.14159;
//bagian fungsi
void awal(){
    cout << "masukkan jarijari lingkaran: ";
    cin >> jarijari;
}
float luas (float jarijari, float phi){
    return phi*jarijari*jarijari;
}
void akhir (){
    cout << "hasil luas untuk lingkaran dengan jarijari" <<jarijari<<"adalah:" << luas(jarijari,phi);
}    
int main(){
    awal();
}