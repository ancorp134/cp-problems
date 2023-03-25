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

    vl v(n);

    fri(i,0,n) cin>>v[i];

    ll ans=0;

    fri(i,0,n){
        ans += (i+1)*(n-i);
        if(v[i]==0){
            ans += (i+1)*(n-i);
        }
    }

    cout<<ans<<endl;

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