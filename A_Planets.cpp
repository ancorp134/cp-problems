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
    int n , c; cin>>n>>c;

    vi a(n);

    fri(i,0,n) cin>>a[i];

    unordered_map<int , int> mpp;

    fri(i,0,n) mpp[a[i]]++;

    int ans = 0;
    for(auto i : mpp){
        ans += min(c,i.second*1);
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