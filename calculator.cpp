#include<iostream>
using namespace std;
int main()
{
    float a,b,t;
    char op;
    cout<<"Enter operator:";
    cin>>op;

    cout<<"Enter A:";
    cin>>a;

    cout<<"Enter B:";
    cin>>b;

   switch(op)
   {
     case '+':
     t=a+b;
     cout<<t;
     break;

     case '-':
     t=a-b;
     cout<<t;
     break;

     case '*':
     t=a*b;
     cout<<t;
     break;

     case '/':
     t=a/b;
     cout<<t;
     break;

     default:
     cout<<"Enter valid operator!";
   }    

   
}