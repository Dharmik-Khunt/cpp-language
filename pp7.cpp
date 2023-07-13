#include<iostream>
using namespace std;
int main()
{
    char a,b,d=1,c=65,z;

    for(a=1; a<=5; a++)
    {
        for(b=1; b<=a; b++)
        {
           if(d%2==0)
           {
            z=c+32;
            cout<<"\t"<<z;
           }
           else
           {
            cout<<"\t"<<c;
           }
           c++;
        }
        d++;
        cout<<"\n";

    }
}