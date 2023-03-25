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
    vi a(n),b(n); 
    fri(i,0,n) cin>>a[i];
    b=a;
    sort(all(b));

    fri(i,0,n){
        if(a[i]!=b[n-1]){
            a[i]-=b[n-1];
        }
        else a[i]-=b[n-2];
    }

    fri(i,0,n){
        cout<<a[i]<<" ";
    }
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