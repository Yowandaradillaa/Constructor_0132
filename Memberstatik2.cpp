#include <iostream>
using namespace std;

class mahasiswa {
    private:
    static long long int nim;
    public :
    long long int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(long long int pNim) {nim = pNim;}
    static long long int getNim() {return nim;}

    mahasiswa (string pnama)
    {
        nama = pnama;
        setID();
    }
};

long long int mahasiswa::nim = 20230140132;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main ()
{
    mahasiswa mhs1("Yowanda Radilla A");
    mahasiswa mhs2("Zahwa A");
    mahasiswa::setNim(20230140116);
    mahasiswa mhs3 ("Sekar Ari M");
    mahasiswa mhs4("Kamilia NM");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "Akses dari luar object = " << mahasiswa::getNim() << endl;

    return 0;
}