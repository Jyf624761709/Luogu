#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool cmp(int a,int b){
	return a*100+b<b*100+a;
}
int main(){
	char s[10002],l;
	int ans[10],i=1;
	memset(ans,100,sizeof(ans));
	for(int j=1;j<=6;j++){
		scanf("%s",s);
	    l=strlen(s);
		if(s[0]=='o'&&s[1]=='n'&&s[2]=='e'&&l==3)
			ans[i]=1;
		if(s[0]=='t'&&s[1]=='w'&&s[2]=='o'&&l==3)
			ans[i]=4;
		if(l==5&&s[0]=='t'&&s[1]=='h'&&s[2]=='r'&&s[3]=='e'&&s[4]=='e')
			ans[i]=9;
		if(l==4&&s[0]=='f'&&s[1]=='o'&&s[2]=='u'&&s[3]=='r')
			ans[i]=16;
		if(l==4&&s[0]=='f'&&s[1]=='i'&&s[2]=='v'&&s[3]=='e')
			ans[i]=25;
		if(l==3&&s[0]=='s'&&s[1]=='i'&&s[2]=='x')
			ans[i]=36;
		if(l==5&&s[0]=='s'&&s[1]=='e'&&s[2]=='v'&&s[3]=='e'&&s[4]=='n')
			ans[i]=49;
		if(l==5&&s[0]=='e'&&s[1]=='i'&&s[2]=='g'&&s[3]=='h'&&s[4]=='t')
			ans[i]=64;
		if(l==4&&s[0]=='n'&&s[1]=='i'&&s[2]=='n'&&s[3]=='e')
			ans[i]=81;
		if(l==3&&s[0]=='t'&&s[1]=='e'&&s[2]=='n')
			ans[i]=0;
		if(l==6&&s[0]=='e'&&s[1]=='l'&&s[2]=='e'&&s[3]=='v'&&s[4]=='e'&&s[5]=='n')
			ans[i]=21;
		if(l==6&&s[0]=='t'&&s[1]=='w'&&s[2]=='e'&&s[3]=='l'&&s[4]=='v'&&s[5]=='e')
			ans[i]=44;
		if(l==8&&s[0]=='t'&&s[1]=='h'&&s[2]=='i'&&s[3]=='r'&&s[4]=='t'&&s[5]=='e'&&s[6]=='e'&&s[7]=='n')
			ans[i]=69;
		if(l==8&&s[0]=='f'&&s[1]=='o'&&s[2]=='u'&&s[3]=='r'&&s[4]=='t'&&s[5]=='e'&&s[6]=='e'&&s[7]=='n')
			ans[i]=14*14%100;
		if(l==7&&s[0]=='f'&&s[1]=='i'&&s[2]=='f'&&s[3]=='t'&&s[4]=='e'&&s[5]=='e'&&s[6]=='n')
			ans[i]=15*15%100;
		if(l==7&&s[0]=='s'&&s[1]=='i'&&s[2]=='x'&&s[3]=='t'&&s[4]=='e'&&s[5]=='e'&&s[6]=='n')
			ans[i]=16*16%100;
		if(l==9&&s[0]=='s'&&s[1]=='e'&&s[2]=='v'&&s[3]=='e'&&s[4]=='n'&&s[5]=='t'&&s[6]=='e'&&s[7]=='e'&&s[8]=='n')
			ans[i]=17*17%100;
		if(l==8&&s[0]=='e'&&s[1]=='i'&&s[2]=='g'&&s[3]=='h'&&s[4]=='t'&&s[5]=='e'&&s[6]=='e'&&s[7]=='n')
			ans[i]=18*18%100;
		if(l==8&&s[0]=='n'&&s[1]=='i'&&s[2]=='n'&&s[3]=='e'&&s[4]=='t'&&s[5]=='e'&&s[6]=='e'&&s[7]=='n')
			ans[i]=19*19%100;
		if(l==6&&s[0]=='t'&&s[1]=='w'&&s[2]=='e'&&s[3]=='n'&&s[4]=='t'&&s[5]=='y')
			ans[i]=20*20%100;
		if(l==1&&s[0]=='a')
			ans[i]=1;
		if(s[0]=='b'&&l==4&&s[1]=='o'&&s[2]=='t'&&s[3]=='h')
			ans[i]=4;
		if(l==7&&s[0]=='a'&&s[1]=='n'&&s[2]=='o'&&s[3]=='t'&&s[4]=='h'&&s[5]=='e'&&s[6]=='r')
			ans[i]=1;
		if(l==5&&s[0]=='f'&&s[1]=='i'&&s[2]=='r'&&s[3]=='s'&&s[4]=='t')
			ans[i]=1;
		if(l==6&&s[0]=='s'&&s[1]=='e'&&s[2]=='c'&&s[3]=='o'&&s[4]=='n'&&s[5]=='d')
			ans[i]=4;
		if(l==5&&s[0]=='t'&&s[1]=='h'&&s[2]=='i'&&s[3]=='r'&&s[4]=='d')
			ans[i]=9;
		if(ans[i]<=99)
			i++;
	}
	sort(ans+1,ans+i,cmp);
	if(i==1){
		printf("0");
		return 0;
	}
	printf("%d",ans[1]);
	for(int j=2;j<i;j++){
		if(ans[j]<=9)
			printf("0");
		printf("%d",ans[j]);
	}
	return 0;
}
