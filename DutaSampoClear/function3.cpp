#include <iostream>
using namespace std;

long power(int x){
    return x*x*x*x;
}
int main(){ 
    int y = 2;
    double z;
    z = (power(y + 2) - power(y)) / power(y);
    cout << "power(y) = " << power(y) << "\n";
    cout << "power(y+2) = " << power(y+2) << ", and z = " << z << endl;
}