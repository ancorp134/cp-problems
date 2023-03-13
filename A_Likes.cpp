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
    int like = 0, dislike =0;

    fri(i,0,n){
        int x; cin>>x;
        if(x>0) like++;
        else dislike++;
    }

    int k = 0;
    int a = like , b = dislike;
    fri(i,0,n){
        if(a>0) {
            k++;
            a--;
        }
        else{
            k--;
        } 
        cout<<k<<" ";
    }
    cout<<endl;

    k = 0;
    a = like; b = dislike;

    fri(i,0,n){
        if(k==0) {
            a--; k++;
        }
        else {
            if(b) b--,k--;
			else a--,k++;
        }
        cout<<k<<" ";
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