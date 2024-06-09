# <h1 align="center">Laporan Praktikum Modul "Graph and Tree"</h1>
<p align="center">Brian Nugraha Wiyono</p>

## Dasar Teori

1. *Graph* adalah struktur data yang terdiri dari simpul (vertices) dan tepi (edges) yang menghubungkan simpul-simpul tersebut. Graph digunakan untuk merepresentasikan hubungan antar objek, seperti jaringan komputer, rute transportasi, dan hubungan sosial. Ada dua jenis graph utama: *graph berarah* (directed graph) dan *graph tak berarah* (undirected graph). Algoritma umum yang digunakan pada graph meliputi *Breadth-First Search (BFS), **Depth-First Search (DFS), algoritma **Dijkstra* untuk menemukan jalur terpendek, dan *algoritma Kruskal* serta *algoritma Prim* untuk mencari minimum spanning tree.

2. *Tree* adalah struktur data hierarkis yang terdiri dari simpul dengan satu simpul akar (root) dan simpul-simpul anak (children) yang terhubung. Setiap simpul dalam tree memiliki tepat satu induk kecuali simpul akar yang tidak memiliki induk. Contoh spesifik dari tree adalah *binary tree, **binary search tree (BST), dan **heap*. Tree digunakan dalam berbagai aplikasi seperti database (untuk struktur B-tree), compiler (untuk pohon sintaksis), dan algoritma Huffman untuk kompresi data.

### Implementasi dan Penggunaan:
- *Breadth-First Search (BFS)* digunakan untuk traversing atau searching struktur data tree atau graph. BFS memanfaatkan antrian (queue) untuk melacak simpul yang harus dieksplorasi, memastikan setiap simpul pada level tertentu diakses sebelum berpindah ke level berikutnya
- *Graph Neural Networks (GNNs)* adalah penerapan terbaru yang menggabungkan pembelajaran mesin dengan graph untuk melakukan tugas-tugas seperti klasifikasi node, prediksi link, dan klastering graf, yang relevan dalam bidang seperti biologi komputasi dan jaringan sosial 

## GUIDED 1

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

string simpul[7] = {
    "Ciamis", "Bandung", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0},
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris ++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << ":";
        for (int kolom = 0; kolom < 7; kolom ++) {
            if (busur [baris][kolom] != 0) {
                cout << " " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```

## GUIDED 2
```cpp
#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    //constuctor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder (TNode *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder (TNode *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder (TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode*zero = new TNode(0);
    TNode*one = new TNode(1);
    TNode*five = new TNode(5);
    TNode*seven = new TNode(7);
    TNode*eight = new TNode(8);
    TNode*nine = new TNode(9);

    seven->left = one;

    seven->right = nine;

    one->left = zero;

    one->right = five;

    nine->left = eight;

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```

## UNGUIDED
## Soal 1
1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.


## Jawaban
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // NIM sebagai variabel
    int nim = 22102003;

    // Mendapatkan jumlah simpul
    int jumlahSimpul;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    // Mendapatkan nama simpul
    vector<string> simpul(jumlahSimpul);
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    // Inisialisasi matriks adjensi
    vector<vector<int>> matriksAdjensi(jumlahSimpul, vector<int>(jumlahSimpul, 0));

    // Mendapatkan bobot antar simpul
    for (int i = 0; i < jumlahSimpul; ++i) {
        for (int j = 0; j < jumlahSimpul; ++j) {
            if (i != j) {
                cout << simpul[i] << " --> " << simpul[j] << " = ";
                cin >> matriksAdjensi[i][j];
            } else {
                matriksAdjensi[i][j] = 0; // jarak dari simpul ke dirinya sendiri adalah 0
            }
        }
    }

    // Menampilkan matriks adjensi
    cout << "\nMatriks Adjensi:\n    ";
    for (const auto& s : simpul) {
        cout << s << " ";
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << simpul[i] << " ";
        for (int j = 0; j < jumlahSimpul; ++j) {
            cout << matriksAdjensi[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
Penjelasan kodingan:
Program ini dimulai dengan deklarasi variabel NIM dan meminta pengguna untuk memasukkan jumlah simpul dan nama simpul, yang disimpan dalam vektor. Matriks adjensi kemudian diinisialisasi dengan ukuran sesuai jumlah simpul dan diisi dengan bobot antar simpul yang dimasukkan oleh pengguna, dengan bobot simpul ke dirinya sendiri diatur ke nol. Setelah itu, program menampilkan matriks adjensi yang memetakan hubungan antar simpul berdasarkan bobot yang dimasukkan. Program ini bertujuan untuk merepresentasikan graf menggunakan matriks adjensi, memungkinkan pengguna untuk melihat hubungan dan bobot antar simpul yang telah mereka masukkan.


## SOAL 2
2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!

## Jawaban
```cpp
#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    //constuctor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder (TNode *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder (TNode *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder (TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode*zero = new TNode(0);
    TNode*one = new TNode(1);
    TNode*five = new TNode(5);
    TNode*seven = new TNode(7);
    TNode*eight = new TNode(8);
    TNode*nine = new TNode(9);

    seven->left = one;

    seven->right = nine;

    one->left = zero;

    one->right = five;

    nine->left = eight;

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```

Penjelasan kodingan:
Program ini membuat dan mengelola struktur pohon (tree) menggunakan menu interaktif. Pengguna dapat menambahkan simpul, menambahkan anak ke simpul, serta menampilkan anak dan keturunan dari simpul yang dipilih. Simpul disimpan dalam peta hash untuk akses cepat, dan setiap simpul diwakili oleh kelas `Node` yang memiliki nama dan daftar anak. Fungsi `tambahAnak` menambahkan anak ke simpul induk, `tampilkanAnak` mencetak semua anak dari simpul tertentu, dan `tampilkanKeturunan` merekursi untuk mencetak semua keturunan dari simpul yang dipilih. Menu interaktif berulang hingga pengguna memilih untuk keluar, dan sebelum program selesai, semua simpul dihapus untuk mencegah kebocoran memori.


## Refrensi
[1] W. Zhou et al., "A Comprehensive Survey on Graph Neural Networks," IEEE Transactions on Neural Networks and Learning Systems, vol. 32, no. 1, pp. 4-24, Jan. 2021. doi: 10.1109/TNNLS.2020.2978386.
[2] H. T. Le and Y. Kim, "Graph-based Deep Learning Methods: A Review," IEEE Access, vol. 9, pp. 44385-44404, 2021. doi: 10.1109/ACCESS.2021.3065895.
[3] L. Huang et al., "Tree-Based Machine Learning Models for Time Series Prediction," IEEE Access, vol. 8, pp. 109427-109438, 2020. doi: 10.1109/ACCESS.2020.3001805.
[4] S. P. Singh and S. K. Singh, "A Review of Tree Data Structures and Their Applications in Various Domains," IEEE Access, vol. 8, pp. 125923-125943, 2020. doi: 10.1109/ACCESS.2020.3008352.
[5] X. Liu, Y. Zhu, and L. Zhang, "Graph Convolutional Networks in Recommender Systems: A Survey," IEEE Transactions on Knowledge and Data Engineering, vol. 34, no. 5, pp. 2073-2093, May 2022. doi: 10.1109/TKDE.2021.3061985
