# <h1 align="center">Laporan Praktikum Modul "Struck"</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori

Sortir adalah teknik dasar dalam ilmu komputer, yang memiliki beragam aplikasi, seperti pencarian, analisis data, dan manajemen basis data. Secara umum, pengurutan adalah proses menata ulang sekumpulan elemen ke dalam urutan tertentu, misalnya dalam urutan menaik atau menurun.

Ada beberapa algoritma pengurutan, dan masing-masing algoritma memiliki kelebihan dan kekurangannya masing-masing. Dalam hal kompleksitas waktu, algoritma pengurutan dapat diklasifikasikan menjadi dua kategori:

1. Penyortiran perbandingan: Kategori algoritma pengurutan ini bergantung pada perbandingan pasangan elemen untuk menentukan urutan. Kompleksitas waktu dari algoritma pengurutan perbandingan adalah O(n log n) pada kasus terbaik dan rata-rata, dan O(n^2) pada kasus terburuk. Contoh algoritma pengurutan perbandingan adalah:

- Bubble Sort
- Insertion Sort
- Selection Sort
- Quick Sort
- Merge Sort
- Heap Sort

2. Penyortiran non-perbandingan: Kategori algoritma pengurutan ini tidak bergantung pada perbandingan pasangan elemen. Sebaliknya, ia menggunakan properti elemen, seperti nilainya, untuk menentukan urutannya. Kompleksitas waktu dari algoritma pengurutan non-perbandingan adalah O(n) dalam kasus terbaik, rata-rata, dan terburuk. Contoh algoritma pengurutan non-perbandingan adalah:

- Bucket Sort
- Radix Sort
- Counting Sort
- Flux Sort


## GUIDED 1

1.  sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku



```cpp
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
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku = "The Alpha Girl's Guide";
    favorit.pengarang = "Henry Manampiring";
    favorit.penerbit = "Gagas Media";
    favorit.tebalHalaman = 253;
    favorit.hargaBuku = 79000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit.judulBuku << endl;
    cout << "\tPengarang : " << favorit.pengarang << endl;
    cout << "\tPenerbit : " << favorit.penerbit << endl;
    cout << "\tTebal Halaman: " << favorit.tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit.hargaBuku << endl;
 
    return 0;
}

```
## GUIDED 2


```cpp
#include <iostream>
using namespace std;

struct hewan {
    string namaHewan;
    string jenisKelamin;
    string caraBerkembangbiak;
    string alatPernafasan;
    string tempatHidup;
    bool Karnivora;
};

struct hewanDarat {
    int jumlahKaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    string bentukSirip;
    string bentukPertahananDiri;
};

int main() {
    hewanDarat kelinci; // Menggunakan tipe data hewanDarat untuk kelinci
    kelinci.jumlahKaki = 4;
    kelinci.menyusui = true;
    kelinci.suara = "Citcit";

    hewanLaut ikan; // Menggunakan tipe data hewanLaut untuk ikan
    ikan.bentukSirip = "Sirip ekor";
    ikan.bentukPertahananDiri = "Sisik";

    hewan serigala; // Tetap menggunakan tipe data hewan untuk serigala
    serigala.namaHewan = "Serigala";
    serigala.jenisKelamin = "Jantan";
    serigala.caraBerkembangbiak = "Melahirkan";
    serigala.alatPernafasan = "Paru-paru";
    serigala.tempatHidup = "Hutan terbuka";
    serigala.Karnivora = true;

    cout << "\t\tHewan" << endl;
    cout << "\t" << serigala.namaHewan << endl;
    cout << "\tJenis kelamin : " << serigala.jenisKelamin << endl;
    cout << "\tCara berkembangbiak : " << serigala.caraBerkembangbiak << endl;
    cout << "\tAlat pernafasan : " << serigala.alatPernafasan << endl;
    cout << "\tTempat hidup : " << serigala.tempatHidup << endl;
    cout << "\tKarnivora : " << (serigala.Karnivora ? "Yes" : "No") << endl << endl;

    cout << "\t\tHewan Darat" << endl;
    cout << "\tKelinci" << endl;
    cout << "\tJumlah kaki : " << kelinci.jumlahKaki << endl;
    cout << "\tMenyusui : " << (kelinci.menyusui ? "Yes" : "No") << endl;
    cout << "\tSuara : " << kelinci.suara << endl << endl;

    cout << "\t\tHewan Laut" << endl;
    cout << "\tIkan" << endl;
    cout << "\tBentuk sirip : " << ikan.bentukSirip << endl;
    cout << "\tBentuk pertahanan diri: " << ikan.bentukPertahananDiri << endl;

    return 0;
}
```
## UNGUIDED
## Soal 1
1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada
struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

## Jawaban
```cpp
#include <iostream>
#include <string>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku[5];
    string pengarang[5];
    string penerbit[5];
    int tebalHalaman[5];
    int hargaBuku[5];
};

int main() {
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku[0] = "The Alpha Girl's Guide";
    favorit.pengarang[0] = "Henry Manampiring";
    favorit.penerbit[0] = "Gagas Media";
    favorit.tebalHalaman[0] = 253;
    favorit.hargaBuku[0] = 79000;

    favorit.judulBuku[1] = "Buku 2";
    favorit.pengarang[1] = "Pengarang 2";
    favorit.penerbit[1] = "Penerbit 2";
    favorit.tebalHalaman[1] = 200;
    favorit.hargaBuku[1] = 50000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    for (int i = 0; i < 5; i++) {
        if (favorit.judulBuku[i]!= "") {
            cout << "\tJudul Buku : " << favorit.judulBuku[i] << endl;
            cout << "\tPengarang : " << favorit.pengarang[i] << endl;
            cout << "\tPenerbit : " << favorit.penerbit[i] << endl;
            cout << "\tTebal Halaman: " << favorit.tebalHalaman[i] << " halaman" << endl;
            cout << "\tHarga Buku : Rp " << favorit.hargaBuku[i] << endl;
            cout << endl;
        }
    }

    return 0;
}
```
Penjelasan kodingan:

kodingan di atas mengisi data untuk dua buku dan kemudian menampilkan informasi buku-buku tersebut. Untuk mengisi dan menampilkan data lebih dari dua buku, Anda dapat menambahkan langkah-langkah seperti yang sudah ada di dalam loop. Jika Anda ingin membatasi jumlah buku yang dapat diinput, perlu dilakukan pengecekan apakah atribut judul buku sudah terisi atau tidak (if (favorit.judulBuku[i]!= "")). Jika sudah terisi, berarti slot tersebut sudah terisi dengan data buku, dan Anda dapat menambahkan logika untuk memberikan pesan bahwa slot tersebut tidak dapat diisi. Jika belum terisi, maka Anda dapat mengisinya dengan data buku yang baru.


## Soal 2
2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array.   Bagaimana cara mengisi data dan menampilkannya ?

## Jawaban

```cpp
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
```

Penjelasan kodingan:

Program ini menggunakan struktur `buku` untuk merepresentasikan informasi tentang buku, seperti judul, pengarang, penerbit, tebal halaman, dan harga. Kemudian, program mendeklarasikan array `favorit` dengan ukuran 3 untuk menyimpan informasi dari 3 buku favorit. Setiap elemen array `favorit` diisi dengan data buku favorit, seperti judul, pengarang, penerbit, tebal halaman, dan harga.

Setelah mengisi data untuk setiap buku favorit, program menggunakan loop `for` untuk menampilkan informasi dari setiap buku. Dalam loop, program mencetak informasi seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku dari setiap elemen array `favorit`.

Dengan demikian, program ini memanfaatkan struktur dan array untuk mengorganisir dan menampilkan informasi tentang buku favorit.

## Refrensi
[1] D. E. Knuth, \textit{The Art of Computer Programming, Volume 3: Sorting and Searching}, Pearson Education, 1998

[2] R. Sedgewick, \textit{Algorithms}, 4th ed., Addison-Wesley Professional, 2011.

[3] Cormen, T. H., C. E. Leiserson, R. L. Rivest, and C. Stein. Introduction to Algorithms. 3rd ed. Cambridge, MA: The MIT Press, 2009.

[4] Musser, D. R., and A. K. Saini. "Introspective Sorting and Selection Algorithms." Software–Practice & Experience 27, no. 8 (1997): 983-1000.

[5] Floyd, R. W. "Algorithms for the Sorting and Searching of Data." Communications of the ACM 7, no. 10 (1964): 629-635.