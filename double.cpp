#include<iostream>
using namespace std;
int main()
{
    int n,i;

    cout<<"Enter the value:";
    cin>>n;

    for(i=1; i<=n; i+=i)
    {
        cout<<"\t"<<i;
    }
}