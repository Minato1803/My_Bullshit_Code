//nhap mang a co N kieu int, sap xep mang theo thu tu giam dan
#include <iostream>
using namespace std;

void nhapmang(int a[],int n)
{ for(int i=0; i<n;i++)
	{cout<<"a["<<i<<"]= ";cin>>a[i];
	}
cout<<"mang da nhap: ";
for (int i=0;i<n;i++)
{cout<<a[i];}
cout<<endl;}

void sapxepgiamdan(int a[],int n)
{ for(int i=0;i<n;i++)
	{ if(a[i]<a[i+1])
	  	{int k = a[i];
	  	 a[i]=a[i+1];
	  	 a[i+1]=k;}
	}
  cout<<"mang da sap xep theo thu tu giam dan: ";
  for (int i=0;i<n;i++)
{cout<<a[i];}}	

int main()
{ int n;
cout<<"nhap so luong phan tu: ";cin>>n;
int*a= new int [n];
nhapmang(a,n);
sapxepgiamdan(a,n);
delete[] a;
return 0;
}
