#include <iostream>
using namespace std;
int main(){
    int harga, kode, uang, kembalian, pecahan5Ribu, pecahanSeribu;
    cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
    cout << "Pilihan Minuman:" << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;
    cout << "Pilih kode minuman (1-3): ";
    cin >> kode;
    switch (kode){
    case 1:
        harga = 4000;
        break;
    case 2:
        harga = 6000;
        break;
    case 3:
        harga = 10000;
        break;
    default:
        cout << "Pilihan tidak tersedia";
        return 0;
    }
    cout << "Masukkan uang Anda (Rp): ";
    cin >> uang;
    cout << "\n--- DETAIL TRANSAKSI ---" << endl;
    kembalian = uang - harga;
    if (kembalian < 0){
        kembalian -= kembalian * 2;
        cout << "Transaksi Gagal! Uang anda kurang Rp " << kembalian;
    } else if (kembalian == 0) {
        cout << "Transaksi berhasil" << endl;
        cout << "Uang pas, tidak ada kembalian";
    } else {
        cout << "Transaksi berhasil" << endl;
        pecahanSeribu = kembalian % 5000 / 1000;
        pecahan5Ribu = kembalian/5000;
        if ((pecahanSeribu) > 0){
             cout << "Kembalian: Rp " << kembalian << endl;
             if (pecahan5Ribu) {
                 cout << pecahan5Ribu << " Lembar Rp. 5000" << endl;
             }
             cout << pecahanSeribu << " Lembar Rp. 1000" << endl;
        } else {
            cout << "Kembalian: Rp " << kembalian << endl;
            cout << pecahan5Ribu << " Lembar Rp. 5000";
        }
      
    }
}