#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;

int main()
{
	cout<<"nhap chuoi: ";
	getline(cin,s);
	//xoa khoang trang dau
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]!=' ')
		{
			s=s.substr(i,s.length()-i);
			cout<<"sau khi xoa khoang trang dau"<<endl;
			cout<<s<<" "<<s.length()<<endl;
			break;
		}
	}
	
	//xoa khoang trang cuoi
	for(ll i=s.length()-1;i>=0;i--)
	{
		if(s[i]!=' ')
		{
			s=s.substr(0,i+1);
			cout<<"sau khi xoa khoang trang cuoi"<<endl;
			cout<<s<<" "<<s.length();
			break;
		}
	}
}
