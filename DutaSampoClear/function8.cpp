#include <iostream>
using namespace std;
# define max(x,y) (x>y? x:y)
 int main()
 { int A, B;
 cout<< "Write two integers :" ; cin >> A>> B;
 cout << "Maximum of the two = " <<max (A,B)<< endl;
 return 0;
 }