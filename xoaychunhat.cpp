#include <iostream>
#include <math.h>
using namespace std;
#define COL 100
#define ROW 100

void vongxoay(int hang,int cot,int n, int b[][100] )
{   int vth=0, vtc=0, j=0, h=hang,c=cot;
    int  a[n];   
 while(vth<=(h-1)/2||vth<=2){
   for(int i=vtc; i<c; i++){
       a[j]=b[vth][i];
	   j++;//a[0][0] den a[0][6]
  } //chay hang phia tren
   for(int i=vth+1; i<h; i++){
   	   a[j]=b[i][c-1];
		  j++;//a[1][6] den a[6][6]
   }//chay hang ben phai
   for(int i=c-2; i>=vtc; i--){
   	   a[j]=b[h-1][i];
		  j++;//a[6][5] den a[6][0]
   }//chay hang duoi
   for(int i=h-2; i>=vth+1; i--){
   	   a[j]=b[i][vtc];
		  j++;//a[5][0] den a[1][0]
   } //chay hang ben trai
   vth++; vtc++; h--; c--;}//di vao trong}
   cout<<"day xoay oc xuat ra: "<<endl;
   for(int i=0; i<hang*cot; i++){
			cout<< a[i]<< " ";}
}


int main()
{int hang, cot,n;
cout<<"nhap so hang: "; cin>>hang;
cout<<"nhap so cot: "; cin>>cot;
n=hang*cot;
int b[hang][100];
	cout<<"nhap vao day so: "<<endl;
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			cin>>b[i][j];}}
  vongxoay(hang,cot,n,b);
  return 0;
}
