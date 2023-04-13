#include <iostream>
#include <string>
using namespace std;

// Deklarasi class Mobil
class Mobil {
private:
    string merk;
    string jenis;
    int tahunProduksi;
    int jumlahRoda;

public:
    // Konstruktor
    Mobil(string _merk, string _jenis, int _tahunProduksi, int _jumlahRoda) {
        merk = _merk;
        jenis = _jenis;
        tahunProduksi = _tahunProduksi;
        jumlahRoda = _jumlahRoda;
    }

    // Method untuk menampilkan informasi mobil
    void tampilInfo() {
        cout << "Merk: " << merk << endl;
        cout << "Jenis: " << jenis << endl;
        cout << "Tahun Produksi: " << tahunProduksi << endl;
        cout << "Jumlah Roda: " << jumlahRoda << endl;
    }

    // Method untuk mengganti jenis mobil
    void setJenis(string _jenis) {
        jenis = _jenis;
    }

    // Method untuk mengganti tahun produksi mobil
    void setTahunProduksi(int _tahunProduksi) {
        tahunProduksi = _tahunProduksi;
    }

    // Method untuk mengganti jumlah roda mobil
    void setJumlahRoda(int _jumlahRoda) {
        jumlahRoda = _jumlahRoda;
    }
};

int main() {
    // Membuat objek Mobil
    Mobil mobil1("Toyota", "Sedan", 2019, 4);

    // Menampilkan informasi mobil
    cout << "Informasi Mobil:" << endl;
    mobil1.tampilInfo();

    // Mengganti jenis mobil
    mobil1.setJenis("SUV");

    // Mengganti tahun produksi mobil
    mobil1.setTahunProduksi(2020);

    // Mengganti jumlah roda mobil
    mobil1.setJumlahRoda(6);

    // Menampilkan informasi mobil setelah perubahan
    cout << "Informasi Mobil setelah Perubahan:" << endl;
    mobil1.tampilInfo();

    return 0;
}
