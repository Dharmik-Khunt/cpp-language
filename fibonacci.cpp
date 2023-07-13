#include<iostream>
using namespace std;
int main()
{
    int n1=-1,n2=1,n3,i,num;

    cout<<"Enter value:";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        n3=n2+n1;
        cout<<"\t"<<n3;
        n1=n2;
        n2=n3;
    }


}