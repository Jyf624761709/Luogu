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
const int N=11000010;
const int M=30000010;
char a[N],s[M];
int len;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int p[M];
I int manacher(){
    int ans=ine,mid=1,mr=0;
    for(R int i=1;i<=len;++i){
        if(i<mr)
            p[i]=mn(p[(mid<<1)-i],mr-i);
        else
            p[i]=1;
        while(s[i-p[i]]==s[i+p[i]]&&i-p[i]>=0)
            ++p[i];
        --p[i];
        if(mr<i+p[i]){
            mr=i+p[i];
            mid=i;
        }
        ans=mx(ans,p[i]);
    }
    return ans;
}
int main(){
    //in(t);out(t);
    int l;
    scanf("%s",a+1);l=strlen(a+1);
    s[0]='#';
    for(R int i=1;i<=l;++i)
    	s[++len]=a[i],s[++len]='#';
    printf("%d",manacher());
    return 0;
}

