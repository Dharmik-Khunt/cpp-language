#include<iostream>
using namespace std;
int fibonacci(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else 
    {
        return fibonacci(num-1)+fibonacci(num-2);
    }
}

int main()
{
    int num,i;

    cout<<"Enter the num:";
    cin>>num;

    for(i=0; i<num; i++)
    {
        cout<<fibonacci(i);
    }
}