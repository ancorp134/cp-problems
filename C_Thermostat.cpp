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
    int l, r, x;
	cin >> l >> r >> x;
	int a, b;
	cin >> a >> b;
	if (a == b) cout << "0\n";
	else if (abs(a - b) >= x) cout << "1\n";
	else if (abs(a - l) >= x && abs(l - b) >= x) cout << "2\n";
	else if (abs(a - r) >= x && abs(r - b) >= x) cout << "2\n";
	else if (abs(a - l) >= x && abs(l - r) >= x && abs(r - b) >= x) cout << "3\n";
	else if (abs(a - r) >= x && abs(r - l) >= x && abs(l - b) >= x) cout << "3\n";
	else cout << "-1\n";
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
     

