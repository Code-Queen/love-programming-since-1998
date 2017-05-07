#include <iostream.h>
#include <stdlib.h>
int main(){
  int nl;         //количество концов строк
  int space;       //количество пробелов
  int num;       //Количество символов
  char x; //текущий символ
  cout<<"Программа подсчета пробелов и концов строк"<<endl;
  nl=0;
  space=0;
  num=0;
  while((x=(char) cin.get())!=EOF)
          {if(x==' ') space++;
           if(x=='\n')nl++;
             num++;
                  }//конец while
  cout<<"Количество символов "<<num<<", пробелов "<<space<<", концов строк "<<nl<<endl;
  return EXIT_SUCCESS;  
           }      //конец while
