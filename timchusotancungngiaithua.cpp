//
//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixed<<setprecision(x)

//====================================================================================================

ll div10(ll a)
{
	ll tmp=0;
	while(a%10==0&&a!=0)
	{
		tmp++;
		a/=10;
	}
	return tmp;
}

int main()
{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	ll s=1,a=1;
		for(ll j=0;j<=(n/10);j++)
		{
			ll count=0;
			for(ll i=j*10;i<=j*10+9,i<=n;i++,count++)
			{
				if(i==j*10)
					i=pow(10,div10(i));
				s=(s*i);
				s/=pow(10,div10(s));
				s%=10;
//				cout<<s<<endl;
				if(count==9||i==n)
				{
					s/=pow(10,div10(s));
//					cout<<s<<endl;
					a=(a*s)%10;
					s=1;
					break;
				}
			}
		}
		cout<<a;
//	}
	return 0;
}
