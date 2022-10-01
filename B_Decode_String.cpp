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
    string s,t="";
    cin>>s;

    

    frd(i,n-1,0){
        if(s[i]!='0'){
            int val = s[i] - '0' - 1 ;
            t += 'a' + val;
        }
        else {
            int val = (s[i-2]-'0')*10 + (s[i-1]-'0') - 1;
            t += 'a' + val;
            i-=2;
        }

    }

    reverse(all(t));

    cout << t <<endl;

    
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