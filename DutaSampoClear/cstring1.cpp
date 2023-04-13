#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung jumlah karakter vokal dalam sebuah kalimat menggunakan pointer
int hitungJumlahVokal(string kalimat) {
    int jumlahVokal = 0;

    // Mendeklarasikan array karakter vokal
    const char *vokal = "aeiouAEIOU";

    // Menggunakan pointer untuk mengiterasi setiap karakter dalam kalimat
    for (int i = 0; i < kalimat.length(); i++) {
        char karakter = kalimat[i];

        // Menggunakan strchr() untuk mencari apakah karakter merupakan vokal
        if (strchr(vokal, karakter) != NULL) {
            jumlahVokal++;
        }
    }

    return jumlahVokal;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat); // Menggunakan getline() untuk membaca inputan kalimat

    // Memanggil fungsi hitungJumlahVokal() untuk menghitung jumlah karakter vokal
    int jumlahVokal = hitungJumlahVokal(kalimat);

    cout << "Jumlah karakter vokal dalam kalimat: " << jumlahVokal << endl;

    return 0;
}
