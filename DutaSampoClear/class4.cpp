// Buatlah class "Segitiga" yang memiliki atribut panjang sisi-sisi, serta method untuk menghitung luas dan keliling segitiga!

#include <iostream>
#include <cmath>
using namespace std;

// Deklarasi class Segitiga
class Segitiga {
private:
    double sisiA;
    double sisiB;
    double sisiC;

public:
    // Konstruktor
    Segitiga(double _sisiA, double _sisiB, double _sisiC) {
        sisiA = _sisiA;
        sisiB = _sisiB;
        sisiC = _sisiC;
    }

    // Method untuk menghitung luas segitiga
    double hitungLuas() {
        double s = (sisiA + sisiB + sisiC) / 2;
        return sqrt(s * (s - sisiA) * (s - sisiB) * (s - sisiC));
    }

    // Method untuk menghitung keliling segitiga
    double hitungKeliling() {
        return sisiA + sisiB + sisiC;
    }
};

int main() {
    // Membuat objek Segitiga
    Segitiga segitiga1(3, 4, 5);

    // Menampilkan informasi segitiga
    cout << "Informasi Segitiga:" << endl;
    cout << "Sisi A: " << segitiga1.hitungLuas() << endl;
    cout << "Sisi B: " << segitiga1.hitungKeliling() << endl;

    return 0;
}
