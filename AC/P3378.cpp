#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> > a;
#define frin(t) freopen("t.in","r",stdin)
#define frout(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int main(){
	int p,n,x;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&p);
		if(p==1){
			scanf("%d",&x);
			a.push(x);
		}
		if(p==2){
			int s=a.top();
		    printf("%d\n",s);
		}
		if(p==3){
			a.pop();
		}
	}
	return 0;
}


