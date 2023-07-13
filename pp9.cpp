#include<iostream>
using namespace std;
int main()
{
    char a,b,c=65;

    for(a=1; a<=5; a++)
    {
        for(b=1; b<=a; b++)
        {
            cout<<"\t"<<c++;
        }
        cout<<"\n";
    }
}