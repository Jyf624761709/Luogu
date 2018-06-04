#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<cmath>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen(".in","r",stdin)
#define out() freopen(".out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
#define ls(x) x<<1
#define rs(x) x<<1|1
#define lb(x) x&-x
#define gc() getchar()
#define EL putchar(10)
#define SP putchar(32)
typedef long long ll;
int n;
string s[110];
/*char ss[1<<17],*A=ss,*B=ss;
I char gc(){return A==B&&(B=(A=ss)+fread(ss,1,1<<17,stdin),A==B)?EOF:*A++;}*/
template <typename _Tp> I void _(_Tp &x);
template <typename _Tq> I void wr(_Tq x);
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int next1[110],len1,len2;
I void get_next(string s2){
    m(next1);
    int t1=0,t2;
    next1[0]=t2=-1;
    while(t1<len2)
        if(t2==-1 || s2[t1]==s2[t2])
            next1[++t1]=++t2;
        else t2=next1[t2];
}
I bool KMP(string s1,string s2){
    len1=s1.size(),len2=s2.size();
    get_next(s2);
    int t1=0,t2=0;
    while(t1<len1){
        if(t2==-1 || s1[t1]==s2[t2])
            t1++,t2++;
        else t2=next1[t2];
        if(t2==len2) return true;
    }
    return false;
}
I bool cmp(string a,string b){
    if(a.size()==b.size()) return a<b;
    return a.size()<b.size();
}
int main(){
    //in();out();
    cin>>n;
    for(R int i=1;i<=n;++i) cin>>s[i];
    sort(s+1,s+1+n,cmp);
    for(R int i=2;i<=n;++i)
        if(!KMP(s[i],s[i-1])){
            puts("NO");
            return 0;
        }
    puts("YES");
    for(R int i=1;i<=n;++i) cout<<s[i]<<endl;
    return 0;
}
template <typename _Tp>
  I void _(_Tp &x){
      _Tp w=1;char c=0;x=0;
      while (c^45&&(c<48||c>57)) c=gc();
      if (c==45) w=-1, c=gc();
      while(c>=48&&c<=57) x=(x<<1)+(x<<3)+(c^48),c=gc();
      x*=w;
  }
template <typename _Tq>
    I void wr(_Tq x){
        if(x<0)
            putchar(45),x=-x;
        if(x<10){
            putchar(x+48);
            return;
        }
        wr(x/10);
        putchar(x%10+48);
    }
