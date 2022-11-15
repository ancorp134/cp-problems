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

    vi v(n);

    fri(i,0,n) cin>> v[i];

    string s; cin>>s;

    map<int , char > mpp;

    int flag = 0;
    fri(i,0,n){
        if(!mpp.count(v[i])){
            mpp[v[i]]=s[i];
        }
        else {
            if(mpp[v[i]]!=s[i]){
                flag=1;
                break;
            }
        }
    }

    cout<< (flag ? "NO" : "YES") << endl;
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