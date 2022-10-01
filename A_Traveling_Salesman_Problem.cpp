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
    
    int maxX=0 , maxY=0 , minX=0 , minY=0 ;
    
    fri(i,0,n){
        int x,y; cin>>x>>y;

        maxX = max(x,maxX);  
        minX = min(x,minX);
        maxY = max(y,maxY);  
        minY = min(y,minY);
        
    }

    cout<< 2 * (maxX + maxY - minX - minY) <<endl;

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