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
 
 
int helper(string s){
    if(s=="") return 0;
    
    int cz = count(all(s),'0');
    
    bool az = false; bool  ao = false;

    fri(i,0,s.size()){
        if(s[i]=='0') az = true;
        if(s[i]=='1') ao = true;
        if(az && ao) {
            cz++;
            ao = false; az = false;
        }
    }

    return cz;
}

 
void solve(){
    int n; cin>>n;
    string a , b; cin>>a>>b;

    int ans = 0;

    string s = "";
    fri(i,0,n){
        if(a[i]!=b[i]){
            ans += 2 + helper(s);
            s ="";
        }
        else s += a[i];
    }

    cout<< ans + helper(s)<<endl;
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