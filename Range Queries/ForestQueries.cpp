



#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100001;



void solve(){
    int n,q;
    cin>>n>>q;

    vector<string> arr(n+1);
    for(int i=1; i<= n; i++){
        cin>>arr[i];
        arr[i] = '.' + arr[i];
    }

    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n ;j++ ){
            dp[i][j] = dp[i-1][j] + dp[i][j-1] -dp[i-1][j-1] +  (arr[i][j] == '*' ? 1 : 0);
        }
    }
    // for(int i=0;i<=n;i++)cout<<arr[i]<<endl;
    // for(int i=0;i<=n; i++){
    //     for(int j=0; j<= n; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int> res;

    while(q--){
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;

        int ans = dp[y1][y2] - dp[x1-1][y2] - dp[y1][x2-1] + dp[x1-1][x2-1];
        res.push_back(ans);
    }
    for(int x: res)cout<<x<<endl;
    
}

int main(){
    

    solve();
    return 0;

    
}
