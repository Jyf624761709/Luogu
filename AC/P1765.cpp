#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	char a[210],l;
	int w[30],s=0;
	w[1]=1;w[2]=2;w[3]=3;w[4]=1;w[5]=2;w[6]=3;w[7]=1;w[8]=2;w[9]=3;w[10]=1;w[11]=2;w[12]=3;
	w[13]=1;w[14]=2;w[15]=3;w[16]=1;w[17]=2;w[18]=3;w[19]=4;w[20]=1;w[21]=2;w[22]=3;w[23]=1;w[24]=2;w[25]=3;w[26]=4;
	gets(a);
	l=strlen(a);
	for(int i=0;i<l;i++){
		if(a[i]==32)
		    s++;
		else
		    s+=w[a[i]-96];
	}
	printf("%d",s);
	return 0;
}
