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
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    int l = 1, r = n * n, t = 0;
    fri(i,0, n) {
      fri(j,0, n) {
        if (t) v[i][j] = l++;
        else v[i][j] = r--;
        t ^= 1;
      }
      if (i & 1) reverse(v[i].begin(), v[i].end());
    }

   fri(i,0, n) fri(j, 0,n) cout << v[i][j] << " \n"[j == n - 1];
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