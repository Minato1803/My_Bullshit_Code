#include <iostream>
using namespace std;

#define ROW 100 // Max hang
#define COL 100 // Max column

int main()
{int hang, cot;
int arr[hang][cot];

	cout << "Nhap so dong: ";
	cin >> hang;
	cout << "Nhap so cot: ";
	cin >> cot;

	cout << "Nhap mang:" << endl;
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
