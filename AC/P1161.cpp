#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n,t;
    bool p[2000005];
    double a;
    memset(p,0,sizeof(p));
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%lf%d\n",&a,&t);
        for(int j=1;j<=t;j++)
            p[(int)(a*j)]=!p[(int)(a*j)];
    }
    for(int i=1;i<=2000000;i++)
        if(p[i]==1){
            printf("%d",i);
            return 0;
        }
}

