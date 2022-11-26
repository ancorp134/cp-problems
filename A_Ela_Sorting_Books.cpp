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
    int n,k; cin>>n>>k;
    string s; cin>>s;

    vector<int> arr(26,0);

    for(auto i : s){
        arr[i-'a']++;
    }

    string ans = "";
    fri(i,0 ,min(25, n/k )){
        while(k-ans.size() > arr[i]){
            ans.pb(i + 'a');
        }
    }

    char c = 'a' + min(25,n/k);

    while(k>ans.size()){
        ans += c;
    }

    reverse(all(ans));

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