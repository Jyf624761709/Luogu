#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#include<set>
const int inf=2147483647;
const int ine=-2147482647;
using namespace std;
#define in() freopen("t.in","r",stdin)
#define out() freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
#define I inline
#define R register
typedef long long ll;
template <typename _Tp>
  I void _(_Tp &x){
      int w=1;char c=0;x=0;
      while (c^'-'&&(c<'0'||c>'9')) c=getchar();
      if (c=='-') w=-1, c=getchar();
      while(c>='0'&&c<='9') x=(x<<1)+(x<<3)+c-'0',c=getchar();
      x*=w;
  }
I int mx(int a,int b){return a>b?a:b;}I int mn(int a,int b){return a<b?a:b;}
map<char,char> mp;
string s;
I void add(){
    mp['Q'] = 'Q';
    mp['W'] = 'Q';
    mp['E'] = 'W';
    mp['R'] = 'E';
    mp['T'] = 'R';
    mp['Y'] = 'T';
    mp['U'] = 'Y';
    mp['I'] = 'U';
    mp['O'] = 'I';
    mp['P'] = 'O';
    mp['['] = 'P';
    mp[']'] = '[';
    mp['A'] = 'A';
    mp['S'] = 'A';
    mp['D'] = 'S';
    mp['F'] = 'D';
    mp['G'] = 'F';
    mp['H'] = 'G';
    mp['J'] = 'H';
    mp['K'] = 'J';
    mp['L'] = 'K';
    mp[';'] = 'L';
    mp['\''] = ';';
    mp['Z'] = 'Z';
    mp['X'] = 'Z';
    mp['C'] = 'X';
    mp['V'] = 'C';
    mp['B'] = 'V';
    mp['N'] = 'B';
    mp['M'] = 'N';
    mp[','] = 'M';
    mp['.'] = ',';
    mp['/'] = '.';
    mp['\\']=']';
    mp[' '] = ' ';
    mp['`'] = '`';
    mp['1'] = '`';
    mp['2'] = '1';
    mp['3'] = '2';
    mp['4'] = '3';
    mp['5'] = '4';
    mp['6'] = '5';
    mp['7'] = '6';
    mp['8'] = '7';
    mp['9'] = '8';
    mp['0'] = '9';
    mp['-'] = '0';
    mp['='] = '-';
}
int main(){
    /*in();out();*/
    add();
    while(getline(cin,s)){
        int l=s.size();
        for(R int i=0;i<l;++i)
            putchar(mp[s[i]]);
        puts("");
    }
    return 0;
}
