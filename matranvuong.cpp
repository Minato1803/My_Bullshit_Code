#include <iostream>
using namespace std;
#define MAX 100
void inPutTask1(int M[][MAX], int n)
{
	cout<<"nhap vao ma tran vuong"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>M[i][j];
		}
	}
	
}

void Task1b(int M[][MAX],int n)
{
	cout<<"vi tri cac phan tu la so nguyen duong chan: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(M[i][j] > 0 && M[i][j] % 2 == 0)
			{
				cout<<"("<<i<<", "<<j<<") ";
			}
		}
	}
	cout<<endl;
}

void Task1c(int M[][MAX], int n)
{
	int maxNum = M[0][0], minNum = M[0][0];
	for(int i = 0; i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(maxNum < M[i][j])
			{
				maxNum = M[i][j];
			}
			if(minNum > M[i][j])
			{
				minNum = M[i][j];
			}
		}
	}
	cout<<"so lon nhat: "<<maxNum<<endl;
	cout<<"so nho nhat: "<<minNum<<endl;
	
}

void inPutTask2(int A[], int n)
{
	for(int i = 0;i<n;i++)
	{
		cin>>A[i];
	}
}

void Task2b(int A[], int n)
{
	int *tmp = new int[n];
	int index = 0;
	for(int i = 0 ;i<n;i++)
	{
		if(A[i] % 2 == 0)
		{
			tmp[index++] = A[i];
		}
	}
	
	for(int i = 0;i<index-1;i++)
	{
		for(int j = 0 ;j < index-i-1 ;j++)
		{
			if(tmp[j] > tmp[j+1])
			{
				int a = tmp[j];
				tmp[j] = tmp[j+1];
				tmp[j+1] = a;
			}
		}
	}
	for(int i = 0; i <index;i++)
	{
		cout<<tmp[i]<<" ";
	}
	cout<<endl;
	delete[] tmp;
	
}
void Task2c(int A[], int n)
{
	int maxEven = 0;
	
	for(int *i = A; i < (A+n); i++)
	{
		if((*i % 2 ==0) && maxEven < *i)
		{
			maxEven = *i;
		}
	}
	cout<<maxEven;
}

int main()
{
	int n;
	int M[MAX][MAX];
//	cout<<"nhap so phan tu cua ma tran vuong: ";
//	cin>>n;
//	inPutTask1(M,n);
//	Task1b(M, n);
//	Task1c(M,n);
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	int A[n];
	inPutTask2(A,n);
	Task2b(A,n);
	Task2c(A,n);
	return 0;
}
