#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},sum=0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
        cout<<"\nSum is:"<<sum;
    }