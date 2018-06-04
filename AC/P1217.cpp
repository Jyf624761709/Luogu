#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool pd(int na){
	for(int y=2;y*y<=na;y++)
	    if(na%y==0)
	        return 0;
	return 1;
}
bool p[1000000005];
int main(){
	int a,b,pa;
	scanf("%d %d",&a,&b);
	for(int i=0;i<=9;i++)
	    p[i]=1;
	for(int i=1;i<=9;i++)
	    p[i*10+i]=1;
	for(int d1=1;d1<=9;d1+=2)
        for(int d2=0;d2<=9;d2++){
        	pa=100*d1+10*d2+d1;
            p[pa]=1;
        }
    for(int d1=1;d1<=9;d1+=2)
        for(int d2=0;d2<=9;d2++){
        	pa=1000*d1+100*d2+10*d2+d1;
            p[pa]=1;
        }
	for(int d1=1;d1<=9;d1+=2){ 
        for(int d2=0;d2<=9;d2++){
            for(int d3=0;d3<=9;d3++){
                pa=10000*d1+1000*d2+100*d3+10*d2+d1;
                p[pa]=1;
           }
        }
    }
    for(int d1=1;d1<=9;d1+=2){ 
        for(int d2=0;d2<=9;d2++){
            for(int d3=0;d3<=9;d3++){
                pa=100000*d1+10000*d2+1000*d3+100*d3+10*d2+d1;
                p[pa]=1;
           }
        }
    }
    for(int d1=1;d1<=9;d1+=2){ 
        for(int d2=0;d2<=9;d2++){
            for(int d3=0;d3<=9;d3++){
            	for(int d4=0;d4<=9;d4++){
                    pa=1000000*d1+100000*d2+10000*d3+1000*d4+100*d3+10*d2+d1;
                    p[pa]=1;
            	}
           }
        }
    }
    for(int d1=1;d1<=9;d1+=2){ 
        for(int d2=0;d2<=9;d2++){
            for(int d3=0;d3<=9;d3++){
            	for(int d4=0;d4<=9;d4++){
                    pa=10000000*d1+1000000*d2+100000*d3+10000*d4+1000*d4+100*d3+10*d2+d1;
                    p[pa]=1;
            	}
           }
        }
    }
    for(int i=a;i<=b;i++)
    	if(p[i]==1)
    	    if(pd(i)==1)
    	        printf("%d\n",i);
    return 0;
}

	
