#include <iostream>
#include <iomanip>
using namespace std;

void Nhapso(int &n)
{
	cout<<"nhap n: ";
	loop:
	cin>>n;
	if( (n<=10 || n>=100) || (n % 2 == 0) )
	{
		cout<<"khong thoa dieu kien, nhap lai n: ";
		goto loop;
	}	
}

int Giaithua(int n)
{
	int result = 1;
	for(int i = 2 ;i<=n;i++)
	{
		result*=i;
	}
	return result;
}

float TinhF(int n)
{
	float result = 0;
	for(int i=1 ; i<=n; i++)
	{
		result += (float) (1 + Giaithua(i)) / (i + n);
	}
	return result;
}

int main()
{
	int n;
	Nhapso(n);
	cout<<"Giai thua cua n:";
	cout<<Giaithua(n)<<endl;
	cout<<"F(n) = ";
	cout<<TinhF(n)<<endl;
	return 0;
}
