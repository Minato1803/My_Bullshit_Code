//
#include <bits/stdc++.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixed<<setprecision(x)

//====================================================================================================

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n,k;
	cin>>n>>k;
	ll L[n+5],R[n+5],D[n+5];
	ll a[n+5];
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	ll top=0;
	D[0] = 0;
	for (int i = 0; i < n; ++i)
	{
    	while (top > 0 && a[D[top]] >= a[i]) --top;
    	L[i] = D[top] + 1;
    	D[++top] = i;
	}
	for(ll i=0;i<k;i++)
	{
		cout<<L[i]<<" ";
	}
	return 0;
}
