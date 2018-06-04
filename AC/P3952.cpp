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
int t,l,po;
char c;
struct App{
    char k;
    int fr,to;
}app[105];
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I bool ph();
I void work();
int main(){
    /*in();out();*/
    _(t);
    while(t--){
    	scanf("%d O(%c",&l,&c);
        if(c=='1'){
            scanf(")\n");
            po=0;
        }
        else
            scanf("^%d)\n",&po);
        if(!ph()){
            puts("ERR");
            continue;
        }
        work();
    }
    return 0;
}
I bool ph(){
    bool ppp=1;
    char c0,c1;
    int tt=0;
    bool p[30]={0};
    for(R int i=1;i<=l;++i){
        scanf("%c",&app[i].k);
        app[i].fr=0,app[i].to=0;
        if(app[i].k=='F'){
            if(app[i-1].k=='E') m(p);
            scanf(" %c ",&c0);
            if(p[c0-'a'])
                ppp=0;
            p[c0-'a']=1;
            ++tt;
            c1='a';
            while(c1!=' '){
                c1=getchar();
                if(c1=='n'){
                    c1=getchar();
                    app[i].fr=-1;
                    break;
                }
                if(c1!=' ')app[i].fr=app[i].fr*10+c1-'0';
            }
            while(c1!='\n'){
                c1=getchar();
                if(c1=='n'){
                    c1=getchar();
                    app[i].to=-1;
                    break;
                }
                if(c1!='\n')app[i].to=app[i].to*10+c1-'0';
            }
        }
        else{
            scanf("\n");
            --tt;
            if(tt<0)
                ppp=0;
        }
    }
    if(tt!=0)
        ppp=0;
    return ppp;
}
I void work(){
    int ans=0;
    int tt=0,js[105]={0};
    for(R int i=1;i<=l;++i){
    	if(tt!=0||i==1){
    		int t=0;
    		for(R int j=i;j<=l;++j){
    		    if(app[j].k=='F'||j==l){
    		    	i=j;
    		    	break;
    		    }
    		    --tt;
    		    ++t;
    		}
    		if(i==l) break;
    		js[i]=js[i-(t<<1)-1];
    	}
    	if(tt==0)
            js[i]=0;
    	++tt;
    	if((app[i].fr==-1&&app[i].to!=-1)||((app[i].fr!=-1&&app[i].to!=-1)&&app[i].fr>app[i].to)){
    		int ttt=0;
    		for(R int j=i;j<=l;++j){
    			app[j].k=='F'?++ttt:--ttt;
    			if(ttt==0){
    				js[j]=js[i-1];
    				i=j;
    				break;
    			}
    		}
    		continue;
    	}
    	if(app[i].fr!=-1&&app[i].to==-1)
    	   ++js[i];
    	ans=mx(ans,js[i]);
    	//printf("%d\n",js[i]);
    }
    if(ans==po)
        puts("Yes");
    else
        puts("No");
}

