#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
int n,l,njz[110];
char cjz[110];
void gj(){
    int jw=0,tjz[110],t;
    for(int i=0,j=l;i<=l&&j>=0;i++,j--)
        tjz[i]=njz[j];
    for(int i=l;i>=0;i--){
        t=njz[i];
        njz[i]=(tjz[i]+njz[i]+jw)%n;
        jw=(t+tjz[i]+jw)/n;
    }
    if(jw>0){
        l++;
        for(int k=l;k>=1;k--)
            njz[k]=njz[k-1];
        njz[0]=jw;
    }
    return ;
}
void out(){
    bool p=1;
    for(int i=1;i<=30;i++){
        gj();
        for(int j=0,k=l;j<k;j++,k--){
            if(njz[j]!=njz[k]){
                p=0;
                break;
            }
        }
        if(p==1){
            printf("STEP=%d",i);
            return ;
        }
        p=1;
    }
    printf("Impossible!");
    return ;
}
int main(){
    scanf("%d\n%s",&n,cjz);
    l=strlen(cjz)-1;
    for(int i=0;i<=l;i++){
        if(cjz[i]<='9')
            njz[i]=cjz[i]-'0';
        else
            njz[i]=cjz[i]-'A'+10;
    }
    out();
    return 0;
}
