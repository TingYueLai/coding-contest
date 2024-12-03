//直	车的攻击
#include<iostream>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;
long long int  n,k,h=0,l=0;
vector<int>x,y;
int main()
{
    cin>>n>>k;
    for(int i=0;i<k;i++){
        int a,b;cin>>a>>b;
        x.push_back(a);
        y.push_back(b);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    for(int i=0;i<k;i++){
        if(x[i]!=x[i+1])h++;//去重
        if(y[i]!=y[i+1])l++;//同上
    }
    cout<<(h+l)*n-h*l;
}
