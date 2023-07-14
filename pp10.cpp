#include<iostream>
using namespace std;
int main()
{
    int a,b;

    for(a=5; a>=1; a--)
    {
        for(b=a; b<=5; b++)
        {
            cout<<"\t"<<b;
        }
        cout<<"\n";
    }
}