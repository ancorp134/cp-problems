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
    cin>>n;
    string s; cin>>s;

    if(n<5) {
        cout<<"NO"<<endl;
        return;
    }

    map<char,int> mpp;

    mpp['T']=1; mpp['i']=1; mpp['m']=1; mpp['u']=1; mpp['r']=1;

    for(auto i : s){
        if(mpp[i]==0 || !mpp.count(i) ) {
            cout<<"NO"<<endl;
            return;
        }
        else mpp[i]--;
    }

    cout<<"YES"<<endl;

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