# <h1 align="center">Laporan Praktikum Modul "Queue"</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori

Queue adalah salah satu struktur data dasar dalam ilmu komputer yang mengikuti prinsip FIFO (First In First Out), yang berarti elemen pertama yang dimasukkan ke dalam queue adalah yang pertama kali dikeluarkan. Queue sering digunakan untuk memodelkan situasi di mana elemen-elemen harus diproses dalam urutan kedatangan mereka. 

Operasi utama pada queue adalah:

1. **Enqueue**: Menambahkan elemen baru ke dalam queue. Elemen ini akan ditempatkan di ujung belakang queue.
2. **Dequeue**: Menghapus elemen yang berada di ujung depan queue dan mengembalikan nilainya.

Queue juga sering memiliki operasi tambahan seperti:
- **Front**: Mendapatkan elemen yang berada di depan queue tanpa menghapusnya.
- **IsEmpty**: Memeriksa apakah queue kosong.
- **IsFull**: Memeriksa apakah queue penuh (pada implementasi queue dengan ukuran tertentu).

Queue dapat diimplementasikan menggunakan array atau linked list. Dalam implementasi dengan array, perlu diperhatikan penanganan saat queue penuh (overflow) atau kosong (underflow). Sedangkan dalam implementasi dengan linked list, penanganan overlow tidak perlu dipertimbangkan karena ukuran queue tidak terbatas.

Queue digunakan dalam berbagai aplikasi, seperti antrian pesan pada sistem komputer, simulasi, algoritma BFS (Breadth-First Search), dan lainnya. Konsep queue juga dapat diterapkan dalam situasi kehidupan nyata, seperti antrian pembayaran di kasir, antrian kendaraan di tol, atau bahkan antrian pesanan dalam restoran.

## GUIDED 1

```cpp
#include <iostream>

using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;

string queueTeller[5];

bool isFull() {
    if (back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian Penuh" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if (isEmpty()) {
        cout  << "Antrian masih kosong" << endl;
    } else {
        for  (int i = 0 ; i < back ; i++ )
            queueTeller[i] = "";
    }
    back = 0;
    front = 0;
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
   enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```

## UNGUIDED
## Soal 1
1.  Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list

## Jawaban
```cpp
#include <iostream>

using namespace std;

struct Node {
    string data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(string data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
        } else {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
        } else {
            Node* current = front;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }

    int countQueue() {
        int count = 0;
        Node* current = front;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }

    void clearQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue queue;
    queue.enqueue("Andi");
    queue.enqueue("Maya");
    queue.displayQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    queue.dequeue();
    queue.displayQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    queue.clearQueue();
    queue.displayQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    return 0;
}

```
Penjelasan kodingan:

Dalam implementasi ini, Node adalah simpul atau elemen tunggal dalam linked list, yang memiliki dua bagian: data (string) dan pointer ke simpul berikutnya. Kelas Queue memiliki dua pointer, yaitu front yang menunjukkan ke simpul depan dan rear yang menunjukkan ke simpul belakang dalam antrian. Metode enqueue, dequeue, isEmpty, countQueue, dan clearQueue digunakan untuk operasi dasar pada queue.


## Soal 2
2. Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIMMahasiswa

## Jawaban

```cpp
#include <iostream>
using namespace std;

struct Node {
    string nama;
    string nim;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

bool isEmpty() {
    return front == nullptr;
}

void enqueueAntrian(string nama, string nim) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = nullptr;
    if (isEmpty()) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

void viewQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        Node* current = front;
        int i = 1;
        while (current != nullptr) {
            cout << i << ". " << current->nama << " (" << current->nim << ")" << endl;
            current = current->next;
            i++;
        }
    }
}

int countQueue() {
    int count = 0;
    Node* current = front;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

void clearQueue() {
    while (!isEmpty()) {
        dequeueAntrian();
    }
}

int main() {
    enqueueAntrian("Andi", "12345");
    enqueueAntrian("Maya", "67890");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```

Penjelasan kodingan:

Implementasi antrian menggunakan linked list memiliki struktur data Node yang menyimpan informasi "Nama" dan "NIM" mahasiswa. Setiap Node memiliki pointer yang menunjuk ke Node berikutnya. Kelas Queue memiliki pointer ke Node depan (front) dan Node belakang (rear) dalam antrian. Metode `enqueue` digunakan untuk menambahkan data ke dalam antrian, `dequeue` untuk menghapus data dari antrian, `isEmpty` untuk memeriksa apakah antrian kosong, `countQueue` untuk menghitung jumlah elemen dalam antrian, dan `clearQueue` untuk menghapus semua elemen dalam antrian.

## Refrensi
[1] Johnson, R.L., "Design and Analysis of Queueing Systems," in IEEE Transactions on Computers, vol. C-25, no. 1, pp. 23-31, Jan. 1976.
[2] Katzela, I., "A Queue Management Strategy in the Multi-Service Environment," in IEEE Journal on Selected Areas in Communications, vol. 13, no. 6, pp. 1095-1105, Aug. 1995.
[3] Chen, T., "A Fast Wait-Free Queue for Multiprocessor Systems," in IEEE Transactions on Parallel and Distributed Systems, vol. 19, no. 5, pp. 603-615, May 2008.
[4] Akritidis, P., "Queue Mining on Large Networks," in IEEE Transactions on Knowledge and Data Engineering, vol. 24, no. 3, pp. 516-528, March 2012.
[5] Attiya, H., "A Generalized Optimistic Approach to Implementing Wait-Free Queues," in IEEE Transactions on Parallel and Distributed Systems, vol. 11, no. 5, pp. 542-553, May 2000.






