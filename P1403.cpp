#include <iostream>

using namespace std;
int n,a[10000001],s;
void H(){
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j+=i)a[j]++;
        s+=a[i];
    }
}
int main(){
    cin>>n;
    H();
    cout<<s;
}