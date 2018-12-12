#include <iostream>
#include<math.h>
using namespace std;

void nhapmang(float a[],int n)
{ for(int i=0; i<n;i++)
	{cout<<"a["<<i<<"]= ";cin>>a[i];
	}
cout<<"mang da nhap: ";
for (int i=0;i<n;i++)
{cout<<a[i];}
cout<<endl;}
int main()
{ float X,Q=0;
  int n;
  cout<<"nhap so phan tu mang: "; cin>>n;
float *a= new float[n];
  nhapmang(a,n);
  cout<<"nhap so thuc X= "; cin>>X;
  cout<<endl;
  for(int i=0;i<n;i++)
  	{ Q+=a[i]*pow(X,i); //hàm pow tinh so mu.....dung thu vien math.h
	  }
  cout<<Q;
  delete[] a;
  return 0;
}
