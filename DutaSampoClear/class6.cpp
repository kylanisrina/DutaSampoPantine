#include <iostream>
#include <string>

// Class untuk mewakili penduduk
class Penduduk {
public:
    // Konstruktor untuk inisialisasi objek Penduduk
    Penduduk(std::string nama, int umur, std::string alamat) {
        this->nama = nama;
        this->umur = umur;
        this->alamat = alamat;
    }

    // Fungsi untuk menampilkan informasi penduduk
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Umur: " << umur << " tahun" << std::endl;
        std::cout << "Alamat: " << alamat << std::endl;
    }

private:
    std::string nama;
    int umur;
    std::string alamat;
};

int main() {
    // Membuat objek penduduk
    Penduduk penduduk1("John Doe", 25, "Jl. Jendral Sudirman No. 123");
    Penduduk penduduk2("Jane Smith", 30, "Jl. MH Thamrin No. 456");

    // Menampilkan informasi penduduk
    std::cout << "Informasi Penduduk 1:" << std::endl;
    penduduk1.tampilkanInfo();
    std::cout << std::endl;

    std::cout << "Informasi Penduduk 2:" << std::endl;
    penduduk2.tampilkanInfo();
    std::cout << std::endl;

    return 0;
}
