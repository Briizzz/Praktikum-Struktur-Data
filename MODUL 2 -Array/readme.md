# <h1 align="center">Laporan Praktikum Modul  Array</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori
Array adalah objek yang menyimpan beberapa variabel dengan tipe yang sama (homogen) bertipe yang sama yang disimpan di lokasi memori yang berdekatan Untuk menemukan nilai nilai tersebut. Misalnya jika sebuah array bertipe “int", array hanya dapat menyimpan elemen integer dan tidak dapat elemen bertipe lain seperti double, float, char, dll. Namun, array itu sendiri adalah objek pada heap. Dan, jenis elemen yang dapat disimpan dalam bentuk array ditentukan oleh bahasa pemrograman. [3]

Array adalah salah satu tipe data terstruktur yang digunakan dalam Bahasa pemrograman. Penggunaan array dapat mempermudah penyimpan data karena array berisi komponen-komponen yang memiliki tipe data yang sama. Setiap anggota array dapat diakses melalui suatu indeks. Array mempunyai beberapa jenis seperti array 1 dimensi, array 2 dimensi dan array multidimensi, dimana masing-masing array tersebut memiliki fungsi yang berbeda dalam penggunaannya. Array 1 dimensi disebut dengan vektor, array 2 dimensi sering disebut sebagai matriks sedangkan array yang memiliki dimensi lebih dari 2(dua) yang disebut tensor. [2]

Struktur data array, yang menyimpan koleksi sekuensial berukuran tetap dari jenis yang sama. Sebuah array digunakan untuk menyimpan koleksi data, namun seringkali lebih berguna untuk memikirkan sebuah array sebagai kumpulan variabel dengan tipe yang sama. [3]

Array merupakan suatu variabel yang khas dan memiliki kemampuan dalam memberi tempat yang dapat memberi tampungan nilai lebih dari satudalam waktu bersamaan, apabila mempunya list item misalnya nama list sepeda motor, penyimpanan variabel biasa akan terdeklasi sebagai berikut: [1]

Sepedamotor1=”Ninja”
Sepedamotor1=”Mio” [1]


Karakteristik Array :
1. Mempunyai batasan dari pemesanan alokasi memory ( bersifat statis)
2. Mempunyai type data sama ( bersifat Homogen)
3. Dapat diakses secara acak.
4. Berurutan ( terstruktur ) [1]

berikut ini ada beberapa jenis array:

1. Array Satu Dimensi

Array satu dimensi tidak lain adalah kumpulan elemen-elemen identik yang tersusun dalam satu baris, tetapi isi dari elemen tersebut boleh berbeda.  Dapat disebut juga dengan istilah vektor yang menggambarkan data dalam suatu urutan [2]
Deklarasi : Type_Data Nama_Variabel [index] 
Misalnya : int A[5]; 

2. Array Dua Dimensi

Array dua dimensi yang sering digambarkan sebagai sebuah matriks merupakan perluasan dari sebuah array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dengan beberapa kolom elemen maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama. [2]

Deklarasi : Type_Data Nama_Variabel [Index1] [index2]; 

Misal : int A[3][2];

3. Array Tiga Dimensi/ multidimensi

Array tiga dimensi digunakan untuk mengelola data dalam bentuk 3 dimensi atau tiga sisi. array tiga dimensi ini bisa disebut dengan array multidimensi karena lebih dari dua. array multidimensi adalah array yang nemiliki dimensi banyak dan biasanya lebih dari dua [2]

Deklarasi : Type_Data Nama_Variabel [index1] [ndex2] [index3]; 

Misal : int A [3][4][2];

## Guided 

### 1. Array Tiga Dimensi

```cpp
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main() 
{
    // Deklasi Array
    int arr[2] [3] [3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x <<"][" << y <<"][" << z <<"] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x <<"][" << y <<"][" << z <<"] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilkan array
    for (int x = 0; x < 2; x++)
    {
         for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```

#### Output:
![240302_00h00m06s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/61ec161a-ab6c-4ec1-8ca8-db61b16f826e)

![240302_00h00m06s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/84ec165b-ac3d-4f67-a67b-bedb8c8d9e6a)
#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/daea205b-7a04-496e-b265-1dc0353f77a9)

### 2. Nilai Maksimal pada Array
```cpp
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variabel
    int maks, a, i = 1, lokasi;
    // masukkan data
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/0002679d-9807-4553-83c7-2dd4134bca83)

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/738108c9-bbb4-4d89-b24b-286cb6f0174d)

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

```cpp
#include <iostream>
using namespace std;

int main() {
    
    int angka [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "\t Menentukan Ganjil & Genap Data Array \n";

    cout << "\n Data Array : ";
    for(int i = 0; i < 10; i++){
        cout << " " << angka[i];
    }

    cout << "\n Nomor Genap : ";
    
    for(int i = 0; i < 10; i++){

        if (angka[i] % 2 == 0){

            cout << angka[i] << ", ";
        }
    }

    cout << "\n Nomor Ganjil : ";

    for(int j = 0; j < 10; j++){

        if (angka[j] % 2 != 0){

            cout << angka[j] << ", ";
        }
    }
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/277f2dec-03ec-455e-9e91-ddddede888b8)

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/3b435f3a-5ede-4d17-9a64-24a079079a90)

Program diatas merupakan program data array yang bertujuan untuk mencari nilai ganjil dan genapnya,untuk menampilkan data array kita hanya perlu menggunakan for kemudian panggil index arraynya,untuk mencari nomor genap dan ganjil menggunakan sisa bagi.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
```cpp
#include <iostream>
using namespace std;

C++
int main() {
    int x, y, z;
    cout << "Masukkan ukuran array tiga dimensi: ";
    cin >> x >> y >> z;

    int arr[x][y][z];

    //mengisi elemen array 
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Masukkan elemen ke [" << i << "][" << j <<"][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // menampilkan elemen array
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
               cout << "Isi elemen ke [" << i << "][" << j <<"][" << k << "]: " << arr[i][j][k] << endl;
            }
        }
    }   

    return 0;
}
```

#### Output:
![240302_00h00m06s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/3d762723-c5bb-4903-87ed-ac3b7ad2b044)

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/3898e723-01a1-46ec-8c49-a706efae20a3)

Program diatas merupakan program array tiga dimensi yang dimana jumlah elemennya diinputkan oleh user sebelum memasukan inputan,masukan ukuran arraynya maka kita akan diminta masukan elemennya dan elemen muncul sesuai yang diinputkan.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[100], a, sum = 0, max, min;
    float avg;
    char choice;

    cout << "Masukkan jumlah elemen array: ";
    cin >> a;

    //input elemen array
    cout << "Masukkan " << a << " angka: ";
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    // Mencari nilai maksimum, minimum, dan nilai rata-rata
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < a; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] > min) {
            min = arr[i];
        }
    }
    avg = (float) sum / a;

    // Menampilkan menu
    cout << "\nSilahkan pilih menu: \n";
    cout << "A. Cari nilai maksimum\n";
    cout << "B. Cari nilai minimum\n";
    cout << "C. Cari nilai rata-rata\n";
    cout << " Pilihan Anda: ";
    cin >> choice;

    // Switch case untuk menampilkan hasil sesuai pilihan
    switch (choice) {
        case 'A':
        case 'a':
        cout << "Nilai maksimum: " << max << endl;
        break;
        case 'B':
        case 'b':
        cout << "Nilai minimum: " << min << endl;
        break;
        case 'C':
        case 'c':
        cout << "Nilai rata-rata: " << avg << endl;
        break;
        default:
        cout << "Pilihan tidak valid." << endl;
    }
    return 0;
}
```
#### Output:

### Nilai Maksimum
![240302_00h00m06s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/05a04837-6bd2-404c-af92-dc976a61f522)

### Nilai Minimum
![240302_00h00m06s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/81ab49ab-dd95-496f-9a9b-69aa82b8192f)

### Nilai Rata-Rata
![240302_00h00m06s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/38c756b7-3f8a-479e-b3db-d40d90c5d9ea)

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/Avriliaviananda/Praktikum-Struktur-Data-Assignment/assets/161323061/37695d34-592b-4a05-91f3-4fc22db05fca)

Program diatas merupakan program untuk mencari nilai maksimum minimum dan rata rata dari sebuah data array yang diinputkan oleh user,user memasukan jumlah elemen array terlebih dahulu, kemudian 
user menginputkan angka yang dibutuhkan, setelah sudah diinputkan akan muncul menu yang menggunakan switch case pilihan menunnya yaitu, mencari nilai maksimum,minimum,dan rata-rata.

## Kesimpulan
Kesimpulan dari array adalah array memiliki array satu dimensi array dua dimensi dan array tiga dimensi, array satu dimensi menggunakan perulangan 
satu kali, dua dimensi menggunakan perulangan dua kali, dan tiga dimensi menggunakan perulangan tiga kali, array tiga dimensi biasa digunakan untuk 
matriks. Array satu dimensi penomoran indexnya menggunakan satu angka,array dua dimensi penomoran indeksnya menggunakan dua angka dan array tiga dimensi penomoran indeksnya menggunakan tiga angka.  

## Referensi
[1] Afrizal Zein and Emi Sita Eriana., Algoritma dan Struktur Data, Tangerang Selatan: Unpam Press, 2022.

[2] Meidyan Permata Putri, et al., ALGORITMA DAN STRUKTUR DATA, Bandung : Widina Bhakti Persada Bandung, 2022.

[3] Zayid Musiafa., Struktur Data dan Implementasi Algoritma, Jakarta : Balai Pustaka, 2022.
