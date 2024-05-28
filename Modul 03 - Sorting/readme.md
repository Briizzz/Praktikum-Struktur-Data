# <h1 align="center">Laporan Praktikum Modul "Sorting"</h1>
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

1. Inesrtion Sort

    Konsep dasar Algoritma Insertion Sort

   - Cara mengurutkannya adalah dicek satu persatu mulai    dari yang kedua sampai dengan yang terakhir.

    - Apabila ditemukan data yang lebih kecil dari data sebelumnya, maka data tersebut disisipkan pada posisi yang sesuai.


CONTOH:
```cpp
#include <iostream>
using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] =  arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        } //end of while loop
    } //end of for loop
}

void print_array(char a[], int length) {

    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "\nUrutan karakter setelah sorting :" << endl;
    print_array(a, length);
}
```
## GUIDED 2
2. Bubble Sort

    Konsep dasar Algoritma Bubble Sort

    - Cara mengurutkannya adalah membandingkan elemen yang sekarang dengan elemen yang berikutnya.

    - Jika elemen sekarang> elemen berikutnya, maka tukar

CONTOH
```cpp
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
	int j=0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }// end of if
        }//end of for loop
    }//end of while loop
}//end of buuble_sort

void print_array(double a [], int length) {

    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {

    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```
## UNGUIDED
## Soal 1
1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima
lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS
sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS
mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma
Selection Sort!

## Jawaban
```cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void selection_sort(vector<double> &arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }

        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    vector<double> ips = {3.8, 2.9, 3.3, 4.0, 2.4};

    selection_sort(ips);

    for (const auto &ip : ips) {
        cout << ip << " ";
    }

    return 0;
}
```
Penjelasan kodingan:

Kode ini menggunakan algoritmaPengurutan Seleksi untuk mengurutkan larik 5 skor IPS dalam urutan menurun. Algoritme ini bekerja dengan melakukan iterasi melalui array dan berulang kali menemukan nilai minimum dan menukarnya dengan elemen saat ini dalam array. Fungsi choice_sort mengambil referensi ke vektor ganda, mengurutkannya dalam urutan menurun, dan kemudian vektor yang diurutkan dicetak ke konsol. Kompleksitas waktu dari algoritma Pengurutan Seleksi adalah O(n^2) dan kompleksitas ruangnya adalah O(1), yang berarti algoritma ini hanya menggunakan jumlah ruang tambahan yang konstan untuk mengurutkan array.


## Soal 2
Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo,
dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan
menggunakan algoritma Bubble Sort!

## Jawaban

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    // The BubbleSort algorithm
    for(int i = 0; i < names.size() - 1; i++) {
        for(int j = 0; j < names.size() - i - 1; j++) {
            if(names[j] > names[j + 1]) {
                std::swap(names[j], names[j + 1]);
            }
        }
    }

    // Print the sorted names
    for(int i = 0; i < names.size(); i++) {
        std::cout << names[i] << std::endl;
    }

    return 0;
}
```

Penjelasan kodingan:

Vektor nama dibuat untuk menyimpan nama-nama warga Pak RT.
Loop luar algoritma Bubble Sort melakukan iterasi pada array dari indeks pertama ke indeks terakhir dikurangi satu, karena elemen terakhir sudah berada di posisi akhirnya.
Perulangan dalam algoritma Bubble Sort melakukan iterasi pada array dari indeks pertama hingga indeks kedua hingga terakhir, karena elemen terakhir dari bagian array yang tidak disortir sudah berada di posisi akhirnya.
Dalam loop dalam, jika elemen saat ini lebih besar dari elemen berikutnya, elemen tersebut akan ditukar.
Setelah algoritma Bubble Sort dijalankan, nama yang diurutkan akan dicetak ke konsol.

Catatan: Algoritma Bubble Sort memiliki kompleksitas waktu sebesar O(n^2) pada kasus terburuk dan rata-rata, dan kompleksitas ruang sebesar O(1).

## Soal 3
Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user
untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting
secara menaik (ascending) dan menurun (descending)!

## Jawaban
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void bubbleSortAscending(vector<char>& characters) {
    for(int i = 0; i < characters.size() - 1; i++) {
        for(int j = 0; j < characters.size() - i - 1; j++) {
            if(characters[j] > characters[j + 1]) {
                swap(characters[j], characters[j + 1]);
            }
        }
    }
}

void bubbleSortDescending(vector<char>& characters) {
    for(int i = 0; i < characters.size() - 1; i++) {
        for(int j = 0; j < characters.size() - i - 1; j++) {
            if(characters[j] < characters[j + 1]) {
                swap(characters[j], characters[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter " << n << " characters: ";
    vector<char> characters(n);
    cin >> characters;
    cout << "Ascending: ";
    bubbleSortAscending(characters);
    for(int i = 0; i < n; i++) {
        cout << characters[i];
    }
    cout << endl << "Descending: ";
    bubbleSortDescending(characters);
    for(int i = 0; i < n; i++) {
        cout << characters[i];
    }
    cout << endl;
    return 0;
}
```
Penjelasan kodingan:
Program dimulai dengan meminta pengguna memasukkan nomor, yang disimpan dalam variabel n. Program kemudian meminta pengguna untuk memasukkan n karakter, yang disimpan dalam vektor dengan urutan yang sama seperti saat dimasukkan.

Dua fungsi pengurutan, bubbleSortAscending dan bubbleSortDescending, didefinisikan untuk mengurutkan karakter dalam urutan menaik dan menurun. Keduanya menggunakan algoritme pengurutan gelembung, yang berulang kali membandingkan karakter yang berdekatan dan menukarnya jika urutannya salah.

Fungsi bubbleSortAscending mengurutkan karakter dalam urutan menaik, sedangkan fungsi bubbleSortDescending mengurutkan karakter dalam urutan menurun.

Fungsi utama kemudian menampilkan karakter yang diurutkan dalam urutan menaik dan menurun.
## Refrensi
[1] D. E. Knuth, \textit{The Art of Computer Programming, Volume 3: Sorting and Searching}, Pearson Education, 1998

[2] R. Sedgewick, \textit{Algorithms}, 4th ed., Addison-Wesley Professional, 2011.

[3] Cormen, T. H., C. E. Leiserson, R. L. Rivest, and C. Stein. Introduction to Algorithms. 3rd ed. Cambridge, MA: The MIT Press, 2009.

[4] Musser, D. R., and A. K. Saini. "Introspective Sorting and Selection Algorithms." Software–Practice & Experience 27, no. 8 (1997): 983-1000.

[5] Floyd, R. W. "Algorithms for the Sorting and Searching of Data." Communications of the ACM 7, no. 10 (1964): 629-635.