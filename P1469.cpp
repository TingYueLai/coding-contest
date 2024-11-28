//找筷子
#include<iostream>

using namespace std;
int main(){
    int x,ans=0,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        ans^=x;
    }
    printf("%d",ans);
}
