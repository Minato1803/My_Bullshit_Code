#include<iostream>
#include <vector>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
#define ll long long

ll slxh(ll a[],ll i, ll n)
{
	ll j=0,temp=a[i];
	ll dem=0;
	for(ll i=0;i<n;i++)
	{
		if(temp==a[i])
		{
			dem+=1;
		}
	
	}
	return dem;
}

int main()
{
	ll n, max=0;
	cin>>n;
	ll *a= new ll[n];
		for(ll i=0; i<n;i++){
			cin>>a[i];
		}
		for(ll i=0;i<n;i++){
			if(slxh(a,i,n)>max) { max=slxh(a,i,n);}
		}
	cout<<max;
	return 0;
	
}
