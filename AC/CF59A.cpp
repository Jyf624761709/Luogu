#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<vector>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
int d,x;
char s[1000];
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
int main(){
	/*in();out();*/
	cin>>s;
	int l=strlen(s);
	for(R int i=0;i<l;++i)
	    s[i]<='Z'?++d:++x;
	if(d<=x)
	    for(R int i=0;i<l;++i)
	        s[i]<='Z'?printf("%c",s[i]+'a'-'A'):printf("%c",s[i]);
	else
	    for(R int i=0;i<l;++i)
	        s[i]<='Z'?printf("%c",s[i]):printf("%c",s[i]-'a'+'A');
	return 0;
}


