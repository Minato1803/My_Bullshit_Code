#include<iostream>
using namespace std;

void nhapmang(int a[][100], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << "Nhap vao Mang A[" << i << "]" << "[" << j << "]: "<<endl;
            cin >> a[i][j];
        
        }

    }
}
void xuat(int a[][100], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << a[i][j]<<" ";
        }

    }
}

int main()
{ int dong,cot;

    cout << "Nhap dong: ";
    cin >> dong;
    cout << "Nhap cot: ";
    cin >> cot;
    int *a = new int [dong];
    for (int i = 0; i < dong; i++)
    {
        a[i] = new int [cot];
    }
    nhapmang(a, dong, cot);
    xuat(a, dong, cot);


    for (int i = 0; i < cot; i++)
    {
        delete[]a[i];
    }
    return 0;
}
