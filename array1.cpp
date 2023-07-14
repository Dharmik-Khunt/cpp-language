#include<iostream>
using namespace std;
int main()
{
    int a[10],even_sum=0, odd_sum=0, num;

    cout<<"enter the value:";
    cin>>num;

    for(int i=0; i<10; i++)
    {
        if(i%2==0)
        
            even_sum=even_sum+i;
        
        else
        
            odd_sum=odd_sum+i;
        }

        cout<<"Even sum:"<<even_sum;
        cout<<"\nOdd sum:"<<odd_sum;
    }

