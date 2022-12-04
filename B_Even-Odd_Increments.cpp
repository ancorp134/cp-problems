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
    ll n , q; cin>>n>>q;

    ll o=0,e=0,oc=0,ec=0;
    fri(i,0,n){
        int x; cin>>x;
        if(x&1){
            oc++;
            o+=x;
        }
        else {
            ec++;
            e+=x;
        }
    }

    while(q--){
        int t , x; cin>>t>>x;
        if(t==0){
            if(x&1){
                o+= e + (ec*x);
                oc+= ec;
                ec=0;
                e=0;
            }
            else {
                e += ec*x; 
            }
        }
        else {
            if(x&1){
                e+= o + (oc*x);
                ec+= oc;
                oc=0;
                o=0;
            }
            else {
                o += oc*x; 
            }
        }
        cout<< o + e << endl;
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