#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1] )
        {
            if(arr[i]==0)
            {
                continue;
            }
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}