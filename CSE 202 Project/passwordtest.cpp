#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
   int i;
   char m,a[100];
   i=0;
   cout<<"enter\n";
   while(1)
   {
     m=_getch();

     if(m==13)
     break;


     else
     cout<<"*";
     a[i]=m;
     i++;
   }
   cout<<endl;
   cout<<a;
   cout.flush();


   return 0;
}
