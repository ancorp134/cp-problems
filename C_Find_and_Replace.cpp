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
    set<char>st;
    fri(i,0,n){
    	st.insert(s[i]);
    }
    int flag=0;
    int x=st.size();
    map<char,int>mpp;
    vector<vi> v(x);
    int k=0;
    fri(i,0,n){
    	if(!mpp.count(s[i])){
    		k++;
    		mpp[s[i]]++;
    		char ch=s[i];
    		fri(j,i,n){
    			if(s[j]==ch){
    				v[k-1].pb(j+1);
    			}
    		}
    		
    	}
    }
    
    fri(i,0,x){
    	int d=v[i].size();
    	int ev=0,od=0;
    	for(int j=0;j<d;j++){
    		if((v[i][j]&1))od++;
    		else ev++;
    	}
    	if(ev>0 && od>0){
    		flag=1;
    		break;
    	}
    }
    cout<< (flag ? "NO" : "YES" ) << endl;
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