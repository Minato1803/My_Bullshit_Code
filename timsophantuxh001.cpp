#include <iostream>
using namespace std;

void nhapmang(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
}

int timsolanxh(int a[], int n)
{
	int solanxh = 0, count = 0, vitri=a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			count++;
			if (count > solanxh)
			{
				count = solanxh; vitri = a[i];
			}
		}
		else
			count = 1; vitri = a[0];
	}
	return vitri;

}
 
int main()
{
    int a[1000], n;cin >> n;
	nhapmang(a, n);
	int phantu = timsolanxh(a, n);
	cout << phantu;
	return 0;


}
