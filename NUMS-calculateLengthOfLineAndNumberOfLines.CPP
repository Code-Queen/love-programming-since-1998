#include <iostream.h>
#include <stdlib.h>
int main(){
  int len;       //Длина строки
  int num;       //Количество строк
  char str[100]; //Строка символов
  cout<<"Программа подсчета длины и количество строк"<<endl;
  num=0;
  len=0;
  while((str[len]=cin.get())!=EOF)
          {if(str[len]=='\n')
            {str[++len]='\0';
             num++;
             cout<<str;
             cout<<"длина строки "<<num<<"равно"<<len<<" символов"<<endl;
             len=0;
          }
   else len++;
          }      //конец while
                             
                                