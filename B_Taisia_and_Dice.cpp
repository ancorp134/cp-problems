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
    int n,s,r; cin>>n>>s>>r;

   int max_value = s-r;
   int temp1 = r%(n-1);
   int temp2 = r/(n-1);
   
   cout<< max_value << " ";

   fri(i,0,n-1){
    if(temp1>0){
        cout<< temp2 +1 <<" ";
        temp1--;
    }
    else cout<<temp2<<" ";
   }
   cout<<endl;
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