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
map<string,bool> vis;
map<string,int> dis;
string s,tt="123804765";
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I string _change(string f,int a,int b){
    f[a]^=f[b];
    f[b]^=f[a];
    f[a]^=f[b];
    return f;
}
I bool isans(string f){
    return tt==f;
}
queue<string> q;
int fx[]={888888,-1,-3,1,3};
I void bfs(){
    q.push(s);
    vis[s]=true;
    dis[s]=0;
   	if(isans(s)){
  		printf("0");
  		exit(0);
    }
    while(!q.empty()){
    	string tmp=q.front();
    	q.pop();
    	int id;
    	for(R int i=0;i<9;++i)
    	    if(tmp[i]=='0'){
    	    	id=i;
    	    	break;
            }
        string ff;
        int x;
 		for(R int i=1;i<5;++i){
 			x=id+fx[i];
 			if(x<0||x>8) continue;
 			if(i&1&&x/3!=id/3)
                continue;
            ff=_change(tmp,x,id);
            if(vis[ff]) continue;
            dis[ff]=dis[tmp]+1;
            if(isans(ff)){
  		        printf("%d",dis[ff]);
  		        exit(0);
            }
            vis[ff]=true;
            q.push(ff);
        }
    }
}
int main(){
    //in(t);out(t);
    cin>>s;
    bfs();
    return 0;
}

