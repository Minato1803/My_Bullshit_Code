#include<iostream>
using namespace std;

void nhapmang(int a[][max],int n,int m)
{ for(int hang=0; hang<n;hang++)
	{for(int cot=0; cot<m;cot++)
	cout<<"a["<<hang<<cot<<"]= ";cin>>a[hang][cot];
	}
cout<<"mang da nhap: ";
for (int hang=0;hang<n;hang++){
	for (int cot=0;cot<n;cot++)
		cout<<a[hang][cot];}
		cout<<endl;}
int main()
{ int n,m;
 cout<<"nhap so hang: "; cin>>n;
 cout<<"nhap so cot: "; cin>>m;
 int *a= new int [n][m];
 nhapmang(a,n,m);
 delete[] a;
 return 0;
		}		
