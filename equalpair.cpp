#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(1002,0);
	    int count;
	    for(int i=0;i<n;i++)
	    {
	        cin>>count;
	        v[count]++;
	        
	    }
	    int max=*max_element(v.begin(),v.end());
	    cout<<n-max<<endl;
	    
	}
	return 0;
}
