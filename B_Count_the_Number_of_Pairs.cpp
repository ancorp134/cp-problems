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

    int cnt=0;
    vector<int> sm(26,0) , cap(26,0);

    for(auto i : s){
        
        if( i >= 'A' && i <= 'Z') cap[i-'A']++;
        else sm[i-'a']++;    

    }

    fri(i,0,26){
        int tmp = min(sm[i] , cap[i]);
        cnt += tmp;
        sm[i]-=tmp; cap[i]-=tmp;
        int add = min( k , max( sm[i] , cap[i] ) / 2);
        k-=add; cnt+=add;
    }

    cout<<cnt<<endl;
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