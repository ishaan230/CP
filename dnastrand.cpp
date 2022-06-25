#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int len;
    string str1;
    string str2="";
    cin>>len;
    cin>>str1;
    for(int i=0;i<=len;i++)
    {
        if(str1[i]=='A')
        {
            str2 +='T';
        }
        if(str1[i]=='T')
        {
            str2 +='A';
        }
        if(str1[i]=='C')
        {
            str2 +='G';
        }
        if(str1[i]=='G')
        {
            str2 +='C';
        }
    }
    cout<<str2<<endl;
   
    }
  return 0;
}