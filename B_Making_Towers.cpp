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
    ll n;
    cin>>n;

    vl res(n,0);
    map<ll , vl> mpp;

    fri(i,0,n){
        int x; cin>>x;
        mpp[x-1].pb(i);
    }

    for(auto i : mpp){
        ll cnt=1;
        auto j = i.second;
        fri(k,1,j.size()){
            int temp = j[k] - j[k-1];
            if(temp&1) cnt++; 
        }

        res[i.first]=cnt;
    }

    for(auto i : res) cout<<i<<" ";
    cout<<endl;
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