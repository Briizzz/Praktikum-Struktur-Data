# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori

Berikan penjelasan teori terkait materi modul ini dengan bahasa anda sendiri serta susunan yang terstruktur per topiknya.

## Soal 1
Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas.
Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari
materi tipe data primitif!

## Jawaban
Berikut adalah contoh program menggunakan tipe data primitif fungsi integer:

```cpp
#include <iostream>

int tambah(int a, int b) {
    return a + b;
}

int kali(int a, int b) {
    return a * b;
}

int main() {
    int angka1, angka2;
    std::cout << "Masukkan dua angka bulat: ";
    std::cin >> angka1 >> angka2;

    std::cout << "Hasil penjumlahan: " << tambah(angka1, angka2) << std::endl;
    std::cout << "Hasil perkalian: " << kali(angka1, angka2) << std::endl;

    return 0;
}
```

Program ini memiliki dua fungsi integer: `tambah` untuk menjumlahkan dua bilangan bulat, dan `kali` untuk mengalikan dua bilangan bulat. Program ini meminta pengguna memasukkan dua angka bulat, lalu menampilkan hasil penjumlahan dan perkalian dari kedua angka tersebut.

Kesimpulan dari materi tipe data primitif:
- Tipe data primitif seperti `int` digunakan untuk menyimpan nilai numerik.
- Fungsi integer dapat mengembalikan nilai hasil operasi matematika tertentu.
- Program-program dengan tipe data primitif cenderung lebih efisien dalam penggunaan memori dan eksekusi dibandingkan dengan program yang menggunakan tipe data kompleks.

## Soal 2
Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

## Jawaban
Class dan struct adalah dua konsep dasar dalam pemrograman berorientasi objek yang digunakan untuk membuat tipe data baru yang dapat menyimpan data dan fungsi-fungsi yang beroperasi pada data tersebut. Meskipun keduanya memiliki kesamaan, terdapat perbedaan utama dalam default aksesibilitas dan inheritance.

1. **Class**:
   - **Fungsi**: Class digunakan untuk membuat tipe data baru yang dapat menyimpan data dan fungsi-fungsi yang beroperasi pada data tersebut. Class juga mendukung konsep enkapsulasi, inheritance, dan polymorphism.
   - **Contoh Program**:

     ```cpp
     #include <iostream>
     using namespace std;

     // Class
     class Person {
     private:
         string name;
         int age;

     public:
         // Constructor
         Person(string n, int a) : name(n), age(a) {}

         // Member function
         void displayInfo() {
             cout << "Name: " << name << ", Age: " << age << endl;
         }
     };

     int main() {
         // Membuat objek dari class Person
         Person person1("John", 30);

         // Memanggil member function dari objek
         person1.displayInfo();

         return 0;
     }
     ```

2. **Struct**:
   - **Fungsi**: Struct juga digunakan untuk membuat tipe data baru yang dapat menyimpan data, tetapi tidak mendukung enkapsulasi, inheritance, dan polymorphism seperti class. Secara default, semua anggotanya adalah public.
   - **Contoh Program**:

     ```cpp
     #include <iostream>
     using namespace std;

     // Struct
     struct Person {
         string name;
         int age;
     };

     int main() {
         // Membuat objek dari struct Person
         Person person1 = {"John", 30};

         // Mengakses dan menampilkan anggota struct
         cout << "Name: " << person1.name << ", Age: " << person1.age << endl;

         return 0;
     }
     ```

Kesimpulan:
- Class dan struct adalah dua cara untuk mendefinisikan tipe data baru yang dapat menyimpan data dan fungsi-fungsi yang beroperasi pada data tersebut.
- Class mendukung konsep enkapsulasi, inheritance, dan polymorphism, sedangkan struct tidak.
- Penggunaan class atau struct tergantung pada kebutuhan dan kompleksitas program yang akan dibuat.

## Soal 3
Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari
array dengan map.

## Jawaban
Untuk menjelaskan perbedaan antara array dan map, pertama kita akan membuat program sederhana menggunakan fungsi map. Fungsi map digunakan untuk membuat kumpulan pasangan key-value, di mana setiap key unik dan terkait dengan satu nilai tertentu. 

Berikut adalah contoh program menggunakan fungsi map untuk menyimpan data mahasiswa berdasarkan nomor identitas (NIM) dan nama mereka:

```cpp
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Membuat map untuk menyimpan data mahasiswa (NIM sebagai key, nama sebagai value)
    map<int, string> mhs;

    // Menambahkan data mahasiswa ke dalam map
    mhs[101] = "Indra";
    mhs[102] = "Budi";
    mhs[103] = "Tom";

    // Mengakses dan menampilkan data mahasiswa
    cout << "Data Mahasiswa:\n";
    for (auto it = mhs.begin(); it != mhs.end(); ++it) {
        cout << "NIM: " << it->first << ", Nama: " << it->second << endl;
    }

    return 0;
}
```

Perbedaan antara array dan map:
1. **Penyimpanan**: Array adalah struktur data yang menyimpan elemen-elemennya secara berurutan dalam memori. Sedangkan map menggunakan struktur data yang lebih kompleks (biasanya menggunakan struktur data seperti pohon merah-hitam) yang memungkinkan pencarian efisien berdasarkan key.
2. **Indexing**: Array diakses menggunakan indeks berupa bilangan bulat yang dimulai dari 0. Sedangkan map diakses menggunakan key yang bisa berupa tipe data apa pun (selama tipe data tersebut dapat dibandingkan).
3. **Keunikan Key**: Setiap key pada map harus unik, sedangkan pada array, indeks dapat berulang.
4. **Ukuran**: Array memiliki ukuran yang tetap dan harus didefinisikan pada saat deklarasi, sedangkan map dapat menyesuaikan ukurannya secara dinamis dengan menambah atau menghapus pasangan key-value.

Jadi, meskipun keduanya dapat digunakan untuk menyimpan data, pemilihan antara array dan map tergantung pada kebutuhan program dan jenis operasi yang akan dilakukan pada data tersebut.
