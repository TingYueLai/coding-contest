//编号
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int o;cin>>o;
        a.push_back(o);
    }
    
    sort(a.begin(),a.end());
    long long int ans=1;
    for(int i=0;i<a.size();i++){
        //cerr<<a[i]-i<<endl;
        ans*=(a[i]-i);
        ans%=1000000007;
        //cerr<<ans<<endl<<endl;
    }
    cout<<ans<<endl;
    //long long int qwe=11*11;
    //cout<<qwe;
}