#include <iostream>
using namespace std;

void vongxoay(int a[],int hang,int cot )
{   int b[hang][cot], h=hang,c=cot;
    int  vth=0, vtc=0, j=0;   
 while(vth<=(h-1)/2||vth<=2){
   for(int i=vtc; i<c; i++){
       b[vth][i]=a[j];
	   j++;//a[0][0] den a[0][6]
  } //chay hang phia tren
   for(int i=vth+1; i<h; i++){
   	   b[i][c-1]=a[j];
		  j++;//a[1][6] den a[6][6]
   }//chay hang ben phai
   for(int i=c-2; i>=vtc; i--){
   	   b[h-1][i]=a[j];
		  j++;//a[6][5] den a[6][0]
   }//chay hang duoi
   for(int i=h-2; i>=vth+1; i--){
   	   b[i][vtc]=a[j];
		  j++;//a[5][0] den a[1][0]
   } //chay hang ben trai
   vth++; vtc++; h--; c--;}//di vao trong}
   cout<<"day xoay oc xuat ra: "<<endl;
   for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			cout<< b[i][j]<< " ";}
		    cout << endl;}
}


int main()
{int hang, cot, n;
cout<<"nhap do lon canh cua mang xoay oc: "; cin>>n;
hang=cot=n;
int a[n*n];
	cout<<"nhap vao day so: "<<endl;
	for(int i=0; i<(n*n);i++){
		cin>>a[i];
	}
	cout<<"day so vua nhap: "<<endl;
	for(int i=0; i<(n*n);i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
  vongxoay(a,hang,cot);
  return 0;
}
