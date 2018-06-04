#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
int main(){
	char a1[505],b1[505];
	int lena,lenb,a[505],b[505],jw=0,t;
	scanf("%s\n%s",a1,b1);
	lena=strlen(a1);
	lenb=strlen(b1);
	for(int i=0;i<lena;i++)
	    a[i]=a1[i]-'0';
	for(int i=0;i<lenb;i++)
	    b[i]=b1[i]-'0';
	if(lena>lenb){
		for(int i=lena-1,j=lenb-1;j>=0;i--,j--)
		    b[i]=b[j];
		for(int i=0;i<lena-lenb;i++)
		    b[i]=0;
	    for(int i=lena-1;i>=0;i--){
		    t=a[i];
	    	a[i]=(a[i]+b[i]+jw)%10;
	    	jw=(t+b[i]+jw)/10;
	    }
	    if(jw>0)
	        printf("%d",jw);
	    for(int i=0;i<lena;i++)
		    printf("%d",a[i]);
	}
	if(lena<lenb){
		for(int i=lenb-1,j=lena-1;j>=0;i--,j--)
		    a[i]=a[j];
		for(int i=0;i<lenb-lena;i++)
		    a[i]=0;
		for(int i=lenb-1;i>=0;i--){
		    t=b[i];
	    	b[i]=(b[i]+a[i]+jw)%10;
	    	jw=(t+a[i]+jw)/10;
	    }
	    if(jw>0)
	        printf("%d",jw);
	    for(int i=0;i<lenb;i++)
		    printf("%d",b[i]);
	}
	if(lenb==lena){
		for(int j=lena-1;j>=0;j--){
		    t=b[j];
	    	b[j]=(b[j]+a[j]+jw)%10;
	    	jw=(t+a[j]+jw)/10;
	    }
	    if(jw>0)
	        printf("%d",jw);
	    for(int i=0;i<lenb;i++)
		    printf("%d",b[i]);
	}
	return 0;
}

