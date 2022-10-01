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
        ll int n;
        cin>>n;
        vl v;
        for(int i=0;i<n;i++){
            ll int k;
            cin>>k;
            v.push_back(k);
        }
        sort(all(v));
        ll int ans1=v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5];
        
        ll int ans2=v[0]*v[1]*v[n-1]*v[n-2]*v[n-3];
        ll int ans3=v[0]*v[1]*v[2]*v[3]*v[n-1];
      
        cout<<max(ans1,max(ans2,ans3))<<endl;

    return;
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