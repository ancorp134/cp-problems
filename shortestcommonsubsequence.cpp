#include<bits/stdc++.h>
using namespace std;


int shortestCommonSupersequence(string x, string y, int n, int m)
    {
        vector<vector<int>> dp(n+1 , vector<int>(m+1 , 0));
        
       
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max (dp[i-1][j], dp[i][j-1]);
                }
                
            }
        }
        
        // cout<<ans;
    
        return (m+n) - dp[n][m] ;
    }

int main(){
    string s , t;
    cin>>s>>t;

    int n = s.size();
    int m = t.size() ;


    int ans = shortestCommonSupersequence( s , t , n , m);

    cout<< ans ;

}