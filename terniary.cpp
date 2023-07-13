#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i;

    cout<<"Enter A:";
    cin>>a;

    cout<<"Enter B:";
    cin>>b;

    cout<<"Enter C:";
    cin>>c;

    i = a>b ? a>c ? a:c:b>c ? b:c;
    cout<<"Ans:"<<i;
    

   
}