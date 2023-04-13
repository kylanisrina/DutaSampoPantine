#include <iostream>

// Fungsi untuk menghitung luas segiempat
int luasSegiempat(int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas;
}

int main() {
    int panjang, lebar;

    std::cout << "Masukkan panjang segiempat: ";
    std::cin >> panjang;

    std::cout << "Masukkan lebar segiempat: ";
    std::cin >> lebar;

    // Memanggil fungsi luasSegiempat() dan menyimpan hasilnya dalam variabel hasilLuas
    int hasilLuas = luasSegiempat(panjang, lebar);

    std::cout << "Luas segiempat: " << hasilLuas << std::endl;

    return 0;
}
