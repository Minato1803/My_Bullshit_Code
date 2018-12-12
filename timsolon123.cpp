// tim so lon nhat, nhi, ba trong 1 day so
#include <iostream>
#include <windows.h>
using namespace std;

void nhapmang(signed int a[],int n)
{  
for (int i=0;i<n;i++)
  { 	cout<<"a["<<i<<"]= ";cin>>a[i];}
  for (int i=0;i<n;i++)
  { cout<<a[i]<<" ";}
  cout<<endl;	
}
void timso(signed int a[],int n,signed int n1,signed int n2,signed int n3)
{	n1=a[0];n2=a[1];n3=a[2];
	for (int i=0; i<n;i++){
	 if(a[i]>n1)
		n1=a[i];}
	if(n==1){ cout<<"thu 1: "<<n1<<endl; return;}	
		if(n1==n2) n2=a[0];		
    for (int i=0; i<n;i++){
	if(a[i]!=n1&&a[i]<n1&&a[i]>n2)
	  	n2=a[i];}
	if(n==2){ cout<<"thu 1: "<<n1<<endl;
			  cout<<"thu 2: "<<n2<<endl; return;}  	
		  if(n3==n1||n3==n2)n3=a[3];
		  if(n3==n1||n3==n2)n3=a[4];  	
    for (int i=0; i<n;i++){
	  if(a[i]!=n1&&a[i]!=n2&&a[i]<n1&&a[i]<n2&&a[i]>n3)
	  	n3=a[i];}
	cout<<"thu 1: "<<n1<<endl;
	cout<<"thu 2: "<<n2<<endl;
	cout<<"thu 3: "<<n3;	  	
	}
int main()
{
signed int n,n1,n2,n3;
 re: system("cls");
 cout<<"nhap so phan tu mang n= "; cin>>n;
  signed int *a = new signed int[n];
  if(n<=0){
 cout<<"moi nhap lai! nhap ngu vl!: "<<endl;
 Sleep(2000);
 goto re;}
  nhapmang(a,n);
  timso(a,n,n1,n2,n3);
  delete[] a;
  return 0;
}

