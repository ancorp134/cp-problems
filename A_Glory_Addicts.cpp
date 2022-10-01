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
    vl a(n) , b(n);

    ll t1=0 , t2=0; 
    fri(i,0,n) {
        cin>>a[i];
        if(a[i]==0) t1++;
        else t2==0;
    }
        

    fri(i,0,n) cin>>b[i];

    vector<pair<int,int>> v;

    fri(i,0,n){
        v.push_back({b[i],a[i]});
    }

    sort(all(v));

    

    if(t1<t2){
        fri(i,0,n){
            if(i&1){
                
            }
        }
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