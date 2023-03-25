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
    int n;
    cin>>n;

    

    vi v(n);

    fri(i,0,n) cin>>v[i];

    if(n==1) {
        cout<<"0"<<endl;
        return;
    }

    int ans = INT_MIN;

    fri(i,0,n){
        ans = max(ans , v[(i-1+n)% n]-v[i]);
    }
   

    fri(i,1,n){
        ans = max(ans , v[i]-v[0]);
    }

    fri(i,0,n-1){
        ans = max(ans , v[n-1]-v[i]);
    }

    cout<<ans<<endl;
   
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