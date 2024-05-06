# <h1 align="center">Laporan Praktikum Modul "Stack"</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori

Stack adalah struktur data yang mengikuti prinsip LIFO (Last In, First Out), yang berarti elemen terakhir yang dimasukkan ke dalam stack akan menjadi elemen pertama yang keluar dari stack. Operasi dasar pada stack meliputi:

1. **Push**: Menambahkan elemen ke dalam stack.
2. **Pop**: Menghapus elemen paling atas dari stack.
3. **Top**: Mengakses elemen paling atas dari stack tanpa menghapusnya.
4. **IsEmpty**: Memeriksa apakah stack kosong.
5. **IsFull** (pada implementasi stack dengan ukuran terbatas): Memeriksa apakah stack penuh.

Stack dapat diimplementasikan menggunakan berbagai struktur data dasar seperti array atau linked list. Stack digunakan dalam berbagai aplikasi, termasuk dalam implementasi rekursi, evaluasi ekspresi aritmatika, parsing (pemrosesan) notasi postfix (berlawanan dengan notasi infix yang umumnya digunakan dalam penulisan matematika), dan manajemen memori pada komputer.
## GUIDED 1

```cpp
#include <iostream>
using namespace std;

const int maksimal = 5;
string arrayBuku[maksimal];
int top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top++] = data;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[--top] = "";
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else if (posisi <= top) {
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[top - posisi] << endl;
    } else {
        cout << "Posisi melebihi data yang ada" << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi <= top) {
        arrayBuku[top - posisi] = data;
    } else {
        cout << "Posisi melebihi data yang ada" << endl;
    }
}

void destroyArraybuku() {
    while (!isEmpty()) {
        popArrayBuku();
    }
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();

    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;

    cetakArrayBuku();

    return 0;
}

```

## UNGUIDED
## Soal 1
1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.
 


## Jawaban
```cpp
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> s;
    for (char c : kalimat) {
        s.push(c);
    }
    string reversed;
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }
    return kalimat == reversed;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    cin >> kalimat;
    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }
}
```
Penjelasan kodingan:

Cara kerja program:

1. Program meminta user untuk memasukkan sebuah kalimat.
2. Setiap karakter dari kalimat yang diinput akan dimasukkan ke dalam stack.
3. Setelah semua karakter dimasukkan ke dalam stack, program akan mengambil satu per satu karakter dari stack dan menyatukan menjadi sebuah string baru.
4. Program membandingkan kalimat asli dengan kalimat yang dibalikkan.
5. Jika kedua kalimat tersebut sama, maka program akan menampilkan "Kalimat tersebut adalah palindrom."
6. Jika tidak, maka program akan menampilkan "Kalimat tersebut bukan palindrom."


## Soal 2
2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat?

## Jawaban

```cpp
#include <iostream>
#include <stack>
#include <string>

using namespace std;

void reverseWords(string& kalimat) {
    stack<string> s;
    string word;
    int start = 0;
    for (int i = 0; i <= kalimat.length(); i++) {
        if (kalimat[i] == ' ' || i == kalimat.length()) {
            word = kalimat.substr(start, i - start);
            s.push(word);
            start = i + 1;
        }
    }
    kalimat = "";
    while (!s.empty()) {
        kalimat += s.top() + " ";
        s.pop();
    }
}

int main() {
    string kalimat = "satu dua tiga";
    cout << "Kalimat asli: " << kalimat << endl;
    reverseWords(kalimat);
    cout << "Kalimat setelah dibalikkan: " << kalimat << endl;
}
```

Penjelasan kodingan:

Program di atas menggunakan struktur data stack untuk menyimpan kata-kata dari kalimat yang diinput. Kemudian, program akan membalikkan urutan kata-kata tersebut.

Cara kerja program:

1. Program meminta user untuk memasukkan sebuah kalimat.
2. Setiap kata dari kalimat yang diinput akan dimasukkan ke dalam stack.
3. Setelah semua kata dimasukkan ke dalam stack, program akan mengambil satu per satu kata dari stack dan menyatukan menjadi sebuah kalimat baru.
4. Program akan menampilkan kalimat asli dan kalimat yang telah dibalikkan.

## Refrensi
[1] A. V. Aho, J. E. Hopcroft, and J. D. Ullman, "The Design and Analysis of Computer Algorithms," Addison-Wesley, 1974.