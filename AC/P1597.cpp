#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define frin(t) freopen("t.in","r",stdin)
#define frout(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int main(){
    int a=0,b=0,c=0,t,l;
    char s[1000];
    gets(s);
    l=strlen(s);
    for(int i=0;i<l;i+=5){
        if(s[i]=='a'){
            if(s[i+3]<='9'){
                a=s[i+3]-'0';
                continue;
            }
            else{
                if(s[i+3]=='b')
                    a=b;
                if(s[i+3]=='c')
                    a=c;
            }
        }
        if(s[i]=='b'){
            if(s[i+3]<='9'){
                b=s[i+3]-'0';
                continue;
            }
            else{
                if(s[i+3]=='a')
                    b=a;
                if(s[i+3]=='c')
                    b=c;
            }
        }
        if(s[i]=='c'){
            if(s[i+3]<='9'){
                c=s[i+3]-'0';
                continue;
            }
            else{
                if(s[i+3]=='a')
                    c=a;
                if(s[i+3]=='b')
                    c=b;
            }
        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}


