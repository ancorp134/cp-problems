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
 
int fact(int n)
{
    if(n==0)
	return 1;
	int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
} 


 


 
void solve(){
    int n; cin>>n;

    vi v(n);
    fri(i,0,n) cin>>v[i];

    n = 10-n;

    if(n==0 || n==1){
        cout<< "0" << endl;
    }

    cout<< 6 * (fact(n) / (2*fact(n-2)))<<endl;
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