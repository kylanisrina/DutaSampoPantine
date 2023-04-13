// Buatlah class "Mahasiswa" yang memiliki atribut nama, usia, dan IPK. 
// Berikanlah konstruktor untuk menginisialisasi atribut-atribut tersebut.
// Buat juga method untuk mengambil data atribut nama, usia, dan IPK, serta method untuk mengubah data IPK.

#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int usia;
    float IPK;

public:
    // Konstruktor
    Mahasiswa(string _nama, int _usia, float _IPK) {
        nama = _nama;
        usia = _usia;
        IPK = _IPK;
    }

    // Method untuk mengambil data atribut nama
    string getNama() {
        return nama;
    }

    // Method untuk mengambil data atribut usia
    int getUsia() {
        return usia;
    }

    // Method untuk mengambil data atribut IPK
    float getIPK() {
        return IPK;
    }

    // Method untuk mengubah data atribut IPK
    void setIPK(float _IPK) {
        IPK = _IPK;
    }
};

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mhs1("Kyla Imut", 18, 3.75);

    // Menampilkan data mahasiswa
    cout << "Nama: " << mhs1.getNama() << endl;
    cout << "Usia: " << mhs1.getUsia() << " tahun" << endl;
    cout << "IPK: " << mhs1.getIPK() << endl;

    // Mengubah data IPK mahasiswa
    mhs1.setIPK(3.90);

    // Menampilkan data mahasiswa setelah diubah
    cout << "\nData setelah diubah:" << endl;
    cout << "Nama: " << mhs1.getNama() << endl;
    cout << "Usia: " << mhs1.getUsia() << " tahun" << endl;
    cout << "IPK: " << mhs1.getIPK() << endl;

    return 0;
}
