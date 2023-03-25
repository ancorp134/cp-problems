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
    vl v(n);
    fri(i,0,n) cin>>v[i];

    priority_queue<ll> pq;
    ll pow = 0;
    
    for(auto i : v){
        if(i==0){
            if(pq.empty()) continue;
            pow += pq.top();
            pq.pop();
        }
        else pq.push(i);
    }
    
    cout<<pow<<endl;
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