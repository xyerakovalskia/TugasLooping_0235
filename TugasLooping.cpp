#include <iostream>

using namespace std;

int angka;
int pilihan;

bool cekPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

bool cekFibonacci(int n) {
    if (n < 0) return false;
    int a = 0;
    int b = 1;
    while (a < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == n);
}

void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

void tampilkanMenu() {
    cout << "\n===============================" << endl;
    cout << "   PROGRAM PENGECEK BILANGAN   " << endl;
    cout << "===============================" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu (0-2): ";
    cin >> pilihan;
}

void tampilkanHasilPrima() {
    inputAngka();
    if (cekPrima(angka)) {
        cout << "Hasil: " << angka << " adalah bilangan PRIMA." << endl;
    } else {
        cout << "Hasil: " << angka << " BUKAN bilangan prima." << endl;
    }