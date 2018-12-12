#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    cout<<"Nhap:";
    gets(a);
    cout<<a<<endl;
    int count=0;
    for (int i=0;i<strlen(a);i++){
		for (int i=0;i<strlen(a)-1;i++)
    	{ 	if(a[i]==' ') {count+=1;
				for(int k=i;k<strlen(a)-1;k++){
					a[k]=a[k+1];
				}
			}
		}
	}
	a[strlen(a)-count]='\0';
	cout<<"mang sau khi chuyen:";
	cout<<a;			
	return 0;}

