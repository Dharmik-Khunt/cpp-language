#include<iostream>
using namespace std;
int main()
{
    int n,i;

    cout<<"Enter the num:";
    cin>>n;

    for(i=0; i<=n; i+=2)
    {
        cout<<"\t"<<i;
    }

}