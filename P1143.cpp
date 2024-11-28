#include<iostream>
#include<map>
//	进制转换
using namespace std;
string ch="0123456789ABCDEF";
int main(){
    int a;
    string s;
    int b;
    cin>>a>>s>>b;
    long long int total=0;
    string ans="";
    long long int door=1;
    for(int i=s.length()-1;i>=0;i--){
        int tmp=s[i]>='A'? s[i]-'A'+10:s[i]-'0';
        //cerr<<tmp<<endl;
        total+=tmp*door;
        door*=a;
    }
    //cout<<total<<endl;
    while(total>0){
        ans=ch[total%b]+ans;

        total/=b;
    }
    cout<<ans;
}