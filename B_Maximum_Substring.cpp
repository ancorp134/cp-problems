// Author : Ankit Tyagi
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fri(i,a,b) for(ll i=a;i<b;i++)
#define frd(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define vi vector<ll>
#define vl vector<ll>
#define pp pop_back
#define all(x) (x).begin(), (x).end()
#define dec greater<ll>
#define endl "\n"
 
 
 
void solve(){
    
    ll n; cin>>n;
    string s; cin>>s;

    ll x = count(all(s) , '1');
    ll y = count(all(s) , '0');

    ll o=0,z=0;

    ll cnt = 0;
    fri(i,0,n){
        if(s[i]=='1'){
            o++;
            z=0;
        }
        else{
            z++;
            o=0;
        } 
        cnt = max({cnt,z,o}); 
    }

    // cout<< cnt << endl;

    cout << max (cnt*cnt , x*y) << endl;
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