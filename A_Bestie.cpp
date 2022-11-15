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
    vi v(n+1);

    fri(i,1,n+1) cin>>v[i];

    int curr_gcd=v[0];
    fri(i,1,n+1){
        curr_gcd = __gcd(curr_gcd , v[i]);
    }

    if(curr_gcd==1){
        cout<<"0"<<endl;
        return;
    }

    int ans = 3;

    fri(i,1,n+1){
        int val = __gcd(i,curr_gcd);
        if(val==1){
            ans = min(ans , n-i+1);
        }
    }

    cout << ans << endl;

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