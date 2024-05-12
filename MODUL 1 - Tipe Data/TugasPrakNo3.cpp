#include <iostream>
#include <map>
using namespace std;

int main() {
    // membuat objek map
    map < string, int> umur;

    // memasukkan data ke dalam map
    umur["Via"] = 19;
    umur["Tata"] = 18;
    umur["Eva"] = 17;

    // mencetak data dari map
    cout << "umur Via: " << umur ["Via"] << endl;
    cout << "umur Tata: " << umur ["Tata"] << endl;
    cout << "umur Eva: " << umur ["Eva"] << endl;

    // mengubah data di dalam map
    umur["Via"] = 20;

    // mencetak data yang sudah diubah
    cout << "umur Via setelah diubah: " << umur["Via"] << endl;

    //menghapus data dari map
    umur.erase("Tata");

    // mencetak data setelah dihapus
    cout << "jumlah data di dalam map: " << umur.size() << endl;

    return 0;

}