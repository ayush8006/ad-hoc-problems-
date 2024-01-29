#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n==1){
        cout<<1<<" "<<1<<endl;
        cout<<-a[0]<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;

        return ;
        
    }

    
        cout<<1<<" "<<n<<endl;
      for(int i=0;i<n;i++){
        cout<<-(n*a[i])<<" ";
      }cout<<endl;

      cout<<1<<" "<<n-1<<endl;
      for(int i=0;i<n-1;i++){
        cout<<(n-1)*a[i]<<" ";
      }
      cout<<n<<" "<<n<<endl;
      cout<<(n-1)*a[n-1]<<endl;

}
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}