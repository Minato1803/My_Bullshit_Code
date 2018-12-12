// tinh Pn=(1+3+5+...+k)/(2+4+6+...+l)
#include <iostream>
using namespace std;

float P(unsigned int n)
{ float l,k; 
  for (int i=0;i<=n;i++){ 
		if(i%2==0){
		 l+=i;}
		 
}
  for (int i=0;i<=n;i++){
  		if(i%2!=0){
  			 k+=i;
		  }
  }
  float Pn= k/l;
  return Pn;
}

int main()
{ unsigned int n;
float Pn;
cout<<"nhap vap so nguyen duong n= "; cin>>n;
cout<<"gia tri cua Pn= "<<P(n);
return 0;
}
