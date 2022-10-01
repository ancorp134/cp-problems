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
    ll n,k; cin>>n>>k;

    vl a(n);
    map<int,int> mpp;

    fri(i,0,n){
        cin>> a[i];
        mpp[a[i]]=i;
    }

    int cnt=0;

    fri(i,1,k+1){
        if(mpp[i]>=k) cnt++;
    }

    cout<<cnt<<endl;
   
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