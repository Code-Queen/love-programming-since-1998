#include <iostream.h>
#include <stdlib.h>

 int main(){
 const float f=2.54;  // 1дюйм равен 2.54см
 float x,cm,in;       // in - это дюймы ,cm - сантиметры
 char ch=0;           // сh - единицы длины(дюймы или сантиметры

 cout<<"Программа перевода единиц длины"<<endl;
 do
   { cout<<"Введите длину(например3.2 i или 5.8c):";
     cin>>x;              // читаем значение длины
     cin>>ch;             // читаем единицы длины i или c
     cm=f;in=1.0;         // 1дюйм=2.54см
     if(ch=='c'|| ch=='C')
       { cm=x;
         in=cm/f;
       }
     if(ch=='i'||ch=='I')
       { in=x;
         cm=in*f;
       }
     cout<<cm<<" сантиметров равно "<<in<<" дюймов"<< endl;
     cout<<"Будем еще переводить длину? [Yes/No] :";
     cin>>ch;                  // Читаем ответ:y/n 
   } while(ch=='y'||ch=='Y'); // Продолжаем, если ответ Yes
 return EXIT_SUCCESS;
}
