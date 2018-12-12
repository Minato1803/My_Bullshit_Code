#include <iostream>
using namespace std;

int slxh(int a[],int i, int n)
{
	long j=0,temp=a[i];
	long dem=0;
	for(int i=0;i<n;i++)
	{
		if(temp==a[i])
		{
			dem+=1;
		}
	
	}
	return dem;
}

bool kt(int a[], int i, int n)
{
	for(int j=0;j<i;j++){
		if(a[i]==a[j]){ return 0;}
	}
	return 1;
}

int main()
{
	int n;
	cout<<"nhap so luong phan tu mang: ";
	cin>>n;
	int *a= new int[n];
	for(int i=0; i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(kt(a,i,n)==1)
		{ 
		cout<<"phan tu "<<a[i]<<" xuat hien "<<slxh(a,i,n)<<"lan"<<endl;
		}
	}
 return 0;	
}
