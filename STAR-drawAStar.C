#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
void star(int r,int color,float deg)
{
 float p,q;
 int xs[5],ys[5];
 int i,x,y,k;
 float a[5],b[5]; /*Параметры прямых*/
 int xk[5],yk[5]; /*Внутренние точки*/
 int pg[10];      /*Массив для заполнения*/

 p=atan(1.0)/45.0;
 q=360.0/5.0;
 x=getmaxx()/2;
 y=getmaxy()/2;
 for(i=0;i<5;i++)
 {xs[i]=x+r*cos((i*q+90.0+deg)*p);
  ys[i]=y-r*sin((i*q+90.0+deg)*p);
 }
 for(i=0;i<5;i++) /*Вычисление наклона*/
 {k=i+2; if(k>=5)k=k-5;
  a[i]=((float)ys[k]-ys[i])/((float)xs[k]-xs[i]);
  b[i]=(float) ys[i]-a[i]*xs[i];
/*  printf("i=%d a=%f b=%f k=%d x1=%d x0=%d  y1=%d y0=%d\n",i,a[i],b[i],k,
          xs[k],xs[i],ys[k],ys[i]); */
 }

 for(i=0;i<5;i++) /*Вычисление внутренних точек*/ 
 {k=i-1;if(k<0)k+=5;
  xk[i]=(b[k]-b[i])/(a[i]-a[k]);
  yk[i]=a[i]*xk[i]+b[i];
 }
 setcolor(color);
 setfillstyle(SOLID_FILL,4);
 for(i=0;i<5;i++) /*Подготовка массива для закрашевания*/
 {pg[0]=xs[i];
  pg[1]=ys[i];
  pg[2]=xk[i];
  pg[3]=yk[i];
  k=i-1;if(k<0)k+=5;
  pg[4]=xk[k];
  pg[5]=yk[k];
  fillpoly(3,pg); /*Закрасить треугольник*/
 }
 /*Закрашиваем внутренности*/
 setfillstyle(XHATCH_FILL,14);
 pg[0]=xk[0];pg[1]=yk[0];
 pg[2]=xk[1];pg[3]=yk[1];
 pg[4]=xk[2];pg[5]=yk[2];
 pg[6]=xk[3];pg[7]=yk[3];
 pg[8]=xk[4];pg[9]=yk[4];
 fillpoly(5,pg);  /*Закраска этих самых внутренностей*/

               
 moveto(xs[0],ys[0]);
 lineto(xs[2],ys[2]);
 lineto(xs[4],ys[4]);
 lineto(xs[1],ys[1]);
 lineto(xs[3],ys[3]);
 lineto(xs[0],ys[0]);
 return;   /*end star*/
} 
int main(){
 /*Тестовая программа работы с графикой на языке Турбо-Си*/
 int gdriver=VGA,gmode=VGAHI,errorcode;
 int color,maxcolor,x,y,deg,r;
 initgraph(& gdriver,& gmode,""); /*Инициализация графики*/
 errorcode=graphresult();        /*Читаем результат инициализации */
 if(errorcode!=grOk)              /*Если ошибка*/
  {printf("Графическая ошибка: %s\n",grapherrormsg(errorcode));
   exit(1);
  }
 settextjustify(CENTER_TEXT,CENTER_TEXT);
/* for(r=5;r<=230;r++)
r=200;
for(deg=0;deg<=72;deg++)
{star(r,r%16,deg);
 delay(1);
 star(r,0,deg);
 } */
star(200,4,0); getch();
 closegraph();                    /*Закрываем графический режим*/
 return 0;
 }                                /*Конец программы main*/
