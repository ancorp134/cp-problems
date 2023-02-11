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
    int n;
    cin >> n;
    vi v(n);

    int t = 0;
    fri(i, 0, n)
    {
        cin >> v[i];
        if (v[i] == 2)
            t++;
    }

    int k = 0;
    fri(i, 0, n)
    {
        if (v[i] == 2)
            k++;
        if (2 * k == t)
        {
            cout << i + 1 << endl;
            return;
        }
    }

    cout << "-1" << endl;
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