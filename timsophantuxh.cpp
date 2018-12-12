#include <iostream>
using namespace std;

void nhapmang(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
		cout << endl;
	}
}

int timsolanxh(int a[], int n)
{
	int solanxh = 0, vitri=a[0];

		for (int i = 0; i <n; i++)
	{ 		int count=0;
		for (int j = n-1; j <=0; j--){	
			if (a[i] == a[j])
				count++;
				else count=1;
			if (count > solanxh||count==solanxh)
			{
				count = solanxh; vitri = a[i];
			}
			
		

	} }

	return vitri;
}

 
int main()
{
    int a[1000], n;
	cout << "nhap so phan tu mang= "; cin >> n;
	nhapmang(a, n);
	int phantu = timsolanxh(a, n);
	cout << "phantu " << phantu << " xuat hien nhieu nhat" <<endl;
	return 0;
}
