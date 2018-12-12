#include <iostream>
using namespace std;

int main()
{ 
	int n;
  	cout<<"nhap so phan tu mang: "; 
  	cin>>n;
  	int a[n+5];
  	//nhap mang
  	for (int i= 0; i<n; i++)
	{ 
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"mang da nhap: ";
	for (int i= 0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	//tinh phan tu xuat hien 
  	for (int i= 0;i<n;i++)
	{
  		int count = 0,k = 0;
  		for(int j= 0;j<n;j++)
		{
	  		if(a[i]==a[j])
	  		count++;
		}
		for(int j= 0;j<=i;j++)
		{
			if(a[i]==a[j]) 
				k++;
		}
		if(k==1)
			cout<<"so "<<a[i]<<" xuat hien "<<count<<" lan"<<endl;
	}
  return 0;
}
