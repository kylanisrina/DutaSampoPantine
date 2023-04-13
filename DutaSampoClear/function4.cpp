#include <iostream>
#include <cmath>
using namespace std;
double integral(double x ,double a, double b )
{
int n = 100;
double F, h, Sum ;
 h = (b-a)/n;
 Sum = h *( b*b + a*a)/2;
for ( int k =1; k<n ; k++)
 {x = a + k*h;
 F = x*x;
 Sum = Sum+ h *F ;}
 return Sum ;
 }
 int main()
 {
 double y ;
 cout<<"Integral= "<< integral(y,2.0,4.0) <<endl;
 return 0 ;
 }