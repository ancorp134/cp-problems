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

    int n; cin>>n;
    vi a(n),b(n);
    fri(i,0,n) cin>>a[i];
    fri(i,0,n) cin>>b[i];

    vector<pair<int,int>> vp;

    fri(i,0,n) vp.push_back({b[i],a[i]});

    sort(all(vp));
    // for(auto i : vp){
    //     cout<< i.first << " "<<i.second << endl;
    // }

    ll ans = 0, sp = 0;

    for(auto i : vp){
        ans += i.second + sp;
        sp = i.first;
    }

    cout<< ans << endl;

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