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
    string s; cin>>s;
    vi v(10,0); set<int> st;

    fri(i,0,10){
        st.insert(i);
    }
    
    fri(i,0,n){
        if(s[i]=='L'){
            int x= *st.begin();
            st.erase(x);
        }
        else if(s[i]=='R'){
            int x= *st.rbegin();
            st.erase(x);
        }
        else st.insert(s[i]-'0');
    }

    fri(i,0,10){
        if(!st.count(i)) v[i]=1;
    }


    for(auto i:v){
        cout<<i;
    }

    cout<<endl;

}
     

 
int main(){
	fast;
	// int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }

    solve();

	return 0;
}