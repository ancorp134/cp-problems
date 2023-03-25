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
    
     int n;
    cin >> n;
    vector<string> A(n),B(n),C(n);
    vector<string> s;

    unordered_map<string,int> mpp;

    for (int i = 0; i < n; i++) cin >> A[i],s.pb(A[i]);
    for (int i = 0; i < n; i++) cin >> B[i],s.pb(B[i]);
    for (int i = 0; i < n; i++) cin >> C[i],s.pb(C[i]);

    for(auto i:s) mpp[i]++;
    
    int a=0,b=0,c=0;

    fri (i,0,n){
        if(mpp[A[i]]==1) a+=3;
        else if(mpp[A[i]]==2) a+=1;
    }
    fri (i,0,n){
        if(mpp[B[i]]==1) b+=3;
        else if(mpp[B[i]]==2) b+=1;
    }
    fri (i,0,n){
        if(mpp[C[i]]==1) c+=3;
        else if(mpp[C[i]]==2) c+=1;
    }

    cout<<a<<" "<<b<<" "<<c<<endl;
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