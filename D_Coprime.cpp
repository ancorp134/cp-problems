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
 
const int sz=  1001;
 
void solve(){
    int n; cin>>n;

    vi v(sz , -1);
    fri(i,0,n){
        int x; cin>>x;
        v[x] = i;
    }

    int ans = -1e8;
    fri(i,0,sz){

        if(v[i]==-1) continue;

        fri(j,i,sz){
            if(v[j]==-1) continue;
            if( __gcd(i,j)==1){
                ans = max(ans , v[i] + v[j] +2);
            }
        }
    }
    
    cout<< (ans == -1e8 ? -1 : ans) <<endl;
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