#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<cmath>
#include<cstdlib>
using namespace std;
#define in(t) freopen("t.in","r",stdin)
#define out(t) freopen("t.out","w",stdout)
#define m(a) memset(a,0,sizeof(a))
int main(){
	char s[100005];
	int l,zm=0;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++){
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
			zm++;
		    printf(".");
		    continue;
		}
		cout<<s[i];
	}
	printf("\n");
	int t=zm,yy=0,p=1;
	zm/=3;
	if(t-zm*3==2)
	    zm++;
	for(int i=0;i<l;i++){
		if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))&&zm>0){
			zm--;
		    cout<<s[i];
		    continue;
		}
		if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))&&zm==0){
		    printf(".");
		    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		        yy=1;
		    p=0;
		    continue;
		}
		cout<<s[i];
	}
	printf("\n");
	if(yy==0){
		t*=2;
		zm=t/3;
		if(t-zm*3==2)
		    zm++;
		for(int i=0;i<l;i++){
		    if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))&&zm>0){
			    zm--;
		        cout<<s[i];
		        continue;
	    	}
	    	if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))&&zm==0){
		        printf(".");
		        continue;
		    }
		    cout<<s[i];
		}
	}
	else{
		int tt=t;
	    t/=3;
	    if(tt-t*3==2)
	        t++;
	    for(int i=0;i<l;i++){
		    if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))&&t>0){
			    t--;
		        printf("%c",s[i]);
		        continue;
	    	}
	    	if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))&&t==0){
	    		if(!(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
		            printf(".");
		        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		            cout<<s[i];
		        continue;
		    }
		    cout<<s[i];
		}
	}
	return 0;
}

