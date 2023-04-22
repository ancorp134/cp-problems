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
    vi a(n),b(n);
    fri(i,0,n) cin>>a[i];
    fri(i,0,n) cin>>b[i];

    int l = 0, r = n - 1;
    while (a[l] == b[l]) {
        l++;
    }
    while (a[r] == b[r]) {
        r--;
    }
    
    while (l && b[l] >= b[l - 1]) {
        l--;
    }
    while (r + 1 < n && b[r] <= b[r + 1]) {
        r++;
    }

    

    cout<< l+1 <<" "<< r+1 <<endl;
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