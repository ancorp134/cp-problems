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

    string s; cin>>s;

    int n = s.size();
    map<char, vector<int>> let_to_ind;

    for (int i = 0; i < n; ++i) {
        let_to_ind[s[i]].push_back(i);
    }

    int direction = (s[0] < s[n - 1]) ? 1 : -1;
    vector<int> ans;

    for (char c = s[0]; c != s[n - 1] + direction; c += direction) {
        for (auto now : let_to_ind[c]) {
            ans.push_back(now);
        }
    }

    int cost = 0;
    for (int i = 1; i < ans.size(); i++)
        cost += abs(s[ans[i]] - s[ans[i - 1]]);

    cout << cost << " " << ans.size() << '\n';
    for (auto now : ans) {
        cout << now + 1 << " ";
    }
    cout << '\n';    return;
    
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