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
    ll n; cin>>n;
    
    if(n==3){
        cout<<"-1"<<endl;
    }
    else if(!(n&1)){
        for(int i=0;i<n;i+=2){
            cout<< i+2 << " " << i+1 <<" ";
        }
        cout<<endl;
    }
    else {
        for(int i=n;i>3;i-=2){
            cout<< i-1 <<" "<< i << " ";
        }
        cout<< "1" << " "<<"2"<< " "<<"3" <<endl;
    }
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