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
    int n; cin >> n;
    
    auto s = to_string(n);
    
    string a, b;
    
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        int v = s[i] - '0';
        int x, y;
        if (sum > 0) {
            x = v / 2;
        } else {
            x = (v + 1) / 2;
        }
        y = v - x;
        a += '0' + x;
        b += '0' + y;
        sum += x - y;
    }
    
    int x = stoi(a);
    int y = stoi(b);
    
    cout << x << " " << y << "\n";
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