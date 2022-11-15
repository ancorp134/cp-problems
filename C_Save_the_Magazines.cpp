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
    string s; cin>>s;

    vi v(n);
    fri(i,0,n) cin>>v[i];

    int ans=0;

    fri(i,0,n){
        if( s[i]=='1'){
            int j=i;
            while(j>0 && v[j]<v[j-1] && s[j-1]=='0'){
                s[j]='0';
                s[j-1]='1';
                j--;
            }
            v[j]= max(v[j],v[i]);
        }

    }

    

    cout<<ans<<endl;
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