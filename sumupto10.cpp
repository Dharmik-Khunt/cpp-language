#include<iostream>
using namespace std;
int main()
{
    int sum=0,i;

    for(i=0; i<=10; i++)
    {
        cout<<"\t"<<i;

        sum = sum +i;
    }

    cout<<"\nSum is:"<<sum;

}