//[NOIP2000 提高组] 进制转换

#include<iostream>

using namespace std;
string c="0123456789ABCDEFGHIJ";
int main(){
    string ans="";

    int a,b;
    cin>>a>>b;
    int o=a;
   while(a!=0){
        int m=a%b;
        if(m<0) {
            m-=b;
            a+=b;//如果余数小于0，转化为正数
        }
        ans=c[m]+ans;
        a=a/b;
        
   }
   cout<<o<<"=";
   cout<<ans<<"(base"<<b<<")";
}