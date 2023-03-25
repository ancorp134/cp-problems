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
    vl  v(n);
    fri(i,0,n) cin>>v[i];

    ll cnt =0 , temp=v[0] ;

    fri(i,1,n){
        temp = v[i] xor temp;

        if(temp==0){
            cnt++;
            v[i-1] = v[i]+1;
            temp = v[i] xor v[i-1]; 
        }
    }

    cout<< cnt << endl;
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