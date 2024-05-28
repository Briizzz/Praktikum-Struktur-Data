#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    // Basis
    if (n == 0 || n == 1) {
        return 1;
    }
    // Rekursi
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;
    
    // Meminta input dari pengguna
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;
    
    if (bilangan < 0) {
        cout << "Harap masukkan bilangan bulat positif." << endl;
    } else {
        int hasil = faktorial(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }
    
    return 0;
}
