#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
typedef long long ll;
map<string,ll> z;
int n;
char c;
string r[100005];
bool cmp(string a,string b){
    if(a.length()==b.length())
        return a<b;
    return a.length()<b.length();
}
int main(){
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        string w="",f="";
        bool p=0;
        while(c!='='){
            scanf("%c",&c);
            if(c=='=') break;
            w+=c;
        } 
        r[i]=w;
        while(c!=';'){
            scanf("%c",&c);
            if(c=='+'){
                p=1;
                break;
           	}
           	if(c==';')
           	    break;
            f+=c;
        }
        if(p==0){
            if('0'<=f[0]&&f[0]<='9'){
                ll s=0;
                int l=f.length();
                for(int j=0;j<l;j++)
                    s=s*10+f[j]-'0';
                z[w]=s;
            }
            else
                z[w]=z[f];
        }
        else{
            if('0'<=f[0]&&f[0]<='9'){
                ll s=0;
                int l=f.length();
                for(int j=0;j<l;j++)
                    s=s*10+f[j]-'0';
                z[w]=s;
            }
            else
                z[w]=z[f];
            f="";
            while(c!=';'){
                scanf("%c",&c);
                if(c==';'){
                    p=1;
                    break;
            	}
                f+=c;
            }
            if('0'<=f[0]&&f[0]<='9'){
                ll s=0;
                int l=f.length();
                for(int j=0;j<l;j++)
                    s=s*10+f[j]-'0';
                z[w]+=s;
            }
            else
                z[w]+=z[f];
        }
        scanf("\n");
    }
    string tt;
    sort(r,r+n,cmp);
    cout<<r[0]<<" "<<z[r[0]]<<endl;
    for(int i=1;i<n;i++){
    	if(r[i]!=r[i-1])
    	    cout<<r[i]<<" "<<z[r[i]]<<endl;
    }
    return 0;
}

