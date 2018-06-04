#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>	
using namespace std;
int min(int a,int b,int c,int d){
    int mi=a;
    if(b<mi)
        mi=b;
    if(c<mi)
        mi=c;
    if(d<mi)
        mi=d;
    return mi;
}
int main(){
    int n,x,y,d,fi=0;
    scanf("%d%d%d",&n,&x,&y);
    d=min(x,y,n-x+1,n-y+1);
    for(int i=1;i<d;i++)
        fi+=4*(n-2*i+1);
    fi++;
    for(int i=d;i<n-d+1;i++){
        if(x==d&&y==i){
            printf("%d\n",fi);
            return 0;
        }
        fi++;
    }
    for(int i=d;i<n-d+1;i++){
        if(x==i&&y==n-d+1){
            printf("%d\n",fi);
            return 0;
        }
        fi++;
    }
    for(int i=n-d+1;i>d;i--){
        if(x==n-d+1&&y==i){
            printf("%d\n",fi);
            return 0;
        }
        fi++;
    }
    for(int i=n-d+1;i>d;i--){
        if(x==i&&y==d){
            printf("%d\n",fi);
            return 0;
        }
        fi++;
    }
    printf("%d\n",fi);
    return 0;
}

