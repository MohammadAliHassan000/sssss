#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    n=n+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<i;j++)
        {
            if(i==1)
            {
                cout<<j;
            }
            else
            {
                cout<<j<<" ";
            }
            
        }
        for(int j=i-1-1;j>=0;j--)
        {
            // cout<<"HERE";
            if(j==0)
            {
                cout<<j;
            }
            else 
            {
                cout<<j<<" ";
            }
            
        }
        
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        
        for(int j=0;j<n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<i;j++)
        {
            if(i==1)
            {
                cout<<j;
            }
            else 
            {
                cout<<j<<" ";
            }
            
        }
        for(int j=i-1-1;j>=0;j--)
        {
            // cout<<"HERE";
            if(j==0)
            {
                cout<<j;
            }
            else 
            {
                cout<<j<<" ";
            }
            
        }
        
        cout<<endl;
    }
    
    return 0;
}