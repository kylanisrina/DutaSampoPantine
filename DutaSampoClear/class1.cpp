// Buatlah class "PersegiPanjang" yang memiliki atribut panjang dan lebar. 
// Berikanlah konstruktor untuk menginisialisasi atribut-atribut tersebut.
// Buat juga method untuk menghitung luas dan keliling dari persegi panjang tersebut.

#include <iostream>
using namespace std;

class PersegiPanjang {
private:
    int panjang;
    int lebar;

public:
    // Konstruktor
    PersegiPanjang(int _panjang, int _lebar) {
        panjang = _panjang;
        lebar = _lebar;
    }

    // Method untuk menghitung luas
    int hitungLuas() {
        return panjang * lebar;
    }

    // Method untuk menghitung keliling
    int hitungKeliling() {
        return 2 * (panjang + lebar);
    }
};

int main() {
    // Membuat objek PersegiPanjang
    PersegiPanjang pp1(5, 8);

    // Menampilkan data PersegiPanjang
    cout << "Panjang: " << pp1.panjang << endl;
    cout << "Lebar: " << pp1.lebar << endl;
    cout << "Luas: " << pp1.hitungLuas() << endl;
    cout << "Keliling: " << pp1.hitungKeliling() << endl;

    return 0;
}
