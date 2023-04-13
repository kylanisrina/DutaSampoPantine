#include <iostream>
#include <string>
using namespace std;

class Penyewa {
private:
    string nama;
    int umur;
    string alamat;
    string nomorTelepon;

public:
    // Constructor
    Penyewa(string _nama, int _umur, string _alamat, string _nomorTelepon) {
        nama = _nama;
        umur = _umur;
        alamat = _alamat;
        nomorTelepon = _nomorTelepon;
    }

    // Method untuk menampilkan informasi penyewa
    void tampilInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Alamat: " << alamat << endl;
        cout << "Nomor Telepon: " << nomorTelepon << endl;
    }

    // Method untuk mengganti alamat penyewa
    void setAlamat(string _alamat) {
        alamat = _alamat;
    }

    // Method untuk mengganti nomor telepon penyewa
    void setNomorTelepon(string _nomorTelepon) {
        nomorTelepon = _nomorTelepon;
    }
};

int main() {
    // Membuat objek penyewa1
    Penyewa penyewa1("John Doe", 25, "Jl. Sudirman No. 123", "08123456789");

    // Menampilkan informasi penyewa1
    cout << "Informasi Penyewa 1:" << endl;
    penyewa1.tampilInfo();

    // Mengganti alamat dan nomor telepon penyewa1
    penyewa1.setAlamat("Jl. Gatot Subroto No. 456");
    penyewa1.setNomorTelepon("087654321");

    // Menampilkan informasi penyewa1 setelah perubahan
    cout << "Informasi Penyewa 1 Setelah Perubahan:" << endl;
    penyewa1.tampilInfo();

    return 0;
}
