#include<iostream>
using namespace std;
void nhapn( int & n)
{
	int d=0;
	cout<<"nhap n";
	cin>>n;
	
	for(;n<1;)
	{
	n=n/10;
	
	d++;
	}
	
	if(d!=2)
	{ cout<<"nhap lai n:";
	cin>>n;
	
	}
	
	
		
	
	}
void dao(int&n)
{
	int i,a;
	i=n%10;
	a=n/10;
	i=i*10;
	n=a+i;
	cout<<"dao n la:"<<n;
	
	
}
int ktnguyento(int &n)
{   
     int d=0,kt=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			d=d+1;
		}
	}
	if(d==2)
	{
		cout<<n<<" la so nguyen to";
	}
	else 
	cout<<n<<" ko la so nguyen to";
}
	

int main()
{
	int a[100];
	int n;
	nhapn(n);
	ktnguyento(n);
	cout<<endl;
	dao(n);
	cout<<endl;
	
	ktnguyento(n);
	
	
	
	
	
	
	return 0;
}

