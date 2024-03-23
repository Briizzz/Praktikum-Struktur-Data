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