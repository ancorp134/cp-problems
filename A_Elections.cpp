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
    ll a,b,c; cin>>a>>b>>c;
    ll maxi = max({a,b,c});
    if(maxi==0){
        cout<<1<<" "<<1<<" "<<1<<endl;
        return;
    }
    cout << (maxi==a ? 0 : maxi-a+1) <<" "<< (maxi==b ? 0 : maxi-b+1) <<" "<< (maxi==c ? 0 : maxi-c+1) << endl;
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