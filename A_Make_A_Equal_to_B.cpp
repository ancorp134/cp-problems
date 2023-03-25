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
    int n; cin>>n;
    vi a(n) , b(n);

    int ao=0 , bo=0 , cnt=0;

    fri(i,0,n) cin>>a[i];
    fri(i,0,n) cin>>b[i];

    fri(i,0,n){
        if(a[i]) ao++;
        if(b[i]) bo++;
        if(a[i]!=b[i]) cnt++;
    }

    cout<< min(cnt , abs(bo-ao)+1) << endl;

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