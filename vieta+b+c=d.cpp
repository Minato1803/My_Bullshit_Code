#include <iostream>
using namespace std;

int main()
{ int n, count=0, s=0;
  cout<<"nhap n= "; cin>>n;
  int *a= new int[255];
  
  for(int i=0; n>0;i++){
  	a[i]= n%10;
  	n/=10;
  	s=s+a[i];
  	count++;
           }
  for(int i=count-1; i>=0;i--){
        if(i==0){cout<<a[i]<<"= "<<s; break;}
           else cout<<a[i]<<"+";
		}
  delete[] a;
  return 0;
}
