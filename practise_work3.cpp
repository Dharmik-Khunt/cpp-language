#include<iostream>
using namespace std;
int main()
{
    char a[100],b[100];
    int i,j;

    cout<<"Enter the surname:";
    cin>>a;
    cout<<"Enter the name:";
    cin>>b;

    for(i=1; a[i]!='\0'; i++)
    {}
    a[i]=' ';
    i++;
    for(j=0; b[j]!='\0'; j++)
    {
        a[i]=b[j];
        i++;
    }
    a[i]='\0';
    cout<<"Full name is:"<<a;
}