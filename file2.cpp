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
    akhir();
}