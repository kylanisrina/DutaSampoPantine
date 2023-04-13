#include <iostream>
using namespace std;

int Funct(int, int); // prototipe fungsi
// hanya jenis parameter yang di berikan

int main(){
    int n, m;
    cout << "n      m       Sum of squares" << endl;
    for(int i = 0; i <= 5; i++){
        n = i;
        m = 2*i;
        cout << n << "\t" << m << "\t" << Funct(n, m) << endl;
        // fungsi disebut sebagai fungsi (n,m)
    }
}
 // defini fungsi                           
int Funct(int x, int y){ // jenis dan nama keduanya diperlukan
    int S = x*x + y*y; // dikepala
    return S;

}

// Dalam semua kasus yang disebutkan di atas, Anda pasti menyadari bahwa suatu fungsi tidak didefinisikan di dalam fungsi main().
// Di dalam main() hanya dipanggil dengan menyebutkan nama fungsi dengan argumen dalam tanda kurung. 
// Misalnya, dalam program di atas disebut sebagai Funct (n, m) ;.
// Dalam program berikut, sebuah fungsi didefinisikan untuk menghitung pangkat 4 bilangan bulat. Setelah didefinisikan fungsi dapat dipanggil beberapa kali.
