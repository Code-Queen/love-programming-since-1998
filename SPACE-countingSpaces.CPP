#include <iostream.h>
#include <stdlib.h>
int main(){
  int space;       //количество пробелов
  int num;       //Количество символов
  char x; //текущий символ
  cout<<"Программа подсчета пробелов"<<endl;
  space=0;
  num=0;
  while((x=(char) cin.get())!=EOF)
          {if(x==' ') space++;
             num++;
                  }//конец while
  cout<<"Количество символов "<<num<<", пробелов"<<space<<endl;
  return EXIT_SUCCESS;  
           }      //конец while
