#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=100005;
int main(){
	char a[N],b[N],c;
	int n,an[N],bn[N],la,lb,jw=0,y;
	scanf("%d\n%s\n%s",&n,a,b);
	la=strlen(a);
	lb=strlen(b);
	for(int i=0;i<la;i++){
		if(a[i]<='9')
	        an[i]=a[i]-'0';
	    else
	        an[i]=a[i]-'a'+10;
	}
	for(int i=0;i<lb;i++){
	    if(b[i]<='9')
	        bn[i]=b[i]-'0';
	    else
	        bn[i]=b[i]-'a'+10;
	}
	if(la>=lb){
	    for(int i=la-1,j=lb-1;j>=0;i--,j--)
	        bn[i]=bn[j];
	    for(int i=0;i<la-lb;i++)
	        bn[i]=0;
	    for(int i=la-1;i>=0;i--){
	    	y=an[i];
	    	an[i]=(an[i]+bn[i]+jw)%n;
	    	jw=(y+bn[i]+jw)/n;
	    }
	    if(jw>0&&jw<10)
	        printf("%d",jw);
	    if(jw>=10){
	    	c=jw-10+'a';
	    	printf("%c",c);
	    }
	    for(int i=0;i<la;i++){
	    	if(an[i]>=0&&an[i]<10)
	            printf("%d",an[i]);
	        if(an[i]>=10){
	        	c=an[i]-10+'a';
	        	printf("%c",c);
	        }
	    }
	}
	if(la<lb){
		for(int i=lb-1,j=la-1;j>=0;i--,j--)
	        an[i]=an[j];
	    for(int i=0;i<lb-la;i++)
	        an[i]=0;
	    for(int i=lb-1;i>=0;i--){
	    	y=bn[i];
	    	bn[i]=(an[i]+bn[i]+jw)%n;
	    	jw=(y+an[i]+jw)/n;
	    }
	    if(jw>0&&jw<10)
	        printf("%d",jw);
	    if(jw>=10){
	    	c=jw-10+'a';
	    	printf("%c",c);
	    }
	    for(int i=0;i<lb;i++){
	    	if(bn[i]>=0&&bn[i]<10)
	            printf("%d",bn[i]);
	        if(bn[i]>=10){
	        	c=bn[i]-10+'a';
	        	printf("%c",c);
	        }
	    }
	}
	return 0;
} 

