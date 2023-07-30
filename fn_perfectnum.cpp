#include<iostream>
using namespace std;
int pr()
{
    int num,i,sum=0;

    cout<<"entr num:";
    cin>>num;

    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            cout<<"\n"<<i;
            sum+sum+i;
        }
    }

    if(sum == num)
    {
        cout<<"\nNum is perfect";
    }
    else
    {
        cout<<"\nNum is not perfect";
    }
}

int main()
{
    pr();
}