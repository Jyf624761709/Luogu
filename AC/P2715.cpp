#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
using namespace std;
typedef long long ll;
int id=0,f;
double ans,a=0,b=0;
void input(){
	char c;
	while(scanf("%c",&c)!=EOF){
		if(c=='?')
			id=1;
		if(c=='+'){
			f=1;
			break;
		}
		if(c=='-'){
			f=2;
			break;
		}
		if(c=='*'){
			f=3;
			break;
		}
		if(c=='/'){
			f=4;
			break;
		}
		if('0'<=c&&c<='9')
		    a=a*10+c-'0';
	}
	while(scanf("%c",&c)!=EOF){
		if(c=='?')
			id=2;
		if(c=='=')
			break;
		if(id==1)
		    if('0'<=c&&c<='9')
		        a=a*10+c-'0';
		if(id==0)
			if('0'<=c&&c<='9')
		        b=b*10+c-'0';
	}
	while(scanf("%c",&c)!=EOF){
		if(c=='?')
			id=3;
		if('0'<=c&&c<='9')
		    b=b*10+c-'0';
	}
}
int main(){
	input();
	if(f==1){
		if(id==1)
			printf("%.2lf\n",b-a);
		if(id==2)
			printf("%.2lf\n",b-a);
		if(id==3)
			printf("%.2lf\n",a+b);
		return 0;
	}
	if(f==2){
		if(id==1)
			printf("%.2lf\n",a+b);
		if(id==2)
			printf("%.2lf\n",a-b);
		if(id==3)
			printf("%.2lf\n",a-b);
		return 0;
	}
	if(f==3){
		if(id==1)
			printf("%.2lf\n",b/a);
		if(id==2)
			printf("%.2lf\n",b/a);
		if(id==3)
			printf("%.2lf\n",a*b);
		return 0;
	}
	if(f==4){
		if(id==1)
			printf("%.2lf\n",a*b);
		if(id==2)
			printf("%.2lf\n",a/b);
		if(id==3)
			printf("%.2lf\n",a/b);
		return 0;
	}
}

