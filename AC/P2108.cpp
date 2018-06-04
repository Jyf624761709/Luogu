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
int main(){
	int f=1,js=0;
	ll ans=0;
	string s;
	while(cin>>s){
		if (s=="negative") f=-1;  
        if (s=="one") js+=1; 
        if (s=="two") js+=2;
        if (s=="three") js+=3;
        if (s=="four") js+=4;
        if (s=="five") js+=5;
        if (s=="six") js+=6;
        if (s=="seven") js+=7;
        if (s=="eight") js+=8;
        if (s=="nine") js+=9;
        if (s=="ten") js+=10;  
        if (s=="eleven") js=+11;
        if (s=="twelve") js=+12;
        if (s=="thirteen") js+=13;
        if (s=="fourteen") js+=14;
        if (s=="fifteen") js+=15;
        if (s=="sixteen") js+=16;
        if (s=="seventeen") js+=17;
        if (s=="eighteen") js+=18;
        if (s=="nineteen") js+=19;
        if (s=="twenty") js+=20;
        if (s=="thirty") js+=30;
        if (s=="forty") js+=40;
        if (s=="fifty") js+=50;
        if (s=="sixty") js+=60;
        if (s=="seventy") js+=70;
        if (s=="eighty") js+=80;
        if (s=="ninety") js+=90;
        if (s=="hundred") js*=100;
        if (s=="thousand"){
        	js*=1000;
        	ans+=js;
        	js=0;
        }
        if(s=="million"){
        	js*=1000000;
        	ans+=js;
        	js=0;
        }
    }
    ans+=js;
    cout<<ans*f;
	return 0;
}


