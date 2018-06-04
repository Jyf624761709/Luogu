#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
#include<cmath>
#include<cstdlib>
using namespace std;
char pre[30],mid[30],ans[30];
void build(int n,char *pre,char *mid,char *ans){
    if(n<=0)
        return;
    int p=strchr(mid,pre[0])-mid;
    build(p,pre+1,mid,ans);
    build(n-1-p,pre+p+1,mid+p+1,ans+p);
    ans[n-1]=pre[0];
}
int main(){
    int le;
    cin>>mid>>pre;
    le=strlen(mid);
    build(le,pre,mid,ans);
    cout<<ans;
    return 0;
}

