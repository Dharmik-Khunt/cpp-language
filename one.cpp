#include<iostream>
using namespace std;
int main()
{
    int a[100],i,size,max,min;

    cout<<"Enter size of array:";
    cin>>a;

    for(i=0; i<size; i++)
    {
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(i=0; i<size; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }

    cout<<"Max value:"<<max;
    cout<<"Min value:"<<min;
}