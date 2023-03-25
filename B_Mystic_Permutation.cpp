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

    vl a(n+1) , b(n+1);
    fri(i,1,n+1){
        cin>>a[i];
        b[i] = i;
    }

    if(n==1) cout<<"-1"<<endl;

    else {
        fri(i,1,n){
        if(a[i]==b[i]){
            swap(b[i],b[i+1]);
        }
    }
    if(a[n]==b[n]) swap(b[n-1],b[n]);

    fri(i,1,n+1){
        cout<<b[i]<<" ";
    }
    cout<<endl;
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