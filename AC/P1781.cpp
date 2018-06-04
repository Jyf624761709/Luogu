#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define frin(t) freopen("t.in","r",stdin)
#define frout(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
struct t{
	int id;
	string ss;
}s[25];
bool cmp(t a,t b){
	if(a.ss.length()==b.ss.length())
	    return a.ss>b.ss;
	return a.ss.length()>b.ss.length();
}
int main(){
	int n,id;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
		s[i].id=i;
	    cin>>s[i].ss;
	    scanf("\n");
	}
	sort(s+1,s+n+1,cmp);
	printf("%d\n",s[1].id);
	cout<<s[1].ss;
	return 0;
}


