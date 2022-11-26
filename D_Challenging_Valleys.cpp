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

bool prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

void solve()
{
    int n;
    cin >> n;
    set<int> s;

    fri(i, 0, n)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << (prime(s.size()) ? "YES" : "NO") << endl;
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