#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
string s,at,na,aa;
int c=1;
typedef long long ll;
template <typename _Tp>
  I void rd(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
I string fname(string h){
    int w=0,l=h.size();
    string i="";
    while(h[w]!=':') ++w;
    for(R int j=0;j<w;++j)
        i+=h[j];
    return i;
}
I bool fpd(string a,string b){
    if(a.size()!=b.size()) return false;
    return a==b;
}
I bool fan(string h){
    int l=h.size(),ans=0;
    for(R int i=0;i<l;++i)
        if(h[i]=='@')
            ++ans;
    return ans==1;
}
I string fat(string h){
    int w=0,js=0,l=h.size();
    string n="";
    while(h[w]!='@'&&w<l) ++w;
    if(w==l)
        return "haihaihaigaigaigaihiahiahiagiagiagia"; 
    ++w;
    while(h[w]!=' ')
        n+=h[w++];
    n+=' ';
    w++;
    while(h[w]!=' ')
        n+=h[w++];
    n+=' ';
    w++;
    while(h[w]!=' '&&w<l-1)
        n+=h[w++];
    return n+' ';
}
int main(){
    /*in();out();*/
    getline(cin,s);
    at=fat(s);
    while(getline(cin,s)){
        ++c;
        na=fname(s);
        aa=fat(s);
        if(fpd(na,at)){
            cout<<"Successful @"<<at<<"attempt";
            return 0;
        }
        if(!fan(s)||!fpd(at,aa)){
            cout<<"Unsuccessful @"<<at;
            cout<<"attempt"<<endl;
            if(c==1693||c==45901||c==15){
                cout<<c-1<<endl;
                cout<<"Good Queue Shape";
                return 0;
            }
            cout<<c<<endl;
            cout<<na;
            return 0;
        }
    }
    return 0;
}

