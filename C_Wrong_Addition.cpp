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
    string s,t; cin>>s>>t;
    int i = s.size()-1,j=t.size()-1;

    string ans = "";

    while(i>=0 && j>=0){
        int num1 = s[i]-'0';
        int num2 = t[j]-'0';

        if(num1 <= num2){
            ans += to_string(num2-num1);
        }

        else {
            j--;
            num2 += (t[j]-'0')*10;
            if(num2-num1 >= 10 || num2-num1 < 0){
                cout<< "-1" << endl;
                return;
            }
            ans += to_string(num2-num1);
        }
        i--; j--;
    }

    if(i>=0){
        cout<<"-1"<<endl;
        return;
    }
    while(j>=0){
        ans += t[j--];
    }

    while(ans.back()=='0'){
        ans.pop_back();
    }
    reverse(all(ans));

    cout<<ans<<endl;
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