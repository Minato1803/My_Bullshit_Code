//
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
#define ll 				long long
#define db 				double
#define round(x) 		fixced<<setprecision(x)

//====================================================================================================


char up(char c)
{
	return (char) toupper(c);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s;
	loop:
	cout<<"Nhap ten ban cua tk xam lol:"<<endl;
	cin>>s;
	for(ll i=0;i<s.length();i++)
	{
		s[i]= up(s[i]);
	}
	if(s.find("TIEN")!=-1&&s.length()==4) 
		cout<<"dung roi! chinh la tml Tien";
	else 
	{
		cout<<"sai roi! ngu lam! nhap lai de:  (bi phat 3s do nhap ngu)"<<endl;
		Sleep(3000);
		system("cls");
		goto loop;
	}
	return 0;
}
