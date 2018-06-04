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
int sjz,m,l;
char t[100002];
char mjz[100005];
void szh(){
    int i=0,sj;
    sj=sjz;
    while(sj>0){
        mjz[i]=sj%m+'0';
        i++;
        sj/=m;
    }         
    l=i-1; 
    for(int i=0;i<=l;i++)
        t[i]=mjz[l-i];
    for(int i=0;i<=l;i++)
        mjz[i]=t[i];
}
bool ph(){
    for(int i=0,j=l;i<j;i++,j--)
        if(mjz[i]!=mjz[j])
            return false;
    return true;
}
int main(){
    int js=0,s;
    scanf("%d %d",&s,&sjz);
    sjz++;
    while(1){
        int j=2;
        for(int i=10;i>=2;i--){
            m=i;
            szh();
            if(ph()==true)
                j--;
            if(j==0){
                printf("%d\n",sjz);
                s--;
                break;
            }
        }
        if(s==0)
            break;
        sjz++;
    }
    return 0;
}
  
