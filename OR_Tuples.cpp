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
    ll p,q,r; cin>>p>>q>>r;

    ll res=1;
    frd(i,30,0){
        ll val = ((p>>i)& 1 ) + ((q>>i) & 1) + ((r>>i) & 1);

        if(val ==2) continue;
        if(val==1) res = 0;
        if(val==3) res*= 4 ; 
    }

    cout<<res<<endl;
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