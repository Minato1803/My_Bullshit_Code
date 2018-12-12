#include <iostream>
#include<math.h>
using namespace std;
//bai 1
void mang2chieu(int n)
{		int b[n][n], count=0;
		cout<<"nhap mang 2 chieu: "<<endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>b[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0; j<n;j++){
				if(b[i][j]%4==0&&b[i][j]%7==0)
				{
					cout<<"vitri: "<<"b["<<i<<"]"<<"["<<j<<"] ";
					count+=1;
				}
			}
		}
		if(count==0){
			cout<<"khong co vi tri nao thoa man ";
		}
		cout<<endl;
	int S;
	for(int i=0;i<n;i++){S+=b[i][i];}
	for(int i=2; i<sqrt(S);i++){
		if(S%i==0){ cout<< "ko phai la so nguyen to"<<endl;  return ;}
		
	}
	cout<<"la so nguyen to!";
	cout<<endl;
}

//bai 2
void mang1chieu(int a[], int n)
{
	cout<<"nhap mang 1 chieu: "<<endl;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		//tim phan tu min
 	int d=a[0], temp=0, dem=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]<=d){d=a[i];temp=i;}
		}
		cout<<"phan tu min "<<d<<endl;
		cout<<"vi tri cac phan tu bang voi min: ";
			for(int i=0; i<n;i++){
				if(a[i]==d&&i!=temp){
					cout<<"a["<<i<<"]";
					dem+=1;
				}
			}
		if(dem==0){ cout<<"khong co!";}	
		cout<<endl;		
	//tim vi tri phan tu chan nho nhat
    int k;
		for(int i=0; i<n;i++){
			if(a[i]%2==0){ k=a[i]; break;}
		}
		for(int i=n-1; i>=0; i--){
			if(a[i]<=k&&a[i]%2==0){k=i;}
		}
	cout<<"vi tri phan tu chan nho nhat: "<<"a["<<k<<"]";		
}
	


int main()
{
	int n;
	cout<<"nhap n: "; cin>>n;
	//bai1
	mang2chieu(n);
	//bai2	
	int *a= new int[n];
	mang1chieu(a,n);		
return 0;
}
