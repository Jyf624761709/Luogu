#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int n,m,p[102][102];
bool pd(int c){
    for(int d=1;d<=n-c+1;d++)
        for(int i=1;i<=m-c+1;i++){
        	bool pd=1;
            for(int j=d;j<=d+c-1;j++){
                for(int k=i;k<=i+c-1;k++)
                    if(p[j][k]==0){
                        pd=0;
                        break;
                    }
                if(pd==0)
                    break;
            }
            if(pd==1)
                return true;
        }
    return false;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&p[i][j]);
    int t;
    if(n<m) t=n;
    else t=m;
    for(int i=t;i>=1;i--){
        if(pd(i)==true){
            printf("%d",i);
            return 0;
        }
    }
}


