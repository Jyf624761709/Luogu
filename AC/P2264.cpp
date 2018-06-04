#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int n,lw[110],l,ans;
char w[110][110],s[1100];
bool p[110];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;} 
int main(){
    //in(t);out(t);
    _(n);
    for(R int i=1;i<=n;++i){
        scanf("%s\n",w[i]);
        lw[i]=strlen(w[i]);
        for(R int j=0;j<lw[i];++j)
            if('a'<=w[i][j]&&w[i][j]<='z')
                w[i][j]-=32;
    }
    gets(s);
    int l=strlen(s);
    for(R int i=0;i<l;++i)
        if('a'<=s[i]&&s[i]<='z')
            s[i]-=32;
    for(R int i=0;i<l;++i){
    	if(s[i]<'A'||'Z'<s[i]){
    		if(s[i]=='.')
    			m(p);
    		continue;
        }
        for(R int j=1;j<=n;++j){
            if(p[j]) continue;
            bool flag=1;
            for(R int k=i;k<i+lw[j];++k)
                if(w[j][k-i]!=s[k]||'A'>s[k]||s[k]>'Z'){
                	flag=0;
                	break;
                }
            if(flag)
                if(s[i+lw[j]]<'A'||s[i+lw[j]]>'Z'){
                	p[j]=1;
                	++ans;
                }
        }
    }
    cout<<ans;
    return 0;
}

