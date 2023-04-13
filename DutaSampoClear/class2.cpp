// Buatlah class "Mobil" yang memiliki atribut merek, tahun produksi, dan kecepatan. 
// Berikanlah konstruktor untuk menginisialisasi atribut-atribut tersebut.
// Buat juga method untuk mengambil data atribut merek, tahun produksi, dan kecepatan, serta method untuk mengubah kecepatan mobil.

#include <iostream>
    #include <string>
    using namespace std;
    
    class Mobil {
    private:
        string merek;
        int tahunProduksi;
        int kecepatan;
    
    public:
        // Konstruktor
        Mobil(string _merek, int _tahunProduksi, int _kecepatan) {
            merek = _merek;
            tahunProduksi = _tahunProduksi;
            kecepatan = _kecepatan;
        }
    
        // Method untuk mengambil data atribut merek
        string getMerek() {
            return merek;
        }
    
        // Method untuk mengambil data atribut tahun produksi
        int getTahunProduksi() {
            return tahunProduksi;
        }
    
        // Method untuk mengambil data atribut kecepatan
        int getKecepatan() {
            return kecepatan;
        }
    
        // Method untuk mengubah kecepatan
        void ubahKecepatan(int _kecepatan) {
            kecepatan = _kecepatan;
        }
    
        // Method untuk menampilkan informasi mobil
        void tampilkanInfoMobil() {
            cout << "Merek: " << merek << endl;
            cout << "Tahun Produksi: " << tahunProduksi << endl;
            cout << "Kecepatan: " << kecepatan << " km/h" << endl;
        }
    };
    
    int main() {
        // Membuat objek Mobil
        Mobil mobil1("Toyota Avanza", 2019, 80);
    
        // Menampilkan informasi mobil
        cout << "Informasi Mobil:" << endl;
        mobil1.tampilkanInfoMobil();
    
        // Mengubah kecepatan mobil
        mobil1.ubahKecepatan(100);
    
        // Menampilkan informasi mobil setelah diubah
        cout << "\nInformasi Mobil setelah diubah:" << endl;
        mobil1.tampilkanInfoMobil();
    
        return 0;
    }
    