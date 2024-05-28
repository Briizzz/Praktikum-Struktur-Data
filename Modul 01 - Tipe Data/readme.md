# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori

Tipe data adalah suatu klasifikasi yang mengidentifikasi tipe sebuah data dan setiap tipe data memiliki operasi yang berbeda. Tipe data dibagi menjadi dua kategori: tipe data primitif dan tipe data referensi. Tipe data primitif adalah tipe data yang mempunyai nilai tertentu, bukan referensi class ataupun objek. Semua nilai dalam Java adalah referensi terhadap objek[2].
	
Tipe data string ini sering dianggap sebagai tipe data dasar yang berupa kumpulan karakter dengan panjang tertentu[2]. Tipe data float adalah contoh tipe data numerik yang memiliki nilai tertentu[2]. Tipe data array adalah tipe data composite yang dapat menyimpan data yang tersimpan dalam tipe data lain[3]. Tipe data tertinggi adalah tipe data array multi-dimensi, yang dapat menyimpan data dalam bentuk tabel[3]. Selanjutnya adaTipe data subrange.  Tipe data subrange adalah tipe data yang merupakan bagian dari tipe data lain dengan jangkauan nilai tertentu. Subrange digunakan untuk membatasi nilai yang dapat dimasukkan ke dalam variabel, tidak untuk tipe data real, tapi untuk semua tipe ordinal. Subrange dapat dibuat dari tipe data enumerated untuk menciptakan tipe data yang lebih kompleks[1].

Tipe data dibutuhkan agar kompiler dapat mengetahui bagaimana sebuah data akan digunakan[5]. Tipe data memiliki macam-macam model yang memiliki fungsi berbeda-beda, seperti tipe array, record/struct, image, time, dan enum[4]. Tipe data primitive adalah tipe data yang mempunyai nilai tertentu, bukan referensi class ataupun objek[3]. 

Jenis-jenis tipe data ini digunakan untuk menentukan jenis nilai yang dimiliki variabel dan mengatur operasi yang dapat dilakukan pada data tersebut.


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
Penjelasan kodingan:

Kodingan di atas adalah contoh program sederhana dalam C++ yang melakukan operasi penjumlahan dan perkalian dua angka bulat yang dimasukkan oleh pengguna. Berikut adalah penjelasannya:

1. `#include <iostream>`: Meng-include library `<iostream>` yang digunakan untuk input dan output dalam program C++.

2. `int tambah(int a, int b) { ... }`: Mendefinisikan fungsi `tambah` yang menerima dua parameter `a` dan `b` bertipe `int` dan mengembalikan hasil penjumlahan dari kedua parameter tersebut.

3. `int kali(int a, int b) { ... }`: Mendefinisikan fungsi `kali` yang menerima dua parameter `a` dan `b` bertipe `int` dan mengembalikan hasil perkalian dari kedua parameter tersebut.

4. `int main() { ... }`: Fungsi utama dari program C++. Semua kode program dieksekusi di dalam fungsi `main`.

5. `int angka1, angka2;`: Mendeklarasikan dua variabel `angka1` dan `angka2` bertipe `int` untuk menyimpan angka yang dimasukkan oleh pengguna.

6. `std::cout << "Masukkan dua angka bulat: ";`: Menggunakan `std::cout` (console output) untuk menampilkan pesan "Masukkan dua angka bulat: " ke layar.

7. `std::cin >> angka1 >> angka2;`: Menggunakan `std::cin` (console input) untuk mengambil dua angka yang dimasukkan oleh pengguna dan menyimpannya ke dalam variabel `angka1` dan `angka2`.

8. `std::cout << "Hasil penjumlahan: " << tambah(angka1, angka2) << std::endl;`: Menampilkan hasil penjumlahan dari `angka1` dan `angka2` dengan memanggil fungsi `tambah` dan menggunakan `std::cout` untuk menampilkan hasilnya.

9. `std::cout << "Hasil perkalian: " << kali(angka1, angka2) << std::endl;`: Menampilkan hasil perkalian dari `angka1` dan `angka2` dengan memanggil fungsi `kali` dan menggunakan `std::cout` untuk menampilkan hasilnya.

10. `return 0;`: Mengembalikan nilai `0` sebagai tanda bahwa program telah berakhir dengan sukses.

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

Penjelasan Kodingan:
     
Kodingan di atas adalah contoh penggunaan class dalam C++. Class digunakan untuk membuat tipe data baru yang dapat memiliki data (variabel) dan fungsi (member function) yang terkait. Berikut adalah penjelasannya:

1. `#include <iostream>`: Meng-include library `<iostream>` yang digunakan untuk input dan output dalam program C++.

2. `using namespace std;`: Menggunakan namespace `std` agar tidak perlu menuliskan `std::` sebelum penggunaan fungsi atau objek dari namespace `std`.

3. `class Person { ... };`: Mendefinisikan class `Person` yang memiliki dua variabel private (`name` bertipe `string` dan `age` bertipe `int`) dan satu constructor dan satu member function public.

4. `private:`: Bagian dari class yang mendefinisikan variabel atau fungsi yang hanya dapat diakses dari dalam class tersebut.

5. `public:`: Bagian dari class yang mendefinisikan variabel atau fungsi yang dapat diakses dari luar class.

6. `Person(string n, int a) : name(n), age(a) {}`: Mendefinisikan constructor untuk class `Person` yang menerima dua parameter (`n` bertipe `string` dan `a` bertipe `int`) dan menginisialisasi variabel `name` dan `age` dengan nilai parameter.

7. `void displayInfo() { ... }`: Mendefinisikan member function `displayInfo` yang tidak mengembalikan nilai (`void`) dan digunakan untuk menampilkan informasi tentang objek `Person`.

8. `cout << "Name: " << name << ", Age: " << age << endl;`: Baris ini digunakan dalam member function `displayInfo` untuk menampilkan informasi tentang objek `Person` yang dipanggil.

9. `int main() { ... }`: Fungsi utama dari program C++. Semua kode program dieksekusi di dalam fungsi `main`.

10. `Person person1("John", 30);`: Membuat objek `person1` dari class `Person` dengan nama "John" dan umur 30 tahun.

11. `person1.displayInfo();`: Memanggil member function `displayInfo` dari objek `person1` untuk menampilkan informasi tentang objek tersebut.

12. `return 0;`: Mengembalikan nilai `0` sebagai tanda bahwa program telah berakhir dengan sukses.

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

Penjelasan kodingan:

 Kodingan di atas adalah contoh penggunaan `struct` dalam C++. `struct` digunakan untuk membuat tipe data baru yang dapat menyimpan beberapa tipe data lainnya. Berikut adalah penjelasannya:

1. `#include <iostream>`: Meng-include library `<iostream>` yang digunakan untuk input dan output dalam program C++.

2. `using namespace std;`: Menggunakan namespace `std` agar tidak perlu menuliskan `std::` sebelum penggunaan fungsi atau objek dari namespace `std`.

3. `struct Person { ... };`: Mendefinisikan sebuah `struct` dengan nama `Person` yang memiliki dua anggota, yaitu `name` (bertipe `string`) dan `age` (bertipe `int`).

4. `int main() { ... }`: Fungsi utama dari program C++. Semua kode program dieksekusi di dalam fungsi `main`.

5. `Person person1 = {"John", 30};`: Membuat objek `person1` dari tipe `Person` dan menginisialisasinya dengan nilai `"John"` untuk `name` dan `30` untuk `age`.

6. `cout << "Name: " << person1.name << ", Age: " << person1.age << endl;`: Menggunakan `cout` (console output) untuk menampilkan data yang disimpan dalam objek `person1`. Data yang ditampilkan adalah `name` dan `age` dari objek `person1`.

7. `return 0;`: Mengembalikan nilai `0` sebagai tanda bahwa program telah berakhir dengan sukses.

Dengan demikian, kodingan di atas adalah contoh penggunaan `struct` untuk membuat tipe data baru yang dapat menyimpan beberapa nilai sekaligus dalam bahasa pemrograman C++.

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
Penjelasan kodingan:
1. Include Library: Program dimulai dengan meng-include tiga library standar yaitu <iostream>, <map>, dan <string>. Library <iostream> digunakan untuk input dan output, <map> digunakan untuk menggunakan struktur data map, dan <string> digunakan untuk menggunakan tipe data string.

2. Namespace: using namespace std; digunakan untuk menggunakan namespace std sehingga kita tidak perlu menuliskan std:: sebelum setiap penggunaan fungsi atau objek dari namespace std.

3. Fungsi main(): Fungsi utama dari program C++. Program dimulai dari fungsi main() dan di dalamnya terdapat beberapa langkah:

    a. Deklarasi Map: Membuat objek mhs dari tipe map<int, string>, yang artinya mhs adalah sebuah map yang menggunakan tipe data int sebagai key (NIM) dan tipe data string sebagai value (nama mahasiswa).

    b. Menambahkan Data Mahasiswa: Menambahkan data mahasiswa ke dalam map mhs menggunakan operator []. Setiap NIM digunakan sebagai key untuk menyimpan nama mahasiswa sebagai value. Contohnya, mhs[101] = "Indra"; menambahkan data mahasiswa dengan NIM 101 dan nama "Indra" ke dalam map.

    c. Menampilkan Data Mahasiswa: Menggunakan loop for untuk mengakses dan menampilkan data mahasiswa yang telah disimpan dalam map. Dalam loop ini, iterator it digunakan untuk mengakses elemen-elemen map. Untuk setiap elemen, NIM dan nama mahasiswa ditampilkan menggunakan it->first dan it->second.

4. Return 0: Mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

Perbedaan antara array dan map:
1. **Penyimpanan**: Array adalah struktur data yang menyimpan elemen-elemennya secara berurutan dalam memori. Sedangkan map menggunakan struktur data yang lebih kompleks (biasanya menggunakan struktur data seperti pohon merah-hitam) yang memungkinkan pencarian efisien berdasarkan key.
2. **Indexing**: Array diakses menggunakan indeks berupa bilangan bulat yang dimulai dari 0. Sedangkan map diakses menggunakan key yang bisa berupa tipe data apa pun (selama tipe data tersebut dapat dibandingkan).
3. **Keunikan Key**: Setiap key pada map harus unik, sedangkan pada array, indeks dapat berulang.
4. **Ukuran**: Array memiliki ukuran yang tetap dan harus didefinisikan pada saat deklarasi, sedangkan map dapat menyesuaikan ukurannya secara dinamis dengan menambah atau menghapus pasangan key-value.

Jadi, meskipun keduanya dapat digunakan untuk menyimpan data, pemilihan antara array dan map tergantung pada kebutuhan program dan jenis operasi yang akan dilakukan pada data tersebut.

## Refrensi
[1] M. R. SAFEI, “PENGERTIAN TIPE DATA SUBJANGKAUAN”, 14-Apr-2019. [Online]. Available: osf.io/2ky3a.

[2] Puspatiningtyas.O.K, Laporan Dasar Pemrograman TIPE DATA, Hal 1-2. 2019.

[3] Nanda.R.D, “Algoritma, Tipe Data dan Struktur Data”, Hal 2-5, 2-2022

[4] Silvia.A, IDENTIFIER, TIPE DATA, VARIABEL, KONSTANTA, EKSPRESI, NILAI, Hal 5-10, April 2021.