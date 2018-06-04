#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int p1,p2,p3,l;
char es[105];
void work(){
	bool p=1;
	for(int i=0;i<l;i++){
		if(es[i+1]=='-'){
			if(es[i]>=es[i+2]){
				if(es[i]+1==es[i+2]){
					if(es[i-1]!='-')
					    printf("%c",es[i]);
				    printf("%c",es[i+2]);
				}
				else
				    if((es[i]>='a'&&es[i+2]>='a')||(es[i]<='9'&&es[i+2]<='9')){
				    	if(es[i-1]!='-')
				    	    printf("%c",es[i]);
				        printf("-%c",es[i+2]);
				    }
				p=0;
			}
			if((es[i]>='a'&&es[i+2]<='9')||(es[i+2]>='a'&&es[i]<='9')){
				if(es[i-1]!='-')
				    printf("%c",es[i]);
			    printf("-%c",es[i+2]);
			    p=0;
			}
			if(p==1){
				if(p1==1){
					if(p3==1){
						if(es[i-1]!='-')
						    printf("%c",es[i]); 
					    for(char c=es[i]+1;c<es[i+2];c++)
					        for(int j=1;j<=p2;j++)
					            printf("%c",c);
					    printf("%c",es[i+2]);
					}
					if(p3==2){
						if(es[i-1]!='-')
						    printf("%c",es[i]);
					    for(char c=es[i+2]-1;c>es[i];c--)
					        for(int j=1;j<=p2;j++)
					            printf("%c",c);
					    printf("%c",es[i+2]);
					}
				}
				if(p1==2){
					if(p3==1){
						if(es[i-1]!='-')
						    printf("%c",es[i]); 
					    for(char c=es[i]+1;c<es[i+2];c++)
					        for(int j=1;j<=p2;j++)
					            printf("%c",c-'a'+'A');
					    printf("%c",es[i+2]);
					}
					if(p3==2){
						if(es[i-1]!='-')
						    printf("%c",es[i]); 
					    for(char c=es[i+2]-1;c>es[i];c--)
					        for(int j=1;j<=p2;j++)
					            printf("%c",c-'a'+'A');
					    printf("%c",es[i+2]);
					}
				}
				if(p1==3){
					if(es[i-1]!='-')
						printf("%c",es[i]); 
					for(char c=es[i]+1;c<es[i+2];c++)
					    for(int j=1;j<=p2;j++)
					        printf("*");
				    printf("%c",es[i+2]);
				}
			}
		}
		if(es[i+1]!='-'&&es[i]!='-'&&es[i-1]!='-')
		    printf("%c",es[i]);
		p=1;
	}
}
int main(){
    scanf("%d%d%d\n%s",&p1,&p2,&p3,es);
    l=strlen(es);
    work();
	return 0;
}


