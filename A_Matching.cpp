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
    string s; cin>>s;
    
    int ans= 1;

    for(int i=0;i<s.size();i++){
        if (s[i]=='?') {
			if (i==0) ans*=9; 
            else ans*=10;
		}
		if (s[i]=='0'&&i==0) {
			ans=0;
			break;
		}
    }

    cout<<ans<<endl;


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