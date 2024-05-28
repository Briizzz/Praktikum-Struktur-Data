#include <iostream>

using namespace std;

// Deklarasi fungsi
int fungsiA(int n);
int fungsiB(int n);

// Fungsi A yang memanggil fungsi B
int fungsiA(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fungsiB(n - 1);
    }
}

// Fungsi B yang memanggil fungsi A
int fungsiB(int n) {
    return fungsiA(n);
}

int main() {
    int bilangan;
    
    // Meminta input dari pengguna
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;
    
    if (bilangan < 0) {
        cout << "Harap masukkan bilangan bulat positif." << endl;
    } else {
        int hasil = fungsiA(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }
    
    return 0;
}