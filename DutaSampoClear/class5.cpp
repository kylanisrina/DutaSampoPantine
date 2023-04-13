// class "Mahasiswa" yang memiliki atribut nama, NIM, dan IPK, serta method 
// untuk menampilkan informasi mahasiswa dan menghitung status kelulusan berdasarkan IPK!

#include <iostream>
#include <string>
using namespace std;

// Deklarasi class Mahasiswa
class Mahasiswa {
private:
    string nama;
    int umur;
    string jurusan;

public:
    // Konstruktor
    Mahasiswa(string _nama, int _umur, string _jurusan) {
        nama = _nama;
        umur = _umur;
        jurusan = _jurusan;
    }

    // Method untuk menampilkan informasi mahasiswa
    void tampilInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Jurusan: " << jurusan << endl;
    }
};

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mahasiswa1("John Doe", 20, "Informatika");

    // Menampilkan informasi mahasiswa
    cout << "Informasi Mahasiswa:" << endl;
    mahasiswa1.tampilInfo();

    return 0;
}
