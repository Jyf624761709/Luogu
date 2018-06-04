#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int MAXX=2147483647;
const int MINN=-2147482647;
using namespace std;
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
I void find_next();
I int kmp();
I bool pb();
I bool pf();
char s1[1000002],s2[1000002],s3[1000002];
int l1,l2,l3;
int main(){
    scanf("%s\n",s1+1);
    l1=strlen(s1+1);
    scanf("%s\n",s2+1);
    l2=strlen(s2+1);
    scanf("%s",s3+1);
    l3=strlen(s3+1);
    bool p1=pf(),p2=pb();
    if(p1&&p2){
        printf("both");
        return 0;
    }
    if(p1&&!p2){
        printf("forward");
        return 0;
    }
    if(!p1&&p2){
        printf("backward");
        return 0;
    }
    if(!p1&&!p2){
        printf("fantasy");
        return 0;
    }
}
I int kmp(int pd,int f){
    if(pd==1){
        bool p=1;
        for(R int i=f;i<=l1-l2+1;++i){
            p=1;
            for(R int j=1;j<=l2;++j)
                if(s1[i+j-1]!=s2[j]){
                    p=0;
                    break;
                }
            if(p)
                return i+l2-1;
        }
        return 0;
    }
    else{
        bool p=1;
        for(R int i=f;i<=l1-l3+1;++i){
            p=1;
            for(R int j=1;j<=l3;++j)
                if(s1[i+j-1]!=s3[j]){
                    p=0;
                    break;
                }
            if(p)
                return i+l3-1;
        }
        return 0;
    }
}
I bool pf(){
    int w=kmp(1,1);
    if(w==0) return false;
    w=kmp(2,w+1);
    return w?true:false;
}
I bool pb(){
    char t[1000002];
    for(R int i=1;i<=l1;++i)
        t[i]=s1[i];
    for(R int i=1;i<=l1;++i)
         s1[i]=t[l1-i+1];
    int w=kmp(1,1);
    if(w==0) return false;
    w=kmp(2,w+1);
    return w?true:false;
}

