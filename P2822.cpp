//[NOIP2016 提高组] 组合数问题
#include<iostream>

using namespace std;
int ans[2005][2005];
int c[2005][2005];




int main(){
    int n,k;
    cin>>n>>k;

    c[0][0]=1;
    c[1][0]=c[1][1]=1;
    for(int i=2;i<=2000;i++){
        c[i][0]=1;
        for(int j=1;j<=i;j++){
            c[i][j]=(c[i-1][j-1]+c[i-1][j])%k;
            ans[i][j]=ans[i-1][j]+ans[i][j-1]-ans[i-1][j-1];
        if(!c[i][j])ans[i][j]++;
        }
        ans[i][i+1]=ans[i][i];//继承。
    }
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(b>a)cout<<ans[a][a]<<endl;//如果m>n,ans只会达到n，只需输出ans[n,n]就可以了。
        else cout<<ans[a][b]<<endl;
    }
}


/*
1 1 =1
2 1=2
2 2=1
3 1=3
3 2 =3
3 3 =1





*/