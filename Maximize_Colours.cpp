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

    int a[3] , s;
    
    s = 0; cin >> a[0] >> a[1] >> a[2]; 

 for (int i = 0; i < 3; ++i)
    if (a[i] != 0)
    {
    a[i]--;
    s++;
    }

for (int i = 0; i < 3; ++i)
 for (int j = i + 1; j < 3; ++j)
    if (a[i] > a[j])
    swap(a[i], a[j]);

 if (a[0] >= 2)
 {
     cout << s + 3 << endl;
     return;
 }

 if (a[0] == 1) {
    cout << (a[2] >= 2 ? s + 2 : s + 1) << endl;
    return;
   }
   cout << (a[1] == 0 ? s : s + 1) << endl;

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