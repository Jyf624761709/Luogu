#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXX=2147483647;
const int MINN=-2147482647;
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
//inline
typedef long long ll;
struct kk{
	int l,r;
}p[100005];
inline void left(int a,int b){
	if(p[b].l==0){
		p[b].l=a;
		p[a].r=b;
		return;
	}
	if(p[b].l>0){
		p[a].r=b;
		p[a].l=p[b].l;
		p[p[b].l].r=a;
		p[b].l=a;
	}
}
inline void right(int a,int b){
	if(p[b].r==0){
		p[b].r=a;
		p[a].l=b;
		return;
	}
	if(p[b].r>0){
		p[a].l=b;
		p[a].r=p[b].r;
		p[p[b].r].l=a;
		p[b].r=a;
	}
}
inline void del(int a){
	if(p[a].l==0&&p[a].r==0) return;
	p[p[a].l].r=p[a].r;
	p[p[a].r].l=p[a].l;
	p[a].l=0;
	p[a].r=0;
}
int main(){
	/*in(t);
	  out(t);*/
	int n,m,pp,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    p[i].l=0;
	    p[i].r=0;
	}
	for(int i=2;i<=n;i++){
		scanf("%d%d",&a,&pp);
		if(pp==1)
		    right(i,a);
		else
		    left(i,a);
	}
	int mm=n;
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&a);
		if(p[a].l>0||p[a].r>0)
		    --mm;
		del(a);
	}
	int li;
	for(int i=1;i<=n;i++){
	    if((p[i].l)==0&&p[i].r>0){
	    	li=i;
	    	break;
	    }
	}
	printf("%d ",li);
	for(int i=2;i<=mm;i++){
		printf("%d ",p[li].r);
		li=p[li].r;
	}
	return 0;
}


