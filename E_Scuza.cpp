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


    ll n,q; cin>>n>>q;
    vl a(n);
    fri(i,0,n) cin>>a[i];
    

    vl pref(n) , mx(n);
    pref[0] = a[0];
    mx[0] = a[0];
    fri(i,1,n){
        mx[i] = max( (int)mx[i-1] , (int)a[i] );
        pref[i] = pref[i-1] + a[i];
    }
    

    ll maxpref = pref[n-1];

    while(q--){

        int x; cin>>x;
        int p = (upper_bound(all(mx),x) - mx.begin())-1;

        if(p== -1){
            cout<< "0" <<" ";
        }
        else cout<< pref[p] << " ";

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