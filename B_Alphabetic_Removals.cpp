#pragma GCC optimize("O3") 

#include <bits/stdc++.h>
using namespace std;

typedef long long int           ll;
typedef unsigned long long int  ull;
typedef long double             ld;

typedef pair<int, int>          pii;
typedef pair<ll,ll>             pll;
typedef vector<int>             vi;
typedef vector<ll>              vll;
typedef vector<pii>             vpii;
typedef vector<pll>             vpll;

#define f(i, a, b)          for(int (i) = (a); (i) < (b); ++(i))
#define all(a)              (a).begin(), (a).end()
#define endl                "\n"
#define ff                  first
#define ss                  second
#define pb                  push_back
#define gcd            __gcd
#define endl           "\n"
#define setbits(x)     __builtin_popcountll(x)
#define zrobits(x)     __builtin_ctzll(x)
#define fast                ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) (a).begin(), (a).end()
#define mx9     1000000007
#define mx7     10000007
#define mx6     1000006
#define mx5     200005
#define inf     1<<30                                 
#define eps     1e-9
#define mod     1000000007
#define PI      3.141592653589793238462643383279502884L

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(char x='a';x<='z';x++)
    {
        if(k==0){
            break;
        }
        for(int i=0;i<n;i++)
        {
            if(k==0) break;
            if(s[i]==x){
               s[i]='$';
               k--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='$'){
            continue;
        }
        cout<<s[i];
    }
    return;
}

int main()
{
    fast;

    int t=1; 
    // cin >> t;
    while(t--){
        solve();
     }

    return 0;
}