#include <iostream>
#include <math.h>
using namespace std;

float S(int x, int n)
{	float Sn=1;  
	int d=1;
		for(int i=1; i<=n; i++){
			d*=i;
		}
		Sn=S(x,n-2);
	return Sn;
}
int main()
{
	int n,x;
	cin>>n;
	cin>>x;
	cout<<S(x,n);
	return 0;
}
