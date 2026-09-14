#include <iostream>
using namespace std;
int main(){
    int belanja, totalBayar, totalDiskon;
    float diskon;
    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukkan total belanja (Rp): " ;
    cin >> belanja;

    if (belanja >= 300000){
        diskon = 0.2;
    } else if (belanja >= 100000){
        diskon = 0.1 ;
    } else {
        diskon = 0;
    }

    totalDiskon = belanja * diskon;
    totalBayar = belanja - (totalDiskon);
    cout << "\n" << "--- Ringkasan Pembayaran ---\n";
    cout << "Diskon (" << diskon * 100 << "%)\t: Rp " << totalDiskon << endl;
    cout << "Total Bayar\t: Rp " << totalBayar << endl;
    
}