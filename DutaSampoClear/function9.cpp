#include <iostream>

// Fungsi untuk menghitung perkalian dua angka integer
int perkalian(int angka1, int angka2) {
    int hasil = angka1 * angka2;
    return hasil;
}

int main() {
    int angka1, angka2;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    // Memanggil fungsi perkalian() dan menyimpan hasilnya dalam variabel hasilPerkalian
    int hasilPerkalian = perkalian(angka1, angka2);

    std::cout << "Hasil perkalian: " << hasilPerkalian << std::endl;

    return 0;
}
