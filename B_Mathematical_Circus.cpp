// Author : Ankit Tyagi

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define fri(i, a, b) for (int i = a; i < b; i++)
#define frd(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pp pop_back
#define all(x) (x).begin(), (x).end()
#define dec greater<int>
#define endl "\n"

void solve()
{
    ll n,k; cin>>n>>k;
    
    if(k%4==0) cout<<"NO"<< endl;

    else if(k&1) {
        cout<<"YES"<<endl;
        for(int i=1;i<=n/2;i++){
            cout<< i+i-1 << " "<< i+i << endl;
        }
    }
    else {

        cout<<"YES"<<endl;
        for(int i=1;i<=n/2;i++){
            if(i&1) cout<< i+i << " " << i+i-1 << endl;
            else cout<< i+i-1 << " " << i+i << endl;
        }

    }

}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}