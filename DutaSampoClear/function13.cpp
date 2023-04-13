#include <iostream>

// Fungsi untuk menghitung jumlah elemen positif dalam suatu array
int hitungJumlahPositif(int arr[], int n) {
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    int n;

    std::cout << "Masukkan jumlah elemen dalam array: ";
    std::cin >> n;

    int arr[100]; // Maksimal 100 elemen dalam array

    std::cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Memanggil fungsi hitungJumlahPositif() dengan menyertakan array dan jumlah elemen sebagai argumen
    int jumlahPositif = hitungJumlahPositif(arr, n);

    std::cout << "Jumlah elemen positif dalam array adalah: " << jumlahPositif << std::endl;

    return 0;
}
