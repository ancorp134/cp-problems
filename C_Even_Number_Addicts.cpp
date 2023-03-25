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
    
    int e=0,o=0;
    
    fri(i,0,n){
        int x; cin>>x;
        if(x&1) o++;
        else e++;
    }
    if(o%4==2) cout<<"Bob"<<endl;
    else if(o%4==3) cout<<"Alice"<<endl;
    else if(o%4==0) cout<<"Alice"<<endl;
    else if(e%2==1) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
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