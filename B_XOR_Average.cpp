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
    if (n % 2 == 1){
      for (int j = 0; j < n; j++){
        cout << 1;
        if (j < n - 1){
          cout << ' ';
        }
      }
    }
    if (n % 2 == 0){
      cout << 1 << ' ';
      for (int j = 0; j < n - 2; j++){
        cout << 2 << ' ';
      }
      cout << 3;
    }
    cout << endl;
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