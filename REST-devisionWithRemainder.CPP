#include<iostream.h>
#include<stdlib.h>
int a,b,c,d;
int main (){
cout<<"Программа деления чисел с остатком"<<endl;
cout<<"Ведите первое число a:";cin>>a;
cout<<"Введите второе число b:";cin>>b;
c=a/b;
d=a%b;
cout<<"a= "<<a<<" b= "<<b<<endl;
cout<<"a/b= "<<a/b<<", остаток="<<d<<endl;
return EXIT_SUCCESS;
}



