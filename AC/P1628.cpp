#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int main(){
    string s[100005],a;
    int l,n,la;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
        cin>>s[i];
    cin>>a;
    la=a.length();
    sort(s,s+n);
    for(int i=0;i<n;i++){
        l=s[i].length();
        if(l<la)
            continue;
        else{
            bool p=1;
            for(int j=0;j<la;j++)
                if(s[i][j]!=a[j]){
                    p=0;
                    break;
                }
            if(p==1)
                cout<<s[i]<<endl;
        }
    }
    return 0;
}


