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
    ll n; cin>>n;

    vl a(n) , b(n);

    fri(i,0,n) cin>>a[i];
    fri(i,0,n) cin>>b[i];

    ll max_a =INT_MIN , max_b = INT_MIN;
    fri(i,0,n){

        if(a[i]<b[i]){
            swap(a[i],b[i]);
        }

        max_a = max( (int)max_a , (int)a[i] );
        max_b = max( (int)max_b , (int)b[i] );
    }

    cout<< max_a * max_b << endl;
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