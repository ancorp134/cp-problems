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

    ll n,k; cin >> n >>k;
    vl a;
    ll x , g = 0;
    
    fri(i,0,n){
        cin >> x;
        g = __gcd(g,x);
        a.push_back(x);
    }
    
    x=0;
    ll cnt = 0;
    fri(i,0,n){
        x =  __gcd(x,a[i]);
        if(x==g){
            cnt++;
            x=0;
        }
    }
    
    cout<< (cnt>=k ? "YES" : "NO") <<endl;
    
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