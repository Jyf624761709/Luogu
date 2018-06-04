#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
int ans=0;
int n,t=1;
const int N=1000002;
int an[N][12];
void dfs(){
	int a,b,c,d,e,f,g,h,i,j;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++)
				for(d=1;d<=3;d++)
					for(e=1;e<=3;e++)
						for(f=1;f<=3;f++)
							for(g=1;g<=3;g++)
								for(h=1;h<=3;h++)
									for(i=1;i<=3;i++)
										for(j=1;j<=3;j++)
											if(a+b+c+d+e+f+g+h+i+j==n){
												ans++;
												an[ans][1]=a;
												an[ans][2]=b;
												an[ans][3]=c;
												an[ans][4]=d;
												an[ans][5]=e;
												an[ans][6]=f;
												an[ans][7]=g;
												an[ans][8]=h;
												an[ans][9]=i;
												an[ans][10]=j;
											}
}							
int main(){
	scanf("%d",&n);
	if(n<=30){
	dfs();
	printf("%d\n",ans);
	for(int i=1;i<=ans;i++){
		for(int j=1;j<=10;j++)
			printf("%d ",an[i][j]);
		printf("\n");
	}
    }
	else
		printf("0");
	return 0;
}

