#include<iostream>
using namespace std;
int main()
{
    char a,b,c=65,z;

    for(a=1; a<=5; a++)
    {
        for(b=1; b<=a; b++)
        {
            if(b%2==0)
            {
                cout<<"\t"<<c;
            }
            else
            {
                z=c+32;
                cout<<"\t"<<z;
            }
            c++;
        }
        cout<<"\n";

    }
}