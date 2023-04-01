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
    if(!(n&1)){
        cout<<-1<<endl;
        return;
    }
    
    vi v;
    while (n != 1) {
        if ((n + 1) / 2 % 2 == 1) {
            n += 1;
            v.pb(1);
        } else {
            n -= 1;
            v.pb(2);
        }
        n /= 2;
    }

    cout<<v.size()<<endl;
    reverse(all(v));
    for(auto i : v) cout<<i<<" ";
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