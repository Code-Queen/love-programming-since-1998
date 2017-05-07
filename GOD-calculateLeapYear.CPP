#include<iostream.h>
#include<stdlib.h>
int main(){
int y;  //Год
int z,x,q;  //Остаток
cout<<"программа определения высокосного года"<<endl;
cout<<"Введите год:";
cin>>y;
z=y%4;
x=y%100;
q=y%400;
if((z==0&&x!=0)||q==0)cout<<"да,этот год высокосный"<<endl;
else cout<<"Очень хорошо.Год не высокосный"<<endl;
cout<<"Ох и долго же это считать"<<endl;
return EXIT_SUCCESS;
}       //Конец программы
