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
 
map<char , int > mpp;
 
void solve(){
    char a; cin>>a;
    cout<< (mpp.count(a) ? "YES" : "NO")<<endl;
}
     

 
int main(){
	fast;
	int t;
    cin>>t;

    mpp['c']++; mpp['o']++; mpp['d']++; mpp['e']++; mpp['f']++; mpp['r']++; mpp['s']++;

    while(t--){
        solve();
    }
	return 0;
}