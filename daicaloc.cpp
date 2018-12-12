#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, count=0;
	cout<<"nhap n: "; cin>>n;
	int a[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0; j<n;j++){
				if(a[i][j]%4==0&&a[i][j]%7==0)
				{
					cout<<"vitri: "<<"a["<<i<<"]"<<"["<<j<<"] ";
					count+=1;
				}
			}
		}
		if(count==0){
			cout<<"khong co vi tri nao thoa man ";
		}
		cout<<endl;
	int S;
	for(int i=0;i<n;i++){S+=a[i][i];}
	for(int i=2; i<sqrt(S);i++){
		if(S%i==0){ cout<< "ko phai la so nguyen to"; return 0;}
		
	}
	cout<<"la so nguyen to!";
	return 0;
}
