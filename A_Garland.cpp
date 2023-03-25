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
    string s; cin>>s;
    map<char,int>mpp;
    for(auto i :s) mpp[i]++;

    if(mpp.size()==1){
        cout<<-1<<endl;
        return;
    }
    if(mpp.size()==4){
        cout<<4<<endl;
        return;
    }
    for(auto i : mpp){
        if(i.second>2){
            cout<<6<<endl;
            return;
        }
    }

    cout<<4<<endl;
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