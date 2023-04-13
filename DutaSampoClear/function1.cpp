#include <iostream>
using namespace std;

int Function(int x);
// kepala fungsi atau protipe di mana
// tidak perlu memasukkan nama variabel

int main(){
    int n;

    cout << " Number  \t  Square" << endl;
    for(n = 0; n <= 5; ++n)
        cout << "    " << n << "      \t" << Function(n) << endl;
    return 0;
    }
    int Function(int x) // sebagai kepala fungsi
    {
        int Square = x*x; // sebagai badan fungsi
        return Square;
    }
// Dalam program berikut prototipe fungsi telah dideklarasikan sebelum main dan definisi fungsi diberikan setelah main 0).
// Dalam prototipe fungsi hanya disebutkan jenis setiap parameter yang dipisahkan dengan koma.
// Nama parameter tidak perlu diberikan dalam prototipe fungsi.
// Prototipe fungsi diakhiri dengan titik koma.
// Program berikut menghitung jumlah kuadrat dari dua bilangan bulat.