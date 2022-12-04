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
    ll n; cin>>n;
    vl a(n), b(n);
    fri(i,0,n) cin>>a[i];
    fri(i,0,n) cin>>b[i];

    vector<vl> vp(2);

    fri(i,0,n){
        vp[a[i]].pb(b[i]);
    } 

    fri(i,0,2){
        sort(all(vp[i]));
    }

    ll ans = 0;

    if(vp[0].size()==vp[1].size()){
        ans-= min(vp[0][0],vp[1][0]);
    }

    while(vp[0].size() && vp[1].size()){
        ans += (vp[0].back() + vp[1].back())*2;
        vp[0].pp();
        vp[1].pp(); 
    }

    while(vp[0].size()){
        ans += vp[0].back();
        vp[0].pp();
    }

     while(vp[1].size()){
        ans += vp[1].back();
        vp[1].pp();
    }

    cout<< ans << endl;

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