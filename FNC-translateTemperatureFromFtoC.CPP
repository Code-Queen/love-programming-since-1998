#include <iostream.h>
#include <stdlib.h>
int main()
         {
 float f1,f2,step,x,c;
 cout<<"Программа перевода температур из Фаренгейтов в Цельсии"<<endl;
 cout<<"Введите начальное значение температуры:";
 cin>>f1;
 cout<<"Введите конечное значение температуры:";
 cin>>f2;
 cout<<"Введите шаг:";
 cin>>step;
 x=f1;
 while(x<=f2)
        { c=5.0/9.0*(x-32.0);
  cout<<x<<" Градусов Фаренгейта = "<<c<<" Градусов Цельсия"<<endl;
  x=x+step;
        }
 return EXIT_SUCCESS;
        }
