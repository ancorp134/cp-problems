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
 
    fri(i,0,n){
        v[i] = i+1;
    }
 
    for(int i=n-1;i>=0;i-=2){
        if(i > 0){
            swap(v[i-1],v[i]);
        }
    }
 
    fri(i,0,n){
        cout<<v[i]<<" ";
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