



#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100001;

void solve(){
    int n,q;
    cin>>n>>q;

    ll arr[n+1], pref[n+1];
    for(int i=1;i <= n; i++){
        cin>>arr[i];
    }
    pref[0] = 1;
    for(int i=1; i<= n; i++){
        pref[i] = pref[i-1] + arr[i];
    }

    while(q--){
        int x, y;
        cin>>x>>y;
        ll ans = pref[y] - pref[x-1];
        cout<<ans<<endl;
    }

    
}

int main(){
    

    solve();
    return 0;

    
}