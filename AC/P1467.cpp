#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
int s[15],l;
void ja(){
	int id=-1;
	for(int j=l;j>=1;j--){
		if(s[j]<9){
			s[j]++;
			id=j;
			break;
		}
		if(s[j]==9)
		    s[j]=0;
	}
	if(id==-1){
		for(int j=l+1;j>1;j--)
		    s[j]=s[j-1];
		s[1]=1;
		l++;
	}
}
bool p(){
	bool d[14]={0};
    for(int i=1;i<=l;i++){
    	if(d[s[i]]==1)
    	    return false;
    	d[s[i]]=1;
    }
    int i=1;
    m(d);
    while(1){
    	if(d[i]==1)
    	    return false;
        d[i]=1;
    	i=(i+s[i]-1)%l+1;
    	bool pd=1;
    	for(int j=1;j<=l;j++)
    	    if(d[j]==0){
    	    	pd=0;
    	    	break;
    	    }
    	if(pd==1){
    	    if(i==1) return true;
    	    else return false;
    	}
    }
}
int main(){
    char a[15];
	scanf("%s",a);
	l=strlen(a);
	for(int i=1;i<=l;i++)
	    s[i]=a[i-1]-'0';
	while(1){
	    ja();
		if(p()==true){
		    for(int i=1;i<=l;i++)
		        printf("%d",s[i]);
	        return 0;
	    }
	}
}

