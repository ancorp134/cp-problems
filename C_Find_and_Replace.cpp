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
    string s;cin>>s;
    
	map<char,vi> mpp;

	fri(i,0,n){
		mpp[s[i]].pb(i);
	}

	bool flag = true;

	for(auto i : mpp){
		if(i.second.size()==1) continue;
		else {
				int ev =0 , od=0;
				for(auto j : i.second){
					if(j&1) od++;
					else ev++;
				}
				if(ev && od) {
					flag = false;
					break;
				} 			
			}
			
			
		}

		cout<< (flag ? "YES" : "NO") << endl;
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