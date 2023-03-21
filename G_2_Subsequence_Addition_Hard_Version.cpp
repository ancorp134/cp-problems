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
    vl v(n),pref(n);

    fri(i,0,n)cin>>v[i];

    if(n==1 && v[0]!=1){
        cout<<"NO"<<endl;
        return;
    }

    sort(all(v));

    pref[0]=v[0];
    fri(i,1,n){
        pref[i] = pref[i-1] + v[i];
    }

    bool flag = true;
    fri(i,1,n){
        if(v[i] > pref[i-1]){
            flag = false;
            break;
        }
    }

    cout<<(flag && v[0]==1 ? "YES" : "NO")<< endl;
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