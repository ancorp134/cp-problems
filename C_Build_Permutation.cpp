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
 
 
void helper(int r , vector<int>& ans){
   

    if (r < 0) return;
	int s = sqrt(2*r); s *= s;
	int l = s - r; 
    helper(l - 1,ans);
	for (; l <= r; l++, r--) {
		ans[l] = r; ans[r] = l;
	}
}

 
void solve(){
    int n;  cin>>n;

    vector<int> ans(n);

    helper(n-1 , ans);

    for(auto i:ans){
        cout<<i<<" "; 
    }

    cout<<endl;

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