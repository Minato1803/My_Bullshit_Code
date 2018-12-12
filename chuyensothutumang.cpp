#include <iostream>
using namespace std;
void nhapmang(int a[], int n)
{ for (int i=0; i<n; i++)
	{ cout<<"a["<<i<<"]= ";cin>> a[i];}
	 for (int i=0;i<n;i++)
    { cout<<a[i]<<" ";}
    cout<<endl;
}
void chuyenthutu(int a[], int n, int k)
{ for (int i=0;i<k;i++)
	{ int tam= a[i];
	      a[i]=a[n-k+i];		
		  a[n-k+i]=tam;}
  for (int i=0;i<n;i++)
    { cout<<a[i]<<" "; 
}
}
void chuyen(int a[], int n, int k)
{
	for(int i=0;i<k;i++){
		for(int j=n-1; j>0;j--){
			swap(a[j],a[j-1]);
		}
	}
	for(int i=0; i<n;i++){
		cout<<a[i];
	}
}
int main()
{ int n,k;
cout<<"nhap so phan tu mang: ";
cin>>n;
int *a= new int[n]; 
nhapmang(a,n);
cout<<"so phan tu muon chuyen: "; cin>>k;
if (k>(n/2))
{ cout<<"oc cho, m nhap vay sao t chuyen";
return 0;
}
cout<<"mang duoc chuyen thanh: ";
chuyen(a,n,k);
chuyenthutu(a,n,k);

delete[] a;
return 0;
}
