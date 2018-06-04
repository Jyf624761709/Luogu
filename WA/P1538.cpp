#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int k;
void zero(int s){
	if(s==1){
	    printf(" ");
	    for(int i=1;i<=k;i++)
	        printf("-");
	    printf("  ");
	}
	if(s==2){
		for(int i=1;i<=k;i++)
	        printf("-");
}
void one(int s){
}
void two(int s){
}
void three(){
}
void four(){
}
void five(){
}
void six(){
}
void seven(){
}
void eight(){
}
void nine(){
}
int main(){
	char s[1000];
	cin>>k>>s;
	int l=strlen(s)-1;
	for(int j=1;j<=7;j++){
		printf("   ");
        for(int i=0;i<=l;i++){
	        switch(s[i]){
	        	case "0":zero(j);break;
	    	    case "1":one(j);break;
	    	    case "2":two(j);break;
	    	    case "3":three(j);break;
		    	case "4":four(j);break;
	    	    case "5":five(j);break;
	    	    case "6":six(j);break;
	        	case "7":seven(j);break;
	    	    case "8":eight(j);break;
	    	    case "9":nine(j);;
	        }
	    }
	    printf("\n");
	}
	return 0;
}


