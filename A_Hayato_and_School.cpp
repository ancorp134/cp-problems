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
    vi vo , ve;
    fri(i,0,n) {
        int x; cin>>x;
        if(x&1) vo.pb(i+1);
        else ve.pb(i+1);
    }
    if(vo.size()>=3) {
        cout<<"YES"<<endl;
        cout<<vo[0]<<" "<<vo[1]<<" "<<vo[2]<<endl;
    }
    else if(vo.size()>=1 && ve.size()>=2) {
        cout<<"YES"<<endl;
        cout<<vo[0]<<" "<<ve[0]<<" "<<ve[1]<<endl;
    }
    else cout<<"NO"<<endl;
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