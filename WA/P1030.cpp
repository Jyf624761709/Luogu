#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
char mi[0],be[10];
int le;
int js=0;
void qf(int ml,int mr,int br){
	if(ml>mr) return ;
	//printf("%c" ,be[br]);
	if(ml==mr) return ;
	int id;
	for(int i=ml;i<=mr;i++)
	    if(mi[i]==be[br]){
	    	id=i;
	    	break;
	    }
	qf(ml,id-1,id-1);
	qf(id+1,mr,mr-1);
}
int main(){
    scanf("%s\n%s",mi,be);
    le=strlen(mi)-1;
    qf(0,le-1,le-1);
	return 0;
}


