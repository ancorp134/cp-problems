// Author : Ankit Tyagi
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fri(i,a,b) for(int i=a;i<b;i++)
#define frd(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pp pop_back
#define all(x) (x).begin(), (x).end()
#define dec greater<int>
#define endl "\n"
 
 
 
void solve(){
    int n, k;
	cin >> n >> k;
	vector<long long> s(n + 1);
	for (int i = n - k + 1; i <= n; ++i)
		cin >> s[i];
	if (k == 1)
	{
		cout << "YES" << endl;
		return;
	}
	vector<long long> a(n + 1);
	for (int i = n - k + 2; i <= n; ++i)
		a[i] = s[i] - s[i - 1];
	if (!is_sorted(a.begin() + n - k + 2, a.end()))
	{
		cout << "NO" << endl;
		return;
	}
	if (s[n - k + 1] > a[n - k + 2] * (n - k + 1))
	{
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
    return;
}
     

 
int main(){
	fast;
	int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}