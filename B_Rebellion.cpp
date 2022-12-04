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
    vi v(n);
    fri(i,0,n) cin>>v[i];

    int j=0;
    int cnt=0;

    for(int i=n-1;i>j;i--){
        if(v[i]==1) continue;
        while(j<i && v[j]==0){
            j++;
        }
        if(j==i) break;
        cnt++;
        j++;
    }   

    cout<<cnt<<endl;

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