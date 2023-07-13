#include<iostream>
using namespace std;
int main()
{
    char a,b;

    cout<<"Enter character:";
    cin>>a;

   if(a>=65 && a<97)
   {
        b=a+32;
        cout<<b;
   }
   else if(a>=97 && a<=122)
   {
        b=a-32;
        cout<<b;
   }
   
}