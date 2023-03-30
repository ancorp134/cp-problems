// Author : Ankit Tyagi

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define fri(i, a, b) for (ll i = a; i < b; i++)
#define frd(i, a, b) for (ll i = a; i >= b; i--)
#define pb push_back
#define vi vector<ll>
#define vl vector<ll>
#define pp pop_back
#define all(x) (x).begin(), (x).end()
#define dec greater<ll>
#define endl "\n"

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vl> a(n , vector<ll>(m));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    ll ans = 0;

    for (ll j = 0; j < m; j++)
    {
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            v.push_back(a[i][j]);
        }
        sort(v.begin(), v.end());

        ll p = v.size();

        ll currsum = 0;

        for (ll i = 0; i < p; i++)
        {
            ans += (v[i] * i - currsum);
            currsum += v[i];
        }
    }
    cout << ans <<endl;
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