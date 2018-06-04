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
int a[100005],n;
template <typename _Tp>
  inline void read(_Tp &x){
      R int w=1;R char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I bool cmp(int a,int b){
    return a>b;
}
I int lis(){
    int num[100005];
    num[1]=a[1];
    int len=1;
    for(R int i=2;i<=n;++i){
    	if(num[len]>=a[i]){
    		num[++len]=a[i];
 			continue;
        }
        int pos=upper_bound(num+1,num+len+1,a[i],cmp)-num;
        num[pos]=a[i];
    }  
    return len;  
}
I int lisu(){
    int num[100005];
    num[1]=a[1];
    int len=1;
    for(R int i=2;i<=n;++i){
    	if(num[len]<a[i]){
    		num[++len]=a[i];
 			continue;
        }
        int pos=lower_bound(num+1,num+len+1,a[i])-num;
        num[pos]=a[i];
    } 
    return len;  
}
int main(){
    /*in(t);
      out(t);*/
    while((scanf("%d",&a[++n]))!=EOF);
    --n;
    printf("%d\n%d",lis(),lisu());
    return 0;
}

