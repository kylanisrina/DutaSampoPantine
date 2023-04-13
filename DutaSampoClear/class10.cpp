#include <iostream>
#include <string>

using namespace std;

// Deklarasi class Buku
class Buku {
public:
    // Konstruktor
    Buku(string judul, string pengarang, int tahunTerbit) {
        this->judul = judul;
        this->pengarang = pengarang;
        this->tahunTerbit = tahunTerbit;
    }

    // Fungsi untuk menampilkan informasi buku
    void tampilInfo() {
        cout << "Judul: " << judul << endl;
        cout << "Pengarang: " << pengarang << endl;
        cout << "Tahun Terbit: " << tahunTerbit << endl;
    }

private:
    string judul;
    string pengarang;
    int tahunTerbit;
};

int main() {
    // Membuat objek Buku
    Buku buku1("Harry Potter and the Philosopher's Stone", "J.K. Rowling", 1997);

    // Mengakses anggota (member) dari objek Buku
    buku1.tampilInfo();

    return 0;
}
