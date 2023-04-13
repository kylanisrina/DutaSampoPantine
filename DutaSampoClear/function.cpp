#include <iostream>
using namespace std;

    // fungsi didefiniskan diatas main
    // rho adalah kerapatan meterial
    double weight (int L, int W, int H, float Rho){
        return L*W*H*Rho;
    }
    int main(){
        int A = 2, B = 3, C = 1;
        float D = 7.5;

        cout << "Length =" << A << ", Width = " << B << ", Height = " << C << ", Density =" << D << endl;
        cout << "Weight of bar = " << weight (A,B,C,D) << "\n";
        // A,B,C dan D diambil dengan urutan L, W,H,Rho dideklarasikan dalam kepala fungsi.
    }
// Pada program berikut, fungsi telah didefinisikan di akhir fungsi main().
//  Dalam kasus seperti itu, fungsi head diikuti titik koma atau prototipe harus dideklarasikan sebelum main().
    
