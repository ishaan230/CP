#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int num;
        int marks;
        cin>>marks;
        
        num=marks/100 +marks%100;
        if(num<=10)
        {
            cout<<num<<endl;
        }
        else 
        {
            cout<<-1<<endl;
        }
    }
    
}