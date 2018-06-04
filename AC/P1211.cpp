#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int ws(int n){
    int s=0;
    if(n==0)
        s++; 
    while(n>0){
        s++;
        n/=10;
    }
    return s;
}
int main(){
    int n,a,ans=0,j1,j2,to,tj1,tj2,tto;
    bool p[12],pd=1;
    memset(p,0,sizeof(p));
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        p[a]=1;
    }
    for(int i=100;i<=999;i++){
        for(int j=10;j<=99;j++){
            j1=j%10*i;
            j2=j/10*i;
            to=i*j;
            tj1=j1;
            tj2=j2;
            tto=to;
            if(ws(j1)<=3&&ws(j2)<=3&&ws(to)<=4&&p[i%10]&&p[i/10%10]&&p[i/100]&&p[j/10]&&p[j%10]){
                if(p[tj1%10]==0)
                    pd=0;
                while(tj1>0){
                    if(p[tj1%10]==0)
                        pd=0;
                    tj1/=10;
                }
                if(p[tj2%10]==0)
                    pd=0;
                while(tj2>0){
                    if(p[tj2%10]==0)
                        pd=0;
                    tj2/=10;
                }
                if(p[tto%10]==0)
                    pd=0;
                while(tto>0){
                    if(p[tto%10]==0)
                        pd=0;
                    tto/=10;
                }
                if(pd==1)
                    ans++;
            }
            pd=1;
        }
    }
    printf("%d",ans);
    return 0;
}


