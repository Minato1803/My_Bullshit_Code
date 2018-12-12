#include <iostream>
using namespace std;

unsigned int fac( int n)
{  int k=1;
  for(n>1;n--;){
  k*=n; }
return k;
}
int main()
{ int n;
	float q=1;
 cout<<"nhap so nguyen n= "; cin>>n;
 for(int i=2;i<=n;i++)
 	{ q+=(1.0/fac(i));
	 cout<<fac(i)<<endl;}
cout<<"gia tri cua da thuc q= "<<q<<endl;
return 0;
}
