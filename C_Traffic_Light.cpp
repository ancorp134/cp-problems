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
    int n; cin>>n; char c; cin>>c;

    string s; cin>>s;

    if(c=='g'){
        cout<< "0" << endl;
        return;
    }

    
    s+=s;
    int ans = -1;
    int idx = INT_MAX;

    frd(i,s.size()-1,0){
        if(s[i]=='g'){
            idx=i;
        }
        if(s[i]==c && idx!= INT_MAX){
            ans = max(ans , idx-i);
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