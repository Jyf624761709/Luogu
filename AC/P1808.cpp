#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
bool p(string a,string b){
	if(a.length()==b.length())
	    return a==b;
	return false;
}
int main(){
	string s[10005];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>s[i];
	    sort(s[i].begin(),s[i].end());
	}
	sort(s,s+n);
	int js=0;
	for(int i=0;i<n-1;i++)
	    if(p(s[i],s[i+1])==false)
	        js++;
	printf("%d",js+1);
	return 0;
}


