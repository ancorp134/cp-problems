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
 
string t = "meow"; 
 
void solve(){
    int n; cin>>n;
    string s; cin>>s;

    fri(i,0,n) s[i] = tolower(s[i]);

    // cout<<s<<endl;

    string tmp ="";
    tmp+=s[0];

    fri(i,1,n){
        if(s[i]==s[i-1]) continue;
        else tmp += s[i];
    }

    // cout<<tmp<<endl;

    cout<< (t==tmp ? "YES" : "NO") <<endl;

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