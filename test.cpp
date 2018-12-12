//Thuchanh_tính n!
#include <iostream>
using namespace std;
int main ()
{
	int n,d=1;
	cout<<"nhap vao so nguyen n= "; cin>>n;
	d=n;
	for(n>1;--n;)
	{
	d*=n;}
	cout<<n<<"!= "<<d;
	return 0;
}
