#include<bits/stdc++.h>
using namespace std;
void solve(){

    string s;
    cin>>s;
    int n=s.size();
    if(s[0]==0){
        cout<<0<<endl;
        return;
    }
   // cout<<n<<endl;
    int ans=n/2;

    if(n&1)
     for(int i=1;i<n;i++){
        if(s[i]=='1'){
ans++;
break;

        }
    }

    cout<<ans<<endl;
}
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}