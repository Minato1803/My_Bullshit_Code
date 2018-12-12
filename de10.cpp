#include <iostream>
#include <math.h>
using namespace std;

float tinhS(int n)
{ float S=0; 
 for (int i=1;i<=n;i++)
   { S+=pow(-1.0,i)*(1.0/i);
   }
return roundf(S*100)/100;
}

int main()
{ float S;
  int n;
  cout<<"nhap n= "; cin>>n;
  cout<<endl<<"gia tri S= "<<tinhS(n);
  return 0;
}
