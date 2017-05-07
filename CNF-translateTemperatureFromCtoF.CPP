#include <iostream.h>
#include <stdlib.h>
int main()
 {
   float c1,c2,step,x,f;
   char ch;

   cout<<"Программа перевода температур Цельсия в Фаренгейты"<<endl;
   do
    {
     cout<<"Введите начальное значение температуры:";
     cin>>c1;
     cout<<"Введите конечное значение температуры:";
     cin>>c2;
     cout<<"Введите шаг:";
     cin>>step;
     for(x=c1;x<=c2;x=x+step)
        { f=9.0/5.0*x+32.0;
          cout <<x<<" градусов Цельсия = "<<f<<" градусов Фаренгейта"<<endl;
        } // конец for
     cout<<"Будете еще переводить градусы?[Yes/No]";
     cin>>ch;
    } // Конец do

 while(ch=='Y'||ch=='y');
 return EXIT_SUCCESS;
 }
