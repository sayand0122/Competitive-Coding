#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int l=0,r=n-1,count=0;
    while(l<=r){
        if(s[l]!=s[r]) count++;
        l++;
        r--;
    }
    return abs(k-count);
}
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        cout<<"Case #"<<i<<": "<<solve()<<endl;
    }
    return 0;
}