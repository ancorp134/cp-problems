// Author : Ankit Tsyagi
 
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
#define all(sx) (sx).begin(), (sx).end()
#define dec greater<int>
#define endl "\n"



// int dis(int x, int y, int sx , int sy){

//     return abs(sx-x) + abs(sy-y) ;

// }
 
 
void solve(){
    
    int n,m,sx,sy,d; 
    cin>>n>>m>>sx>>sy>>d;



    if ((sy - d <= 1 || sx + d >= n) && (sy + d >= m || sx - d <= 1)) {
        cout << "-1" << endl;
    } else {
        cout << n + m - 2 << endl;
    }

    // queue<vi> q;
    // q.push({1,1,0});

    // vector<vector<bool>> vis(n+1,vector<bool>(m+1,false));
    // vis[1][1]=true;

    // int ans = INT_MAsx;

    // while(!q.emptsy()){

    //     auto temp = q.front();
    //     q.pop();

    //     int sx=temp[0] , sy = temp[1] , cnt = temp[2];

    //     if(sx==n && sy==m){
    //         ans = min(ans , cnt);
    //     }

    //     if(sx<n && !vis[sx+1][sy] && dis(sx+1,sy,ssx,ssy)>d){
    //         q.push({sx+1,sy,cnt+1});
    //         vis[sx+1][sy]=true;
    //     }

    //     if(sy<m && !vis[sx][sy+1] && dis(sx,sy+1,ssx,ssy)>d){
    //         q.push({sx,sy+1,cnt+1});
    //         vis[sx][sy+1]=true;
    //     }

    // }

    // if(vis[n][m]){
    //     cout<<ans<<endl;
    // }

    // else cout<<"-1"<<endl;

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