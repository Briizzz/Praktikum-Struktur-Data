#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // NIM sebagai variabel
    int nim = 22102003;

    // Mendapatkan jumlah simpul
    int jumlahSimpul;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    // Mendapatkan nama simpul
    vector<string> simpul(jumlahSimpul);
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    // Inisialisasi matriks adjensi
    vector<vector<int>> matriksAdjensi(jumlahSimpul, vector<int>(jumlahSimpul, 0));

    // Mendapatkan bobot antar simpul
    for (int i = 0; i < jumlahSimpul; ++i) {
        for (int j = 0; j < jumlahSimpul; ++j) {
            if (i != j) {
                cout << simpul[i] << " --> " << simpul[j] << " = ";
                cin >> matriksAdjensi[i][j];
            } else {
                matriksAdjensi[i][j] = 0; // jarak dari simpul ke dirinya sendiri adalah 0
            }
        }
    }

    // Menampilkan matriks adjensi
    cout << "\nMatriks Adjensi:\n    ";
    for (const auto& s : simpul) {
        cout << s << " ";
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << simpul[i] << " ";
        for (int j = 0; j < jumlahSimpul; ++j) {
            cout << matriksAdjensi[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}