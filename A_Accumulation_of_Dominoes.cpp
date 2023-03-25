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
    ll n,m; 
    cin>>n>>m;
    if(n==1 && m==1) cout<<"0"<<endl;
    else if(n==1 && m>1) cout<<m-1<<endl;
    else if(n>1 && m==1) cout<<n-1<<endl;
    else cout<< n*(m-1) << endl;
    return;
}
     

 
int main(){
	fast;
	// int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
	return 0;
}