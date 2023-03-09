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
    string s; cin>>s;
    int n = s.size();
    int as = 0 , bs=0;

    for(auto i : s){
        as += i- 'a' + 1;
    }

    if(n%2==0){
        cout<<"Alice"<<" "<<as<<endl;
        return;   
    }
    else {
         if(s[0]<=s[n-1]){
            bs = s[0]-'a'+1;
        }
        else{
            bs = s[n-1]-'a'+1;
        }
        as-=bs;

        if(as>bs){
            cout<<"Alice"<<" "<<as-bs<<endl;
            return;
        }
        if(as<bs){
            cout<<"Bob"<<" "<<bs-as<<endl;
            return;
        }
        else {
            cout<<"Draw"<<" "<<as-bs<<endl;
            return;
        }
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