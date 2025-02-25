#include <iostream>
using namespace std;

int main() {

    char kode_produk;
    cout << "Masukan Kode Produk : ";
    cin >> kode_produk;
    
    // if (nilai >= 85) {
    //     cout << "Nilai A";
    // } else if (nilai >= 70){
    //     cout << "Nilai B";
    // } else if (nilai >= 55){
    //     cout << "Nilai C";
    // } else if (nilai >= 40){
    //     cout << "Nilai D";
    // } else {
    //     cout << "Nilai E";
    // }

    switch (kode_produk) {
    case 'A':
        cout << "Alat Olahraga";
        break;
    case 'B':
        cout << "Alat Elektronik";
        break;
    case 'C':
        cout << "Alat Masak";
        break;
    default:
        cout << "Kode Produk Tidak Ditemukan";
        break;
    }
    return 0;

    
}
