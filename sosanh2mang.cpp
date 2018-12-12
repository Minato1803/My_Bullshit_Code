//Nh?p vào mãng A có N ph?n t? ki?u nguyên (integer). Nhap vào so nguyên m < N, sau do dich chuyen m phan tu cuoi mang lên dau mang
#include <iostream>
using namespace std;

void nhapmang(int a[],int b[],int n)
{ for(int i=0; i<n;i++)
	{cout<<"a["<<i<<"]= ";cin>>a[i];
	}
cout<<"mang da nhap: ";
for (int i=0;i<n;i++)
{cout<<a[i]<<" ";}
cout<<endl;
//nhap, xuat mang a
for(int i=0; i<n;i++)
	{cout<<"b["<<i<<"]= ";cin>>b[i];
	}
cout<<"mang da nhap: ";
for (int i=0;i<n;i++)
 {cout<<b[i]<<" ";}
cout<<endl;
//nhap, xuat mang b
}

int sosanh(int a[], int b[],int c[],int n)
{
int k,m;
cout<<"cac phan tu giong nhau o 2 mang: "; 
lap: for (int i=0;i<n;i++)
	{ for (int j=0; j<n;j++)
		{if(a[i]==b[j]){ 
			for (int dem= m;i<n;m<n)
			{
			c[dem]=a[i]; --m;}break;}
		}
		}

}
bool test(int a[],int k)
{
    for (int i=0;i<k;i++)
        if (a[k]==a[i])
            return false; 
    return true;
}

int main()
{ int n;
	cout<<"nhap so phan tu mang: "; cin>>n;
	int *a= new int [n];
	int *b= new int [n];
	int *c= new int [n];
	nhapmang(a,b,n);
	sosanh(a, b,c, n);
for (int i=0;i<n;i++)
        { if (test(a,i)==true)
            cout<<sosanh(a,b,c,n)<<" ";}	

	delete[] a;
	delete[] b;
	delete[] c;
	return 0;
}
