
#include <iostream>
using namespace std;
bool test(int a[],int k)
{
    for (int i=0;i<k;i++)
        if (a[k]==a[i])
            return false; 
    return true;
}
void sosanh(int a[], int b[],int n)
{
int k;
cout<<"cac phan tu giong nhau o 2 mang: "; 
lap: for (int i=0;i<n;i++)
	{ for (int j=0; j<n;j++)
		{if(a[i]==b[j]) 
		{ cout<<a[i]<<" ";break;}
		
		}
}
}

int main()
{ int n;
	cout<<"nhap so phan tu mang: "; cin>>n;
	int *a= new int [n];
	int *b= new int [n];
	for(int i=0; i<n;i++)
	{cout<<"a["<<i<<"]= ";cin>>a[i];
	}
cout<<"mang da bo bot phan tu trung nhau: ";
for (int i=0;i<n;i++)
        { if (test(a,i)==true)
            cout<<a[i]<<" ";}
	cout<<endl;
//nhap, xuat mang a
for(int i=0; i<n;i++)
	{cout<<"b["<<i<<"]= ";cin>>b[i];
	}
cout<<"mang da bo bot phan tu trung nhau: ";
for (int i=0;i<n;i++)
        { if (test(a,i)==true)
            cout<<b[i]<<" ";}
	cout<<endl;
//nhap, xuat mang b
	sosanh(a, b, n);
	delete[] a;
	delete[] b;
	return 0;
}
