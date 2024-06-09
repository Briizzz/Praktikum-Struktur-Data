#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Node {
public:
    string nama;
    vector<Node*> anak;

    Node(string n) : nama(n) {}
};

void tambahAnak(Node* induk, Node* anak) {
    induk->anak.push_back(anak);
}

void tampilkanAnak(Node* node) {
    if (node->anak.empty()) {
        cout << node->nama << " tidak memiliki anak." << endl;
    } else {
        cout << "Anak-anak dari " << node->nama << ": ";
        for (const auto& anak : node->anak) {
            cout << anak->nama << " ";
        }
        cout << endl;
    }
}

void tampilkanKeturunan(Node* node, vector<string>& keturunan) {
    for (const auto& anak : node->anak) {
        keturunan.push_back(anak->nama);
        tampilkanKeturunan(anak, keturunan);
    }
}

void menuPohon() {
    unordered_map<string, Node*> nodes;
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah simpul\n";
        cout << "2. Tambah anak\n";
        cout << "3. Tampilkan anak dari simpul\n";
        cout << "4. Tampilkan keturunan dari simpul\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        if (pilihan == 1) {
            string nama;
            cout << "Masukkan nama simpul: ";
            cin >> nama;
            nodes[nama] = new Node(nama);
        } else if (pilihan == 2) {
            string namaInduk, namaAnak;
            cout << "Masukkan nama simpul induk: ";
            cin >> namaInduk;
            cout << "Masukkan nama simpul anak: ";
            cin >> namaAnak;
            if (nodes.find(namaInduk) != nodes.end() && nodes.find(namaAnak) != nodes.end()) {
                tambahAnak(nodes[namaInduk], nodes[namaAnak]);
            } else {
                cout << "Salah satu atau kedua simpul tidak ditemukan!" << endl;
            }
        } else if (pilihan == 3) {
            string nama;
            cout << "Masukkan nama simpul untuk menampilkan anak-anak: ";
            cin >> nama;
            if (nodes.find(nama) != nodes.end()) {
                tampilkanAnak(nodes[nama]);
            } else {
                cout << "Simpul tidak ditemukan!" << endl;
            }
        } else if (pilihan == 4) {
            string nama;
            cout << "Masukkan nama simpul untuk menampilkan keturunan: ";
            cin >> nama;
            if (nodes.find(nama) != nodes.end()) {
                vector<string> keturunan;
                tampilkanKeturunan(nodes[nama], keturunan);
                cout << "Keturunan dari " << nama << ": ";
                for (const auto& k : keturunan) {
                    cout << k << " ";
                }
                cout << endl;
            } else {
                cout << "Simpul tidak ditemukan!" << endl;
            }
        } else if (pilihan != 5) {
            cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (pilihan != 5);

    // Menghapus node untuk menghindari kebocoran memori
    for (auto& pair : nodes) {
        delete pair.second;
    }
}

int main() {
    menuPohon();
    return 0;
}