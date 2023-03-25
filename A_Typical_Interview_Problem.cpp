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
 

string tmp;
 
void solve(){
    int n; cin>>n;
    string s; cin>>s;

    if(tmp.find(s) != string::npos) cout<< "YES" << endl;
    else cout<< "NO" << endl;
    return;
}
     

 
int main(){
	fast;
	int t;
    cin>>t;

    for (int i = 0; i < 50; i++) {
        if (i % 3 == 0) tmp+='F';
        if (i % 5 == 0) tmp+='B';
    }

    while(t--){
        solve();
    }
	return 0;
}