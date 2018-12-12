//nhap mang a chua n phan tu, sap xep vi tri chan tang dan, vi tri le giam dan
#include <iostream>
#include <algorithm>
using namespace std;

void mang(int a[], int n)
{for (int i=0; i<n; i++)
{ cout<<"a["<<i<<"]= "; cin>>a[i];}
cout<<"mang da nhap: ";
for (int i=0; i<n; i++){
	cout<<a[i]<<" ";}
	cout<<endl; 
}

void sapxep(int a[], int n)
{ int i=0;
if (n%2==0){// so cuoi cung le
lap: for (i<n-3;i++;){
	if(a[i]<=a[i+2])swap(a[i],a[i+2]);++i;break;} //sap xep tang dan
  for (i<n-2;i++;){
  	if(a[i]>=a[i+2]){swap(a[i],a[i+2]);}
  	++i;
  	if(i<n&&i%2==0)goto lap; else break;
  }}
  else //so cuoi cung chan
  lap2: for (i<n-2;i++;){
	if(a[i]<=a[i+2])swap(a[i],a[i+2]);++i;break;} //sap xep tang dan
  for (i<n-3;i++;){
  	if(a[i]>=a[i+2]){swap(a[i],a[i+2]);}
  	++i;
  	if(i<n&&i%2==0)goto lap2; else break;
  }
for(int i=0;i<n;i++){ cout<<a[i]<<" ";}
}
int main()
{ int n;
  cout<<"nhap so phan tu mang: "; cin>>n;
  int *a= new int [n];
  mang(a,n);
  cout<<"mang da dc sap xep lai:"<<endl;
  sapxep(a,n);
  delete[] a;
  return 0;
}
