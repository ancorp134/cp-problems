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
    ll n; cin>>n;
    if (n%2==0) cout<<"2 "<<(n-1)-2<<" 1\n";
	else {
		int cur=(n-1)/2;
		if (cur%2==0) cout<<cur-1<<" "<<cur+1<<" "<<1<<endl;
		else cout<<cur-2<<" "<<cur+2<<" "<<1<<endl;
	}
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