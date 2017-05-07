#include <iostream.h>
#include <stdlib.h>
int main(){
  int nl;         //количество концов строк
  int space;       //количество пробелов
  int num;       //Количество символов
  char x; //текущий символ
  int nlet[10];    //количество разных
  char let[10]={'a','A','b','B','c','C','d','D','e','E'};
  int i;   //индекс
  cout<<"Программа подсчета пробелов, концов строк и букв"<<endl;
  nl=0;
  space=0;
  num=0;
  for(i=0;i<10;i++)nlet[i]=0;
  while((x=(char) cin.get())!=EOF)
          {if(x==' ') space++;
           if(x=='\n')nl++;
             num++;
             for (i=0;i<10;i++)if(x==let[i])nlet[i]++;
                  }//конец while
  cout<<"Количество символов "<<num<<", пробелов "<<space<<", концов строк "<<nl<<endl;
  cout<<"Количество букв"<<endl;
  for (i=0;i<10;i++) cout<<"буква "<<let[i]<<": "<<nlet[i]<<endl;
  return EXIT_SUCCESS;  
           }      //конец while
