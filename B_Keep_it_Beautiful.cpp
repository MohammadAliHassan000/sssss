/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;

/********** pre-defined keywords ******************/

#define IO                      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb                      push_back
#define ppb                     pop_back
#define upper(s)                transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s)                transform(s.begin(), s.end(), s.begin(), ::tolower);
#define Imax                    pow(10,9)
#define sz(x)                   (int)x.size()
#define setbits                 __builtin_popcount
#define ff                      first
#define ss                      second
#define setbitsll               __builtin_popcountll
#define mp                      make_pair
#define all(x)                  (x).begin(),(x).end()

#define unordered_map           um;
/***************** short-hands ********************/

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vInt;
typedef stack<int> stInt;
typedef queue<int> qInt;
 
void solve()
{
    int n;
    cin>>n;
    string s;
    vInt v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<1;
    int i=1;
    int one=0;
    for(i ;i<n;i++)
    {
        if(v[i]<=v[0])
        {
            // cout<<"hereB";
            cout<<1;
            one =i;
            i++;
            for(i;i<n;i++)
            {
                if(v[i]<=v[0] && v[i]>=v[one])
                {
                    cout<<1;
                    one=i;
                }
                else
                {
                    cout<<0;
                }
            }
            break;
        }
        else if(v[i]>=v[one])
        {
            // cout<<"hereC";
            cout<<1;
            one=i;
        }
        else
        {
            // cout<<"hereD";
            cout<<0;
        }
        
    }
    cout<<endl;
}
signed main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}