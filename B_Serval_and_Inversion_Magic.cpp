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
    string s; cin>>s;

    vi v(n/2 + 1,0);
    fri(i,0,n/2){
        if(s[i]!=s[n-i-1]){
            v[i]=1;
        }
    }
    int flag = 1,temp=0;
    fri(i,0,n/2){
        if(v[i]){
            if(temp) flag=0;
            temp=1;
            while(v[i]) i++;
        }
        
    }

    cout<< (flag ? "Yes" : "No") << endl;
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