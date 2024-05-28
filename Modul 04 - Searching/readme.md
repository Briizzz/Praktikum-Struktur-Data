# <h1 align="center">Laporan Praktikum Modul "Searching"</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori
Searching adalah proses pencarian data atau informasi tertentu dalam kumpulan data yang lebih besar. Dalam konteks algoritma, searching digunakan untuk menemukan lokasi atau nilai dari elemen tertentu dalam struktur data seperti array, list, atau database. Terdapat berbagai jenis algoritma searching yang dapat digunakan, seperti Sequential Search dan Binary Search, yang masing-masing memiliki kelebihan dan kelemahan dalam hal kompleksitas waktu dan ruang[1].

Searching pemrograman struktur data adalah metode yang digunakan untuk mencari data tertentu dalam sebuah kumpulan data. Algoritma pencarian dibagi menjadi beberapa jenis, yaitu:

1. **Linear Search**: Algoritma pencarian yang paling sederhana, dimana data yang dicari dikumpulkan satu persatu dari awal hingga akhir dari kumpulan data.

2. **Binary Search**: Algoritma pencarian yang lebih efisien, dimana data yang dicari dihitung dalam jumlah elemen terdahulu. Jika data yang dicari lebih kecil dari nilai tengah, maka data dicari dalam bagian atas, dan jika lebih besar, maka data dicari dalam bagian bawah.

3. **Jump Search**: Algoritma pencarian yang menggunakan jumlah elemen sebagai acuan untuk mencari data.

4. **Interpolation Search**: Algoritma pencarian yang menggunakan perkiraan letak data yang dicari, berdasarkan jumlah elemen dan rata-rata nilai elemen.

5. **Exponential Search**: Algoritma pencarian yang menggunakan rumus pangkat untuk mencari data.

6. **Sublist Search**: Algoritma pencarian yang mencari data dalam sebuah sublist.

7. **Fibonacci Search**: Algoritma pencarian yang menggunakan seri Fibonacci untuk mencari data.

Algoritma pencarian digunakan dalam berbagai aplikasi, mulai dari pencarian data dalam database, pencarian data dalam sistem operasi, hingga pencarian data dalam aplikasi komputer.

## GUIDED 1

1. Sequential Search

    project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

Source code:
```cpp
#include <iostream>
using namespace std;
int main () {
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // algoritma Sequential Search
    for ( i = 0; i < n; i++) {
        if(data[i] == cari) {
            ketemu = true;
            break;
        }
    }
        cout <<"\t Program Seqeuntial Search Sederhana\n" << endl;
        cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}"<< endl;
    if (ketemu) {
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}


```
## GUIDED 2
2.  Binary Search

     project untuk melakukan pencarian data dengan menggunakan Binary Search

Source Code:
```cpp
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int Data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for (i = 0; i < 7; i++) {
        min = i;
        for (j = i + 1; j < 7; j++) {
            if (Data[j] < Data[min]) {
                min = j;
            }
        }
        temp = Data[i];
        Data[i] = Data[min];
        Data[min] = temp;
    }
}

void binarysearch() {
    // searching
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (Data[tengah] == cari) {
            b_flag = 1;
            break;
        }
        else if (Data[tengah] < cari) {
            awal = tengah + 1;
        }
        else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke- " << tengah << endl;
    }
    else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main () {
    cout << "\t BINARY SEARCH " << endl;
    cout << "\n Data : ";

    //tampilkan data awal
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << Data[x];
    }
    cout << endl;

    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";

    // urutkan data dengan selection sort
    selection_sort();

    // tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << Data[x];
    }
    cout << endl;

    binarysearch();

    _getche();
    return EXIT_SUCCESS;
}
```
## UNGUIDED
## Soal 1
1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah
kalimat yang sudah di input dengan menggunakan Binary Search!

## Jawaban
```cpp
#include <iostream>
#include <string>
#include <algorithm>

int binary_search(const std::string& str, char target) {
    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (str[mid] == target) {
            return mid;
        }

        if (str[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::string str;
    char target;

    std::cout << "Enter a string: ";
    std::cin >> str;

    std::cout << "Enter a character to search for: ";
    std::cin >> target;

    int result = binary_search(str, target);

    if (result!= -1) {
        std::cout << "Character found at index " << result << std::endl;
    } else {
        std::cout << "Character not found in string" << std::endl;
    }

    return 0;
}
```
Penjelasan kodingan:

Fungsi biner_pencarian mengambil string str dan karakter target target sebagai input. Ini menginisialisasi dua variabel, kiri dan kanan, masing-masing ke indeks pertama dan terakhir dari string.

Fungsi tersebut kemudian memasuki perulangan while, yang menghitung indeks tengah di tengah rentang pencarian saat ini. Jika karakter di indeks tengah sama dengan target, fungsi mengembalikan indeks tengah.

Jika karakter pada indeks tengah kurang dari target, fungsi akan menetapkan kiri ke tengah + 1, yang secara efektif memindahkan batas kiri rentang pencarian ke kanan tengah.

Jika karakter pada indeks tengah lebih besar dari target, fungsi akan ditetapkan ke kanan ke tengah - 1, yang secara efektif memindahkan batas kanan rentang pencarian ke kiri tengah.

Perulangan berlanjut hingga kiri lebih besar dari kanan, dan pada titik ini fungsi akan mengembalikan -1 untuk menunjukkan bahwa karakter target tidak ditemukan dalam string masukan.

Fungsi utama meminta pengguna untuk memasukkan string dan karakter target, memanggil fungsi biner_search, dan mencetak hasilnya ke konsol.


## Soal 2
Buatlah sebuah program yang dapat menghitung banyaknya huruf
vocal dalam sebuah kalimat!

## Jawaban

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str;
    int count = 0;

    std::cout << "Enter a string: ";
    std::cin >> str;

    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    std::cout << "Number of vowels: " << count << std::endl;

    return 0;
}
```

Penjelasan kodingan:

Program dimulai dengan mendeklarasikan variabel string str dan variabel integer count dan menginisialisasinya ke 0.

Fungsi utama meminta pengguna untuk memasukkan string.

Program kemudian memasuki perulangan for, yang mengulangi setiap karakter c dalam string str.

Jika karakter c saat ini sama dengan salah satu vokal (a, e, i, o, u), program akan menambah variabel count sebanyak 1.

Setelah perulangan selesai, program mencetak jumlah vokal dalam string ke konsol.

Catatan: Kode yang diberikan peka huruf besar-kecil, sehingga hanya menghitung huruf vokal kecil. Jika Anda ingin menghitung huruf vokal kecil dan huruf besar, Anda harus mengubah setiap karakter menjadi huruf kecil sebelum membandingkannya dengan vokal. Anda dapat melakukan ini dengan memanggil fungsi tolower dari <cctype> libarry.

## Soal 3
Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak
angka 4 dengan menggunakan algoritma Sequential Search!

## Jawaban
```cpp
#include <iostream>

int sequentialSearch(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int x = 4;
    int n = sizeof(data) / sizeof(data[0]);
    int count = sequentialSearch(data, n, x);
    std::cout << "Jumlah angka 4 dalam data adalah: " << count << std::endl;
    return 0;
}
```
Penjelasan kodingan:

Dalam kode di atas, sequentialSearch adalah fungsi untuk mencari jumlah kemunculan angka x dalam array arr dengan panjang n. Pada fungsi main, array data berisi data yang diberikan, x adalah angka yang ingin dicari (dalam kasus ini, angka 4), dan n adalah panjang array data. Output dari program tersebut adalah jumlah kemunculan angka 4 dalam array tersebut.

## Refrensi
[1] Y. Religia, “ANALISIS ALGORITMA SEQUENTIAL SEARCH DAN BINARY SEARCH PADA BIG DATA: ANALYSIS OF SEQUENTIAL SEARCH AND BINARY SEARCH ALGORITHM IN BIG DATA”, pelitatekno, vol. 14, no. 1, pp. 74-79, Jul. 2019.

[2] A.Akbar, "ALGORITMA SEQUENTIAL SEARCHING IMPLEMENTASI ALGORITMA SEQUENTIAL SEARCHING PADA APLIKASI E-OFFICE", naratif, vol. 1, jul. 2019.