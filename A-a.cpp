#include<iostream>
using namespace std;
int main()
{
    char a,i;

    for(i=65; i<=97; i++)
    {
        a=i;
        cout<<"\t"<<a;
        a=i+32;
        cout<<"\t"<<a;
    }

}