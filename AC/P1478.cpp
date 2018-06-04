#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct apple{
	int x;
	int y;
}p[5002];
bool cmp(apple a,apple b){
	return a.y<b.y;
}
int main(){
	//freopen("P1478.in","r",stdin);
	//freopen("P1478.out","w",stdout);
    int ans=0,n,s,a,b,h;
    scanf("%d%d\n%d%d\n",&n,&s,&a,&b);
    h=a+b;
    for(int i=1;i<=n;i++)
        scanf("%d%d\n",&p[i].x,&p[i].y);
    sort(p+1,p+n+1,cmp);
    for(int i=1;i<=n;i++){
    	if(s-p[i].y<0)
    	    break;
    	if(h>=p[i].x){
    	    ans++;
    	    s-=p[i].y;
    	}
    }
    printf("%d",ans);
	return 0;
}


