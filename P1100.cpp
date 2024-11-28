// 高低位交换
#include<iostream>
//8
using namespace std;


string c="01";
int main(){
    string s="";
    long long int n;
    cin>>n;
    while(n>0){
        s=c[n%2]+s;
        n=n/2;
    }
    while(s.size()<32){
        s="0"+s;
    }
    for(int i=0;i<16;i++){  
        char tmp=s[i];
        s[i]=s[i+16];
        s[i+16]=tmp;
    }
    n=0;
    long long int j=1;
    for(int i=31;i>=0;i--){
        n+=(s[i]-'0')*j;
        j=j*2;
    }
    cout<<n;
}