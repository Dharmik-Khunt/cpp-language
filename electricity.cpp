#include<iostream>
using namespace std;
int main()
{
    float unit,rupees;

    cout<<"Enter unit:";
    cin>>unit;

   if(unit<=200)
   {
        rupees=((60*unit)/100)+50;
        cout<<"Total charge:"<<rupees;
   }
   else if(unit<=300)
   {
        rupees=((80*unit)/100)+50;
        cout<<"Total charge:"<<rupees;
   }
   else if(unit>300)
   {
        rupees=((90*unit)/100)+50;
        cout<<"Total charge:"<<rupees;
   }

   if(rupees>300)
   {
    cout<<"\nTotal amount:"<<rupees+(rupees*15/100);
   }
   else
   {
        cout<<"\nTotal amount:"<<rupees;
   }
}