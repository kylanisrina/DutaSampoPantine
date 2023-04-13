#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    string merk;
    string jenisBahanBakar;
    int jumlahRoda;

public:
    // Constructor
    Kendaraan(string _merk, string _jenisBahanBakar, int _jumlahRoda) {
        merk = _merk;
        jenisBahanBakar = _jenisBahanBakar;
        jumlahRoda = _jumlahRoda;
    }

    // Method untuk menampilkan informasi kendaraan
    void tampilInfo() {
        cout << "Merk: " << merk << endl;
        cout << "Jenis Bahan Bakar: " << jenisBahanBakar << endl;
        cout << "Jumlah Roda: " << jumlahRoda << endl;
    }

    // Method untuk mengganti jenis bahan bakar
    void setJenisBahanBakar(string _jenisBahanBakar) {
        jenisBahanBakar = _jenisBahanBakar;
    }
};

int main() {
    // Membuat objek kendaraan1
    Kendaraan kendaraan1("Honda Civic", "Bensin", 4);

    // Menampilkan informasi kendaraan1
    cout << "Informasi Kendaraan 1:" << endl;
    kendaraan1.tampilInfo();

    // Mengganti jenis bahan bakar kendaraan1
    kendaraan1.setJenisBahanBakar("Solar");

    // Menampilkan informasi kendaraan1 setelah perubahan jenis bahan bakar
    cout << "Informasi Kendaraan 1 Setelah Perubahan:" << endl;
    kendaraan1.tampilInfo();

    return 0;
}
