#include<iostream>
using namespace std;

struct StudentData
{
    int RollNo, phy, che, maths, total;
    float per;
    char name[50]; 
};

int main()
{
    struct StudentData s_data[3];

    for(int i=0; i<3; i++)
    {
        cout<<"Roll Num:";
        cin>>s_data[i].RollNo;
        cout<<"Name:";
        cin>>s_data[i].name;
        cout<<"Phy:";
        cin>>s_data[i].phy;
        cout<<"Chemistry:";
        cin>>s_data[i].che;
        cout<<"Maths:";
        cin>>s_data[i].maths;

        s_data[i].total = s_data[i].phy + s_data[i].che + s_data[i].maths;
        s_data[i].per = ( s_data[i].total * 100)/300;
        
    }

    cout<<"\n\tR.No\tName\tPhy\tChe\tMaths\tTotal\tPercentage\n";
    
    for(int i=0; i<3; i++)
    {
        cout<<"\t\t\t\t\t\t\t\n"<<s_data[i].RollNo,s_data[i].name,s_data[i].phy,s_data[i].che,s_data[i].maths,s_data[i].total,s_data[i].per;
    }
}