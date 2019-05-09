#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "graphics"

#define MAXX getmaxx()
#define MAXY getmaxy()
#define SIZE 50
#define CL_khung RED

void Fill(int i,int j)//to o ban co
 {
	if((i+j)%2==0) {
					 setfillstyle(SOLID_FILL,3);
					 floodfill(j*SIZE+13,MAXY-i*SIZE-13,WHITE);
				  }
			else {
					 setfillstyle(SOLID_FILL,5);
					 floodfill(j*SIZE+13,MAXY-i*SIZE-13,WHITE);
				  }
 }

void ban_co(int a=1)    //ve ban co
 {
	 int i,j;
		setcolor(WHITE);
	for(i=0;i<8;i++)
		for( j=0;j<8;j++)
		 {      
                        if(a)
			rectangle(j*SIZE+10,MAXY-i*SIZE-10,(j+1)*SIZE+10,MAXY-(i+1)*SIZE-10);
			Fill(i,j);//to o ban co
		 }
 }

void khung()//ve khung
 {
  //khung va nen
  setcolor(CL_khung);
  rectangle(0,0,MAXX,MAXY);
  setfillstyle(SOLID_FILL,BLACK+BLUE);
  floodfill(1,1,CL_khung);
  //bong do 3D cho ban co
  setfillstyle(1,BLACK+DARKGRAY);
  bar(8*SIZE+10,MAXY-5,8*SIZE+15,MAXY-8*SIZE-5);
  bar(15,MAXY-5,8*SIZE+10,MAXY-10);
 }

//not graphics
const N=8;
const soO=64;
const O_FREE=0;
const H[8]={-2,-1,1,2, 2, 1,-1,-2};
const C[8]={ 1, 2,2,1,-1,-2,-2,-1};

int a[12][12];
unsigned socach=0;
int dau=2,x0,y0;

void WriteResult()//viet ket qua
{
  ban_co(0);//ve lai khi nhay sang buoc khac
  int i,j;
  char c[2];
  socach+=1;
  setcolor(BLACK);
  for(i=2;i<10;i++)
	{
	  for(j=2;j<10;j++)
	  outtextxy((j-2)*SIZE+5+SIZE/2,MAXY+(i-2)*SIZE-405+SIZE/2,itoa(a[i][j],c,10));
	}
   getch();
}

void Try(int sb,int u,int v)//thu cac buoc chay cua Ma
{
  int i,x1,y1;
  for(i=0;i<8;i++)
	{//start for
		 x1=u+H[i];
		 y1=v+C[i];
	  if(a[x1][y1]==O_FREE)
		  {//start if
			 a[x1][y1]=sb;
			  if(sb==soO) WriteResult();
			  else Try(sb+1,x1,y1);
			  a[x1][y1]=O_FREE;
		  }//end if
	}//end for
}

void ma_di_tuan(int x,int y)
{
	int i,j;
	for(i=0;i<12;i++)
	 for(j=0;j<12;j++)
		a[i][j]=-1;
	for(i=dau;i<10;i++)
	 for(j=dau;j<10;j++)
		a[i][j]=O_FREE;
	a[x+dau-1][y+dau-1]=1;
	Try(2,x+dau-1,y+dau-1);
}
 //function main
main()
{
 int d,c;
  printf("\nNhap dong");
   scanf("%d",&d);
  printf("\nNhap cot");
   scanf("%d",&c);
  int mh=DETECT,kieu;
  initgraph(&mh,&kieu,"c:\\tc\\bgi");
  khung();//khung
  ban_co();//ban co
  ma_di_tuan(d,c);
  getch();
  closegraph();
  return 0;
}
