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
    vi ans(n);
    vector<vi> a(n);
    fri(i,0,n){
        int m;
        cin >> m;
        
        a[i].resize(m);
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    set<int> s;
    frd(i,n-1,0){
        int x = -1;
        for(auto j : a[i]){
            if(!s.count(j)){
                x = j;
                s.insert(j);
            }
        }
        if(x==-1){
            cout<<-1<<endl;
            return;
        }

        ans[i] = x;
    }

    for(auto i : ans) cout<<i<<" ";
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