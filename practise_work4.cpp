#include<iostream>
using namespace std;
int main()
{
    char str[]="DHARMIK";
    int i,j;

    for(i=0; i<=6; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<" "<<str[j];
        }
        cout<<"\n";
    }
    return 0;
}