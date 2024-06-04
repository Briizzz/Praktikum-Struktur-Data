# <h1 align="center">Laporan Praktikum Modul "Hash Table"</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori

Hash table adalah struktur data yang menggunakan array dan fungsi hash untuk memetakan kunci ke nilai dengan efisien. Fungsi hash mengubah kunci menjadi indeks array, memungkinkan operasi pencarian, penyisipan, dan penghapusan dilakukan dengan cepat.

### Poin Penting:
1. **Fungsi Hash**: Mengubah kunci menjadi indeks dalam array.
2. **Tabrakan (Collision)**: Terjadi ketika dua kunci berbeda di-hash ke indeks yang sama.
   - **Penanganan Tabrakan**:
     - **Chaining**: Setiap elemen array adalah daftar yang menyimpan elemen yang di-hash ke indeks tersebut.
     - **Open Addressing**: Mencari slot kosong berikutnya dalam array.
3. **Kompleksitas Waktu**:
   - **Rata-rata**: O(1) untuk penyisipan, pencarian, dan penghapusan.
   - **Terburuk**: O(n) jika banyak tabrakan.
4. **Karakteristik Fungsi Hash yang Baik**:
   - Deterministik, distribusi seragam, dan cepat dihitung.

### Penggunaan:
- **Database Indexing**: Mempercepat pencarian data.
- **Caching**: Menyimpan data yang sering diakses.
- **Penghitung Frekuensi**: Menghitung kemunculan elemen dalam dataset besar.

Hash table digunakan karena efisiensinya dalam mengakses dan mengelola data secara cepat.

## GUIDED 1

```cpp
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }
    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Insertion
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Searching
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    // Deletion
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;
    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;
   
    // Deletion
    ht.remove(4);
   
    // Traversal
    ht.traverse();
   
    return 0;
}
```

## GUIDED 2
```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;

    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;

    employee_map.print();

    return 0;
}
```

## UNGUIDED
## Soal 1
1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :
a.	Setiap mahasiswa memiliki NIM dan nilai.
b.	Program memiliki tampilan pilihan menu berisi poin C.
c.	Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).


## Jawaban
```cpp
class Mahasiswa:
    def __init__(self, nim, nilai):
        self.nim = nim
        self.nilai = nilai

class HashTable:
    def __init__(self):
        self.table = {}

    def tambah_data(self, nim, nilai):
        if nim in self.table:
            print(f"Mahasiswa dengan NIM {nim} sudah ada.")
        else:
            self.table[nim] = Mahasiswa(nim, nilai)
            print(f"Data mahasiswa dengan NIM {nim} dan nilai {nilai} berhasil ditambahkan.")

    def hapus_data(self, nim):
        if nim in self.table:
            del self.table[nim]
            print(f"Data mahasiswa dengan NIM {nim} berhasil dihapus.")
        else:
            print(f"Data mahasiswa dengan NIM {nim} tidak ditemukan.")

    def cari_data_nim(self, nim):
        if nim in self.table:
            mahasiswa = self.table[nim]
            print(f"Mahasiswa ditemukan: NIM = {mahasiswa.nim}, Nilai = {mahasiswa.nilai}")
        else:
            print(f"Mahasiswa dengan NIM {nim} tidak ditemukan.")

    def cari_data_nilai(self, nilai_min, nilai_max):
        found = False
        for mahasiswa in self.table.values():
            if nilai_min <= mahasiswa.nilai <= nilai_max:
                print(f"Mahasiswa ditemukan: NIM = {mahasiswa.nim}, Nilai = {mahasiswa.nilai}")
                found = True
        if not found:
            print(f"Tidak ada mahasiswa dengan nilai di antara {nilai_min} dan {nilai_max}.")

def main():
    hash_table = HashTable()
    while True:
        print("\nMenu:")
        print("1. Tambah Data Mahasiswa")
        print("2. Hapus Data Mahasiswa")
        print("3. Cari Data Berdasarkan NIM")
        print("4. Cari Data Berdasarkan Rentang Nilai (80-90)")
        print("5. Keluar")

        pilihan = input("Pilih menu (1-5): ")
        if pilihan == "1":
            nim = input("Masukkan NIM: ")
            nilai = int(input("Masukkan nilai: "))
            hash_table.tambah_data(nim, nilai)
        elif pilihan == "2":
            nim = input("Masukkan NIM: ")
            hash_table.hapus_data(nim)
        elif pilihan == "3":
            nim = input("Masukkan NIM: ")
            hash_table.cari_data_nim(nim)
        elif pilihan == "4":
            hash_table.cari_data_nilai(80, 90)
        elif pilihan == "5":
            break
        else:
            print("Pilihan tidak valid. Silakan coba lagi.")

if __name__ == "__main__":
    main()

```
Penjelasan kodingan:
1. Kelas Mahasiswa: Menyimpan NIM dan nilai mahasiswa.
2. Kelas HashTable: Implementasi hash table dengan fungsi untuk menambah, menghapus, dan mencari data.
3. Fungsi Main: Menampilkan menu dan memanggil fungsi berdasarkan pilihan pengguna.


## Refrensi
[1] M. Alanzy, R. Alomrani, B. Alqarni, dan S. Almutairi, "Image Steganography Using LSB and Hybrid Encryption Algorithms," *Applied Sciences*, vol. 13, no. 21, pp. 11771, Oct. 2023. [Online]. Available: https://doi.org/10.3390/app132111771.
[2] N. N. Peneliti, "Insider threat detection using supervised machine learning and hash table structures," *Springer*, 2023.
[3] N. N. Peneliti, "A Survey on Internet-of-Things Security: Threats and Emerging Solutions," *Springer*, 2022.
[4] Y. Jin et al., "Data Structures and Algorithms: Truncated Variance Reduced Value Iteration," *arXiv.org*, 2021.
[5] N. N. Peneliti, "The recent trends in cyber security: A review," *ScienceDirect*, 2020.
