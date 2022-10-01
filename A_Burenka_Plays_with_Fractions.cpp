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
    
    ll a ,b,c,d;

    cin>>a>>b>>c>>d;

    ll k = a*d;
    ll p = b*c;

    if(k==p) cout<<"0"<<endl;
    else if(k==0 || p==0) cout<<"1"<<endl;
    else if(k%p==0 || p%k==0 ) cout<<"1"<<endl;
    else cout<<"2"<<endl;

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