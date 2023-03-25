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
    set<int> sx,sy;
    fri(i,0,3){
        
        int x,y; cin>>x>>y;
        sx.insert(x);
        sy.insert(y);
        
    }
    if(sx.size()==3 || sy.size()==3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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