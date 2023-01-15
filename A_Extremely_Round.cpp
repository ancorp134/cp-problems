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


bool  singlenonzerodigit(int n){
    string s = to_string(n);
    int ans = 0;
    for(auto i : s){
        if(i!='0') ans++;
    }

    return ans==1;
}


vector<int> v;


void solve(){
    int n; cin>>n;
    int cnt=0;
    
    

    fri(i,0,v.size()){
        if(v[i]<=n) cnt++;
    }

    cout<<cnt<<endl;
}
     

 
int main(){
	fast;
	
    
    int t;
    cin>>t;

    for(int i=1;i<1000000;i++){
        if(singlenonzerodigit(i)) v.pb(i);
    }

    while(t--){
        solve();
    }
	return 0;
}