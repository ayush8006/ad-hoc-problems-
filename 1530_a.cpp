#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin>>n;
    int ans=1;
    while(n){
        ans=max(ans,n%10);
        n=n/10;
    }
    cout<<ans<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}