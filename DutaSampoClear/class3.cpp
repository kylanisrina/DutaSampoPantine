// Buatlah class "Buku" yang memiliki atribut judul, pengarang, dan tahun terbit, 
// serta method untuk menampilkan informasi buku!

#include <iostream>
using namespace std;

// Deklarasi class Buku
class Buku {
private:
    string judul;
    string pengarang;
    int tahunTerbit;

public:
    // Konstruktor
    Buku(string _judul, string _pengarang, int _tahunTerbit) {
        judul = _judul;
        pengarang = _pengarang;
        tahunTerbit = _tahunTerbit;
    }

    // Method untuk menampilkan informasi buku
    void tampilkanInfoBuku() {
        cout << "Judul: " << judul << endl;
        cout << "Pengarang: " << pengarang << endl;
        cout << "Tahun Terbit: " << tahunTerbit << endl;
    }
};

int main() {
    // Membuat objek Buku
    Buku buku1("Harry Potter and the Sorcerer's Stone", "J.K. Rowling", 1997);

    // Menampilkan informasi buku
    cout << "Informasi Buku:" << endl;
    buku1.tampilkanInfoBuku();

    return 0;
}
