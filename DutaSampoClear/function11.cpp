#include <iostream>

// Fungsi untuk mengecek apakah suatu angka genap atau ganjil
void cekGenapGanjil(int angka) {
    if (angka % 2 == 0) {
        std::cout << angka << " adalah bilangan genap." << std::endl;
    } else {
        std::cout << angka << " adalah bilangan ganjil." << std::endl;
    }
}

int main() {
    int angka;

    std::cout << "Masukkan angka: ";
    std::cin >> angka;

    // Memanggil fungsi cekGenapGanjil() dengan menyertakan angka sebagai argumen
    cekGenapGanjil(angka);

    return 0;
}
