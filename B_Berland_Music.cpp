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
    
    vi v(n) , like , dislike;

    map<int,int> mpp;

    fri(i,0,n){
        cin>>v[i];
        mpp[v[i]]=i;
    }

    string s;
    cin>>s;

    fri(i,0,n){
        if(s[i]=='0') dislike.pb(v[i]);
        else like.pb(v[i]);
    }

    sort(all(like)); sort(all(dislike));

    int k=1;

    fri(i,0,dislike.size()){
        v[mpp[dislike[i]]]=k++;
    }

    fri(i,0,like.size()){
        v[mpp[like[i]]]=k++;
    }

    fri(i,0,n){
        cout<<v[i]<<" ";
    }

    cout<<endl;

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