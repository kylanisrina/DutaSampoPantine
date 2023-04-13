 #include<iostream>
 using namespace std;
 int Product(int, int); //Three functions with same name
 int Product (int,int,int);
 double Product( int, double);
 int main()
 {int a = 5,b = 6, c= 2;
 double d = 5.5;
cout << "Product of a and b = "<< Product(a,b) << endl;
cout<< "Product of a, b and c = " << Product(a,b,c) <<endl;
cout << "Product of b and d = " << Product(b,d)<< endl;
return 0;
}
int Product(int x, int y) // definition of function
 {return x*y;}
double Product(int A, double B) // definition of function
 { return A*B;}
int Product(int n, int m, int k) // definition of function
 {return n*m*k;}