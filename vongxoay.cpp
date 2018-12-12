#include <iostream>
using namespace std;

#define ROW 100 
#define COL 100 


void vongxoay(int hang,int cot )
{   int a[hang][cot], h=hang,c=cot;
    int  vth=0, vtc=0, dem=1;
 while(vth<=(hang-1)/2||vth<=1){
   for(int i=vtc; i<c; i++){
       a[vth][i]=dem; dem++; //a[0][0] den a[0][6]
  } //chay hang phia tren
   for(int i=vth+1; i<h; i++){
   	   a[i][c-1]=dem; dem++;//a[1][6] den a[6][6]
   }//chay hang ben phai
   for(int i=c-2; i>=vtc; i--){
   	   a[h-1][i]=dem; dem++;//a[6][5] den a[6][0]
   }//chay hang duoi
   for(int i=h-2; i>=vth+1; i--){
   	   a[i][vtc]=dem; dem++;//a[5][0] den a[1][0]
   } //chay hang ben trai
   if(vth==h-1){break;}
   vth++; vtc++; h--; c--;}//di vao trong}
   for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			if(a[i][j]<10){cout<<" ";}
			cout<< a[i][j]<< " ";}
		    cout << endl;}
}


int main()
{int hang, cot;
int a[hang][cot];
		cout << "Nhap so dong: ";
	cin >> hang;
	cout << "Nhap so cot: ";
	cin >> cot;
  vongxoay(hang,cot);
  return 0;
}
