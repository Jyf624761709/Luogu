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
int s[7][15],ans=MAXX,ss[6],tt[6];
void dfs(int i,int js,int sy){
	if(sy<=0) return;
	if(i==5){
		if(sy>10||sy<=0)
		    return;
		js+=s[5][sy];
		if(js<ans){
			ans=js;
			tt[5]=sy;
			for(int f=1;f<=5;f++)
			    ss[f]=tt[f];
		}
		return;
	}
	for(int f=1;f<=10;f++){
		if(sy-f<5-f)
		    return;
		tt[i]=f;
		dfs(i+1,js+s[i][f],sy-f);
	}
}
int main(){
	/*in(t);
	  out(t);*/
	for(int i=1;i<=5;i++)
	    for(int j=1;j<=10;j++)
	        scanf("%d",&s[i][j]);
	dfs(1,0,25);
	printf("%d\n",ans);
	for(int i=1;i<=5;i++)
	    printf("%d ",ss[i]);
	return 0;
}


