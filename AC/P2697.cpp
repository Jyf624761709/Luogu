#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int ma=0,fr[1000005],fg[1000005],l;
char s[1000005];
I int mx(int a,int b){
    return a>b?a:b;
}
int main(){
    /*in(t);
      out(t);*/
    scanf("%s",s+1);
    l=strlen(s+1);
    for(R int i=1;i<=l;++i){
        fr[i]=fr[i-1];
        fg[i]=fg[i-1];
        s[i]=='R' ? ++fr[i] : ++fg[i];
    }
    for(R int i=1;i<l;++i){
        for(R int j=l;j>i;--j)
            if(fr[j]-fr[i-1]==fg[j]-fg[i-1]){
            	ma=mx(ma,2*(fr[j]-fr[i-1]));
            	break;
            }
    }
    printf("%d",ma);
    return 0;
}

