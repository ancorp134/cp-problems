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
    ll n,q; cin>>n>>q;
    vl v(n) , pref(n);
    ll gsum=0;
    fri(i,0,n) {
        cin>>v[i];
        gsum+=v[i];
    }
    pref[0] = v[0];

    fri(i,1,n){
        pref[i] = v[i] + pref[i-1];
    }

    while(q--){
        ll l , r ,k; cin>>l>>r>>k;
        
        ll sum = l==1 ? pref[r-1] : pref[r-1]-pref[l-2];

        sum = (gsum-sum) + (r-l + 1)*k;

        cout<< (sum&1 ? "YES" : "NO") << endl;


    }

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