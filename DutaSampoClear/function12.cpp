#include <iostream>

// Fungsi untuk menghitung faktorial suatu angka
int hitungFaktorial(int angka) {
    int faktorial = 1;
    for (int i = 1; i <= angka; i++) {
        faktorial *= i;
    }
    return faktorial;
}

int main() {
    int angka;

    std::cout << "Masukkan angka: ";
    std::cin >> angka;

    // Memanggil fungsi hitungFaktorial() dengan menyertakan angka sebagai argumen
    int hasilFaktorial = hitungFaktorial(angka);

    std::cout << "Faktorial dari " << angka << " adalah: " << hasilFaktorial << std::endl;

    return 0;
}
