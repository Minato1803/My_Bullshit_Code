#include <iostream>
using namespace std;

int main()
{
char s[] = "12345678";
for(int i=0;i<5;i++)
{
	if(i%2==1)
		s[i] = '9';
}
	cout<<s;
}



