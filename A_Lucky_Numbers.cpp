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
    int l,r; cin>>l>>r;
    int temp= -1 , ans = -1;
    fri(i,l,r+1){
        string s = to_string(i);
        int val=(*max_element(all(s)))-(*min_element(all(s)));
         if(val >= temp){
            temp = val;
            ans = i;
         }
         if(temp==9) break;
        
    }

    cout<<ans<<endl;
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