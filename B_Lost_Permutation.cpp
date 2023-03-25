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
    int n,ls; cin>>n>>ls;
    vi v(101,0);

    fri(i,0,n){
        int x; cin>>x;
        v[x]=1;
    }

    fri(i,0,101){
        if(!v[i]){
            if(ls>=i){
                ls-=i;
            }
            else{
                if(ls==0 && n==0){
                    cout<<"YES"<<endl;
                    
                }
                else cout<<"NO"<<endl;
                return;
               
            }
        }
        else n--;
    }

    cout<<"YES"<<endl;
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