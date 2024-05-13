#include <iostream>
using namespace std;

class Mahasiswa 
{
    public : 
    int nim;
    string nama;

    public:
    Mahasiswa()
    {
        nim = 0;
        nama = " ";
    };
    Mahasiswa(int iNim)
    {
        nim = iNim;
    }
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama)
    {
        nim = iNim;
        nama = iNama;
    }
    void Mahasiswa::cetak()
    {
        cout << endl << "NIM = " << nim << endl;
        cout << "Nama = " << nama << endl;
    }
};

