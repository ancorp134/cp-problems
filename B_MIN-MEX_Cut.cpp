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

   int sz = count(all(s),'0');
   

   if(sz==0) cout<<"0"<<endl;
   else {
    int first = s.find('0');
    int last = s.rfind('0');

    if(last-first+1 == sz) cout<<"1"<<endl;
    else cout<<"2"<<endl;
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