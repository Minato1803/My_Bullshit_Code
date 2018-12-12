//n1>n2 n3=(n1-n2) min mang A[10]
#include <iostream>
#include <math.h>
using namespace std;
void nhapmang(unsigned int a[],unsigned int n)
{ int c=1,b=1,u;
for(int i=0; i<n;i++)
	{u=c+b;
	b=u;c=b;
	cout<<u;
	}
cout<<"mang da nhap: ";
for (int i=0;i<n;i++)
{cout<<a[i]<<" ";}
cout<<endl;}

//void P123(unsigned int a[],unsigned int &n,unsigned int &n1,unsigned int &n2,unsigned int &n3)
//{ unsigned int min;
//min=abs(a[0]-a[1]);
//	for(int i=0;i<n;i++)
//	{
//	for(int j=0; j<n;j++)
//			{ if(a[i]>a[j])
//			{
//				if((a[i]-a[j])<=min)
//					{ n1=a[i]; n2=a[j];
//					  min=n1-n2;
//					  break;
//					}}
//			}
//	}
//cout<<n1<<" "<<n2<<" "<<min<<endl;
//}
int main()
{
unsigned int n,n1,n2,n3;
 cout<<"nhap so phan tu mang n= "; cin>>n;
 unsigned int *a = new unsigned int[n];
  nhapmang(a,n);
 // P123(a,n,n1,n2,n3);
  delete[] a;
  return 0;}
