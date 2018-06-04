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
char s1[1000002],s2[1000002];
int l1,l2,nxt[1000002],j;
inline void find_next(){
	for (int i=2;i<=l2;i++){    
        while(j>0&&s2[i]!=s2[j+1])
            j=nxt[j];    
        if(s2[j+1]==s2[i])j++;    
        nxt[i]=j;
    }
}
int main(){
	cin>>s1+1>>s2+1;
	l1=strlen(s1+1),l2=strlen(s2+1);
	find_next();
	int k=0;
	for(int i=1;i<=l1;i++){
        while(k>0&&s2[k+1]!=s1[i])
            k=nxt[k];
        if (s2[k+1]==s1[i]) 
            k++;
        if (k==l2) 
		    printf("%d\n",i-l2+1);
    }
	for(int i=1;i<=l2;i++)
	    printf("%d ",nxt[i]);
	return 0;
}

