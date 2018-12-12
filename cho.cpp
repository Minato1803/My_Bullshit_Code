//mot so dc goi la so hoan hao neu tong cac uoc cua no ( khac no) bang no 
//vd cac uoc cua 6 khac 6 la 1,2,3 1+2+3=6 => hoan cmn hao
//viet ct in ra so hoan hao tu 1 den 100
#include <iostream>
using namespace std;
int uoc(int n)
{  int d=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			d+=i;
		}
	}
	return d;
}

int main()
{ int n;
  cin>>n;
for(int i=1;i<=n;i++){
	if(i==uoc(i)){cout<<"hoan hao "<<i<<endl;}
}
return 0;
	
}
