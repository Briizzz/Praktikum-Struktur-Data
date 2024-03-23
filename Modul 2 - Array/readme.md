# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori

Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemem array bertipe sama. Array cocok untuk organisasi kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal. Homogen adalah bahwa setiap elemen dari sebuah array tertentu haruslah mempunyai tipe data yang sama.

## GUIDED 1

1. Array Multidimensi

    Array multidimensi memiliki kesamaan dengan array satu dimensi dan
    dua dimensi, namun memiliki kapasitas memori yang lebih besar. Array ini
    digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau
    array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array
    empat dimensi, array lima dimensi, dan seterusnya.


CONTOH:
```cpp
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI 
int main ()
{
    // DEKLARASI ARRAY //
    int array[2][3][4];
    // INPUT ELEMEN 
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> array[x][y][z];
            }
        }
        cout << endl;
    }
    // output array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << array[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilam Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << array[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
## GUIDED 2
2. Program Mencari Nilai Maksimal pada Array

CONTOH
```cpp
#include <iostream>
using namespace std;

int main()
{
    // Deklarasi Variabel
    int maks, a, i = 1, lokasi;
    cout << "Masukkan Panjang array: ";
    cin >> a;
    int array[a];
    // Masukkan Data
    cout << "Masukkan " << a << "angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array [0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << " Nilai Maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```
## UNGUIDED
## Soal 1
1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang
diinputkan oleh user!
 Data Array : 1 2 3 4 5 6 7 8 9 10
 Nomor Genap : 2, 4, 6, 8, 10
 Nomor Ganjil : 1, 3, 5, 7, 9

## Jawaban
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> data;
    int input;
    std::cout << "Masukkan 10 angka secara berurutan:\n";
    for (int i = 0; i < 10; ++i) {
        std::cin >> input;
        data.push_back(input);
    }

    std::vector<int> genap, ganjil;
    for (int i = 0; i < data.size(); ++i) {
        if (data[i] % 2 == 0) {
            genap.push_back(data[i]);
        } else {
            ganjil.push_back(data[i]);
        }
    }

    std::cout << "Data Array :";
    for (int i = 0; i < data.size(); ++i) {
        std::cout << " " << data[i];
    }
    std::cout << "\nNomor Genap :";
    for (int i = 0; i < genap.size(); ++i) {
        std::cout << " " << genap[i];
    }
    std::cout << "\nNomor Ganjil :";
    for (int i = 0; i < ganjil.size(); ++i) {
        std::cout << " " << ganjil[i];
    }
    std::cout << std::endl;

    return 0;
}
```
Penjelasan kodingan:

Program di atas mengharuskan pengguna memasukkan 10 angka secara berurutan. Kemudian, program akan memisahkan angka-angka genap dan ganjil dari data yang dimasukkan.

-Pertama, program menggunakan vektor data untuk menyimpan angka-angka yang dimasukkan pengguna.

-Selanjutnya, program menggunakan vektor genap dan ganjil untuk menyimpan angka-angka genap dan ganjil secara terpisah.

-Program menggunakan loop for untuk mengiterasi melalui vektor data dan memeriksa apakah setiap angka genap atau ganjil. Jika genap, angka tersebut dimasukkan ke dalam vektor genap. Jika ganjil, angka tersebut dimasukkan ke dalam vektor ganjil.

-Setelah itu, program menampilkan data array yang dimasukkan pengguna, angka-angka genap, dan angka-angka ganjil sesuai format yang diminta.


## Soal 2
Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah
atau ukuran elemennya diinputkan oleh user!

## Jawaban

```cpp
#include <iostream>
#include <vector>

int main() {
    int x, y, z;
    std::cout << "Masukkan ukuran array tiga dimensi (x y z): ";
    std::cin >> x >> y >> z;

    std::vector<std::vector<std::vector<int>>> array3d(x, std::vector<std::vector<int>>(y, std::vector<int>(z)));

    std::cout << "Masukkan elemen array:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                std::cin >> array3d[i][j][k];
            }
        }
    }

    std::cout << "Array 3D yang dimasukkan:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                std::cout << array3d[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
```
## Soal 3
Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai
rata – rata dari suatu array dengan input yang dimasukan oleh user!

## Jawaban
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "Masukkan panjang array: ";
    cin >> n;

    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Cari nilai maksimum\n";
        cout << "2. Cari nilai minimum\n";
        cout << "3. Cari nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int max = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }
            cout << "Nilai maksimum: " << max << endl;
            break;
        }
        case 2: {
            int min = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] < min) {
                    min = arr[i];
                }
            }
            cout << "Nilai minimum: " << min << endl;
            break;
        }
        case 3: {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += arr[i];
            }
            double avg = static_cast<double>(sum) / n;
            cout << "Nilai rata-rata: " << avg << endl;
            break;
        }
        case 4:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid. Silakan pilih lagi.\n";
        }
    } while (choice != 4);

    return 0;
}
```
Penjelasan kodingan:
1. Deklarasi Array: Pertama, program mendeklarasikan array `arr` dengan ukuran maksimum 100 untuk menyimpan bilangan yang dimasukkan oleh pengguna. Variabel `n` digunakan untuk menyimpan panjang array yang akan dimasukkan oleh pengguna.

2. Input Array: Pengguna diminta untuk memasukkan panjang array (`n`) dan kemudian diminta untuk memasukkan `n` bilangan secara berurutan.

3. Menu Utama: Program memiliki loop `do-while` yang akan terus berjalan hingga pengguna memilih untuk keluar (pilihan 4).

4. Switch Case: Pada setiap iterasi loop, program akan menampilkan menu pilihan kepada pengguna. Berikut adalah penjelasan setiap pilihan:
   - Pilihan 1: Program akan mencari nilai maksimum dari array dengan melakukan iterasi melalui seluruh elemen array dan membandingkan dengan nilai maksimum yang saat ini tersimpan.
   - Pilihan 2: Program akan mencari nilai minimum dari array dengan melakukan iterasi melalui seluruh elemen array dan membandingkan dengan nilai minimum yang saat ini tersimpan.
   - Pilihan 3: Program akan menghitung nilai rata-rata dari array dengan menjumlahkan seluruh elemen array dan kemudian membaginya dengan panjang array.
   - Pilihan 4: Program akan keluar dari loop dan mengakhiri program.

5. Konversi Tipe Data: Saat menghitung rata-rata, hasil penjumlahan seluruh elemen array diubah menjadi tipe `double` terlebih dahulu untuk menghindari pembagian integer.

6. Perulangan: Program akan terus meminta pilihan menu hingga pengguna memilih untuk keluar (pilihan 4).

7. Penanganan Error: Program juga memiliki penanganan error sederhana untuk menanggapi pilihan yang tidak valid dari pengguna.

Dengan menggunakan program ini, pengguna dapat dengan mudah melakukan operasi pencarian nilai maksimum, minimum, dan rata-rata dari suatu array yang telah dimasukkan.

## Refrensi
[1]M. A. Pratama, “STRUKTUR DATA ARRAY DUA DIMENSI  PADA PEMROGRAMAN C++”, 29-Mar-2020. [Online]. Available: osf.io/vyech.