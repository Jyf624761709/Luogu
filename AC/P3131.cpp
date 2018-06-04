#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define m(a) memset(a,-1,sizeof(a))
#define frin(t) freopen("t.in","r",stdin)
#define frout(t) freopen("t.out","w",stdout)
int main(){
    int ma=1<<31,n,a,f[50005],fi[7],la[7];
    scanf("%d",&n);
    f[0]=0;
    m(fi);
    m(la);
    for(int i=1;i<=n;i++){
    	scanf("%d",&a);
    	f[i]=(f[i-1]+a)%7;
    	if(fi[f[i]]==-1)
    	    fi[f[i]]=i;
    }
    for(int i=n;i>=1;i--){
    	if(la[f[i]]==-1)
    	    la[f[i]]=i;
    }
    for(int i=0;i<7;i++)
        if(la[i]-fi[i]>ma)
            ma=la[i]-fi[i];
    printf("%d",ma);
    return 0;
}

