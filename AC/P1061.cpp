#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char to[30]={'1','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},jam[30];
int s,t,w,js=0;
void dfs(){
    int i;
	while(1){
		if(jam[w-1]==to[t]){
		    int l=0;
			for(i=w-1;i>=0;i--){
			    if(jam[i]!=to[t-l])
			        break;
			    l++;
			}
			jam[i]=jam[i]+1;
			if(i<0)
			    return ;
			l=1;
			for(int j=i+1;j<w;j++){
			    jam[j]=jam[i]+l;
			    l++;
			}
		}
		else
		    jam[w-1]=jam[w-1]+1;
		printf("%s\n",jam);
		js++;
		if(js==5)
		    return ;
	}
}
int main(){
    scanf("%d%d%d\n%s",&s,&t,&w,jam);
    dfs();
	return 0;
}


