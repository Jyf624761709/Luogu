#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int n,m,t[10000005];
char s[10000005];
void ja(){
    for(int j=n;j>=1;j--){
        if(t[j]<1){
            t[j]++;
            return;
        }
        t[j]--;
    }
}
void ji(){
    for(int j=n;j>=1;j--){
        if(t[j]>0){
            t[j]--;
            return;
        }
        t[j]++;
    }
}
int main(){
    scanf("%d%d\n",&n,&m);
    scanf("%s\n",s);
    for(int i=1;i<=n;i++)
        t[i]=s[i-1]-'0';
    for(int i=0;i<m;i++){
        s[i]=getchar();
        if(s[i]=='+')
            ja();
        if(s[i]=='-')
            ji();
        if(s[i]=='*'){
            n++;
            t[n]=0;
        }
        if(s[i]=='/')
            n--;
    }
    for(int i=1;i<=n;i++)
        printf("%d",t[i]);
    return 0;
}

