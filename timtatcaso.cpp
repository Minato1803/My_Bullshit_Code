//in ra tat ca cac truong hop
#include <iostream>
#include <string>
using namespace std;
void Rotate(char a[],int n)
{  int k=n;
   cout<<"nhap a= "; cin>>a;
  lap: for (int i=0;i<n-1;i++){
   int tmp=a[i];
   a[i]=a[i+1];
   a[i+1]=tmp;
   cout<<a<<endl;} // chuyen so cuoi len dau
   if(k>2){ --k; goto lap;}
   int dem=1;
   lap2: for (int i=dem;i<n-1;i++){
   int tmp=a[i];
   a[i]=a[i+1];
   a[i+1]=tmp;
   cout<<a<<endl;}
   if(dem<n-3){ ++dem; goto lap2;}
}
int main()
{ int n,k;
 cout<<"so co bao nhieu chu so: "; cin>>n;
  char *a= new char[n];
   
  Rotate(a,n);
 delete[] a;
 return 0;  
}
