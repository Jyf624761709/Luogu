#include<cstdio>
#include<cmath>
const int N=100000005;
bool p[N];
int main(){
    int n,ans;
    scanf("%d",&n);
    if(n<2){
        printf("%d",0);
        return 0;
    }
    ans=n;
    ans-=n>>1;
    for(register int i=3;i<=sqrt(n);i+=2){
        if(!p[i]){
            for(register int j=i*i;j<=n;j+=i){
            	if(!p[j]&&j&1) 
                    --ans;
                p[j]=1;
            }
        }
    }
    printf("%d",ans);
    return 0;
}

