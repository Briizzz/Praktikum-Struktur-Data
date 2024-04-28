#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    Mahasiswa* next;
};

void tambahDepan(Mahasiswa*& head, string nama, string nim) {
    Mahasiswa* baru = new Mahasiswa;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = head;
    head = baru;
}

void tambahTengah(Mahasiswa*& head, string nama, string nim, int posisi) {
    Mahasiswa* current = head;
    Mahasiswa* prev = NULL;
    Mahasiswa* baru = new Mahasiswa;
    baru->nama = nama;
    baru->nim = nim;
    int i = 1;
    while (current!= NULL && i < posisi) {
        prev = current;
        current = current->next;
        i++;
    }
    if (current == NULL) {
        cout << "Posisi tidak ditemukan" << endl;
        return;
    }
    baru->next = current;
    prev->next = baru;
}

void tambahBelakang(Mahasiswa*& head, string nama, string nim) {
    Mahasiswa* current = head;
    Mahasiswa* baru = new Mahasiswa;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;
    if (head == NULL) {
        head = baru;
        return;
    }
    while (current->next!= NULL) {
        current = current->next;
    }
    current->next = baru;
}

void ubahDepan(Mahasiswa*& head, string nama, string nim) {
    if (head == NULL) {
        cout << "List kosong" << endl;
        return;
    }
    head->nama = nama;
    head->nim = nim;
}

void ubahTengah(Mahasiswa*& head, string nama, string nim, int posisi) {
    Mahasiswa* current = head;
    Mahasiswa* prev = NULL;
    int i = 1;
    while (current!= NULL && i < posisi) {
        prev = current;
        current = current->next;
        i++;
    }
    if (current == NULL) {
        cout << "Posisi tidak ditemukan" << endl;
        return;
    }
    current->nama = nama;
    current->nim = nim;
}

void ubahBelakang(Mahasiswa*& head, string nama, string nim) {
    Mahasiswa* current = head;
    while (current->next!= NULL) {
        current = current->next;
    }
    current->nama = nama;
    current->nim = nim;
}

void hapusDepan(Mahasiswa*& head) {
    if (head == NULL) {
        cout << "List kosong" << endl;
        return;
    }
    Mahasiswa* temp = head;
    head = head->next;
    delete temp;
}

void hapusTengah(Mahasiswa*& head, int posisi) {
    Mahasiswa* current = head;
    Mahasiswa* prev = NULL;
    int i = 1;
    while (current!= NULL && i < posisi) {
        prev = current;
        current = current->next;
        i++;
    }
    if (current == NULL) {
        cout << "Posisi tidak ditemukan" << endl;
        return;
    }
    prev->next = current->next;
    delete current;
}

void hapusBelakang(Mahasiswa*& head) {
    if (head == NULL) {
        cout << "List kosong" << endl;
        return;
    }
    Mahasiswa* current = head;
    Mahasiswa* prev = NULL;
    while (current->next!= NULL) {
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    delete current;
}

void hapusList(Mahasiswa*& head) {
    while (head!= NULL) {
        Mahasiswa* temp = head;
        head = head->next;
        delete temp;
    }
}

void tampilData(Mahasiswa* head) {
    Mahasiswa* current = head;
    int i = 1;
    while (current!= NULL) {
        cout << i << ". Nama: " << current->nama << ", NIM: " << current->nim << endl;
        current = current->next;
        i++;
    }
}

int main() {
    Mahasiswa* head = NULL;
    int pilihan;
    string nama, nim;
    int posisi;

    while (true) {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. TAMPILKAN" << endl;
        cout << "0. KELUAR" << endl;
        cout << "Pilih Operasi : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                tambahDepan(head, nama, nim);
                break;
            case 2:
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                tambahBelakang(head, nama, nim);
                break;
            case 3:
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                tambahTengah(head, nama, nim, posisi);
                break;
            case 4:
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                ubahDepan(head, nama, nim);
                break;
            case 5:
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                ubahTengah(head, nama, nim, posisi);
                break;
            case 6:
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                ubahBelakang(head, nama, nim);
                break;
            case 7:
                hapusDepan(head);
                break;
            case 8:
                hapusBelakang(head);
                break;
            case 9:
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                hapusTengah(head, posisi);
                break;
            case 10:
                hapusList(head);
                break;
            case 11:
                tampilData(head);
                break;
            case 0:
                return 0;
            default:
                cout << "Pilih operasi yang tersedia!" << endl;
                break;
        }
    }

    return 0;
}