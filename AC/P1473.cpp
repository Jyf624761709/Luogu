#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int f[20];
int n;
int ws(int n){
    int s=0;
    while(n>0){
        s++;
        n/=10;
    }
    return s;
}
void dfs(int js){
    if(js==n){
        int ans=0,s=0,pd;
        for(int i=0;i<n;i++){
            if(f[i]==1)
                pd=1;
            if(f[i]==2)
                pd=0;
            s=0;
            for(int j=i+1;j<=n;j++){
                s=s*10+j;
                if(f[j]<3){
                    i=j-1;
                    break;
                }
            }
            if(pd==1)
                ans+=s;
            if(pd==0)
                ans-=s;
        }
        //printf("%d\n",ans);
        if(ans==0){
            printf("1");
            for(int i=2;i<=n;i++){
                if(f[i-1]==1)
                    printf("+");
                if(f[i-1]==2)
                    printf("-");
                if(f[i-1]==3)
                    printf(" ");
                printf("%d",i);
            }
            printf("\n");
        }
        return ;
    }
    else{
        f[js]=3;
        dfs(js+1);
        f[js]=1;
        dfs(js+1);
        f[js]=2;
        dfs(js+1);
    }
}
int main(){ 
    //freopen("t.out","w",stdout);
    scanf("%d",&n);
    f[0]=1;
    f[1]=3;
    dfs(2);
    f[1]=1;
    dfs(2);
    f[1]=2;
    dfs(2);
    return 0;
}


