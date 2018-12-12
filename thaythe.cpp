//thay the " " bang "_"
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    cout<<"Nhap:  ";
    cin.getline(a,100);
    cout<<a<<endl;
    for (int i=0;i<strlen(a);i++)
    { 	if(a[i]==' ') {
			a[i]='_'
		}
	
	cout<<"mang sau khi chuyen: "<<a;		
	return 0;}
