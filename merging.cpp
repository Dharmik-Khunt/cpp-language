#include<iostream>
using namespace std;
int main()
{
    char a[50],b[50];
    int i,j;

    cout<<"Enter name:";
    cin>>a;

    
    cout<<"Surname:";
    cin>>b;

    for( i=0; a[i]!='\0'; i++)
    {}
        for( j=0; b[j]!='\0'; j++)
        {
           a[i]=b[j];
           i++;
        }
        a[i]='\0';
       
        cout<<"Full name:"<<a;
}