#include<bits/stdc++.h>
using namespace std;

bool isper(int x){
    int y=sqrt(x);
    return y*y==x;
}
void solve(){

    int n;
    cin>>n;
    if(n&1){
        cout<<"no"<<endl;
        return;
    }else{

        int m=n/2;
        int p=n/4;

        if(isper(m)||(n%4==0 and isper(p))){
            cout<<"yes"<<endl;
        return;

        }else{
               cout<<"no"<<endl;
        return;
        }
    }

   

}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}