#include<iostream>
 using namespace std;
inline int Power(int x, int n) // inline function
{ int P = 1; // definition
 for (int i =0; i<n ; i++)
 P *=x;
 return P; }
int main()
{ int A = 2, B = 3, C =5;
cout<< "A square = "<< Power(A,2); // function call
cout << "\nB to the power 4 = "<< Power(B,4); // function call
cout<<"\nC to the power 3 = "<< Power(C,3)<<endl;//function call
 return 0;
 }