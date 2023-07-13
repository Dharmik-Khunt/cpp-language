#include<iostream>
using namespace std;
int main()
{
    char a,i;

    for(i=0; i<=90; i++)
    {
        if(i%2==0)
        {
            a=i+32;
            cout<<"\t"<<a;
        }
    }
}