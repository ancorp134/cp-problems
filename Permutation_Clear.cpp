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
    int na , nb;

    cin>>na;

    set<int> s;

    vi a(na) , b;

    fri(i,0,na) cin>>a[i];

    cin>>nb;

    fri(i,0,nb) {
        int x; cin>>x;
        s.insert(x);
    }

    fri(i,0,na){
        if(!s.count(a[i])){
            b.pb(a[i]);
        }
    }

    for(auto i : b){
        cout<<i<<" "; 
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