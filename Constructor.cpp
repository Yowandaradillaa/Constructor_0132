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

int main ()
{
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Indra");
    Mahasiswa mhs4(30, "Fauzan");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();
}

