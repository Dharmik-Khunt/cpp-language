#include<iostream>
using namespace std;
int main()
{
    char a[50],b[50];
    int i,j=0;

    cout<<"Enter string:";
    cin>>a;

    for(i=0; a[i]!='\0'; i++)
    {}
    for(a[i]='\0'-1; i>=0; i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    cout<<"Reverse string:"<<b;
}