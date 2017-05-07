#include<iostream.h>
#include<stdlib.h>
double factorial(int n)
 { double res;     //Результат функции
   int i;          //Индекс
   res=1.0;
   for(i=2;i<=n;i++)res*=i;
   return res;
 }                 //Конец функции factorial
int main()
 { double r;
   int m=10;
   int k;
   cout<<"Программа вычисления факториала от 1 до "<<m<<endl;
   for(k=1;k<=m;k++)
   {r=factorial(k);
    cout<<k<<"! ="<<r<<endl;
   }
   return EXIT_SUCCESS;
 }                 //Конец main
  
