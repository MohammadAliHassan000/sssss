#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m ;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int count=0,sum=0;
    while(sum<m)
    {
        sum+=arr[count++];
    }
    cout<<count<<endl;

    return 0;
}