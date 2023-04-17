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

    int x = 0;
    fri(i,0,n){
        int t; cin>>t;
        x ^= t;
    } 

    if(x==0){
        cout<<"0"<<endl;
        return;
    }

    cout<< (n%2 ? x : -1) << endl;


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