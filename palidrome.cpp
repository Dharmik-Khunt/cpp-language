#include<iostream>
using namespace std;
int main()
{
    char a[100];
    int i,j,same=0,rev=0;

    cout<<"Enter the name:";
    cin>>a;

    for(i=0; a[i]!='\0'; i++)
    {
        same = a[i];
    }
    for(j=i; j>=0; j--)
    {
        cout<<a[j];
        rev = a[j];
    }

    if(same == rev)
    {
        cout<<"\nIs palidrome";
    }
    else
    {
        cout<<"\nNot palidrome";
    }
}