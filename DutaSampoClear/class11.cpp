#include <iostream>
#include <cstring>

using namespace std;

class Pegawai {
private:
    string nama;
    string jabatan;
    float gaji;
    int jumlahAnak;

public:
    // Konstruktor
    Pegawai(string _nama, string _jabatan, float _gaji, int _jumlahAnak) {
        nama = _nama;
        jabatan = _jabatan;
        gaji = _gaji;
        jumlahAnak = _jumlahAnak;
    }

    // Setter untuk atribut nama
    void setNama(string _nama) {
        nama = _nama;
    }

    // Getter untuk atribut nama
    string getNama() {
        return nama;
    }

    // Setter untuk atribut jabatan
    void setJabatan(string _jabatan) {
        jabatan = _jabatan;
    }

    // Getter untuk atribut jabatan
    string getJabatan() {
        return jabatan;
    }

    // Setter untuk atribut gaji
    void setGaji(float _gaji) {
        gaji = _gaji;
    }

    // Getter untuk atribut gaji
    float getGaji() {
        return gaji;
    }

    // Setter untuk atribut jumlahAnak
    void setJumlahAnak(int _jumlahAnak) {
        jumlahAnak = _jumlahAnak;
    }

    // Getter untuk atribut jumlahAnak
    int getJumlahAnak() {
        return jumlahAnak;
    }

    // Fungsi untuk menghitung gaji bersih pegawai menggunakan pointer
    float hitungGajiBersih(float tunjangan, float potonganPajak) {
        float gajiBersih = gaji + tunjangan - potonganPajak;
        return gajiBersih;
    }

    // Fungsi untuk menampilkan informasi pegawai menggunakan cstring
    void tampilkanInfo() {
        cout << "Informasi Pegawai" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Jabatan: " << jabatan << endl;
        cout << "Gaji: " << gaji << endl;
        cout << "Jumlah Anak: " << jumlahAnak << endl;
    }
};

int main() {
    // Membuat objek Pegawai
    Pegawai pegawai1("John Doe", "Manajer", 5000, 2);

    // Menampilkan informasi awal pegawai
    pegawai1.tampilkanInfo();

    // Mengubah gaji pegawai
    pegawai1.setGaji(6000);

    // Menghitung gaji bersih pegawai
    float tunjangan = 1000;
    float potonganPajak = 500;
    float gajiBersih = pegawai1.hitungGajiBersih(tunjangan, potonganPajak);

    // Menampilkan informasi pegawai setelah perubahan gaji dan perhitungan gaji bersih
    cout << "Setelah perubahan gaji dan perhitungan gaji bersih:" << endl;
    pegawai1.tampilkanInfo();
    cout << "Gaji Bersih: " << gajiBersih << endl;

    return 0;
}
