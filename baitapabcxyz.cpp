#include <iostream>
#include <math.h>
using namespace std;

float S(int x, int n)
{ 
	float Sn=1;
	float j=0;
	for(int j=0;j<=n;j++)
	{
	 int d=1;
		for(int i=1; i<=(2*j+1); i++){
			d*=i;
		}
		Sn+=pow(x,2*j+1)/d;
	}
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

