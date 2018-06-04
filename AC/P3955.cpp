#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int ws(int n){
    int s=1;
    while(n>0){
        s*=10;
        n--;
    }
    return s;
}
int main(){
    int n,q,b[1005],r[1005][5],i;
    scanf("%d%d\n",&n,&q);
    for(i=1;i<=n;i++)
        scanf("%d",&b[i]);
    for(i=1;i<=q;i++)
        scanf("%d%d",&r[i][1],&r[i][2]);
    sort(b+1,b+n+1);
    int js;
    for(i=1;i<=q;i++){
        js=ws(r[i][1]);
        bool pd=0;
        int id;
        for(int j=1;j<=n;j++){
            if(b[j]%js==r[i][2]){
                pd=1;
                id=j;
                break;
            }
        }
        if(pd==1){
            printf("%d\n",b[id]);
        }
        else
            printf("-1\n");
    }
    return 0;
}
