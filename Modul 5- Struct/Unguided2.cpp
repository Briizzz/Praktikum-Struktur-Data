#include <iostream>
using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku;
    string pengarang;
    string penerbit;
    int tebalHalaman;
    int hargaBuku;
};

int main() {
    // Mendeklarasikan array buku favorit dengan ukuran 3
    buku favorit[3];

    // Mengisi data ke dalam array buku favorit
    favorit[0].judulBuku = "The Alpha Girl's Guide";
    favorit[0].pengarang = "Henry Manampiring";
    favorit[0].penerbit = "Gagas Media";
    favorit[0].tebalHalaman = 253;
    favorit[0].hargaBuku = 79000;

    favorit[1].judulBuku = "Bumi";
    favorit[1].pengarang = "Tere Liye";
    favorit[1].penerbit = "Gramedia";
    favorit[1].tebalHalaman = 438;
    favorit[1].hargaBuku = 85000;

    favorit[2].judulBuku = "Assassin's Creed: Brotherhood";
    favorit[2].pengarang = "Oliver Bowden";
    favorit[2].penerbit = "Ufuk Press";
    favorit[2].tebalHalaman = 600;
    favorit[2].hargaBuku = 84000;

    // Menampilkan informasi buku favorit
    for (int i = 0; i < 3; i++) {
        cout << "\tBuku Favorit Saya " << i+1 << endl;
        cout << "\tJudul Buku : " << favorit[i].judulBuku << endl;
        cout << "\tPengarang : " << favorit[i].pengarang << endl;
        cout << "\tPenerbit : " << favorit[i].penerbit << endl;
        cout << "\tTebal Halaman: " << favorit[i].tebalHalaman << " halaman" << endl;
        cout << "\tHarga Buku : Rp " << favorit[i].hargaBuku << endl;
    }

    return 0;
}
