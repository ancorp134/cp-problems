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
 

bool prime(int n) {
    for(int i=2; i<=sqrt(n); i++) 
	{
        if(n%i==0) return false;
    }
    return true;
}
 
 
void solve(){
        ll d; cin>>d;
        ll now=1;
        ll a=0,b=0;
        while(true) {
            for(int i=now+d; ; i++) {
                if(prime(i)) {
                    if(a) {
                        b=i;
                        break;
                    }
                    else {
                        a=i;
                        now = i;
                        break;
                    }
                }
            }
            if(b!=0) break;
        }
        cout<<a*b<<endl;

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