#include <iostream.h>
#include <stdlib.h>
int main ()
 {
   int a;
   char ch;
  do
    {
   cout<<"Программа выдачи сообщения"<<endl;
   cout<<"Введите число от 1 до 5:";
   cin>>a;
   switch(a)
     { case 1: cout<<"Молодец, попал в 1"<<endl; break;
       case 2: cout<<"А не двоечник ли ты?"<<endl; break;
       case 3: cout<<"Тройка - это удовлетворительно - сойдет"<<endl; break;
       case 4: cout<<"Это хорошая оценка,лучше и не надо"<<endl; break;
       case 5: cout<<"Какой умный нашелся -пятерку хочет"<<endl; break;
       default:cout<<"Ты читать умеешь? Написано - от 1 до 5"<<endl; break;
     } //Конец switch

       cout<<"Будете еще вводить число ?[YES/NO]";
       cin>>ch;
     } // Конец do

       while (ch=='Y'||ch=='y');  
       return EXIT_SUCCESS;
  }      //Конец main