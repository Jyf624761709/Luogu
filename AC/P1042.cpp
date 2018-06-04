#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
int main(){
	int hh11=0,ds11=0,hh21=0,ds21=0,i;
	char sc[1000005];
	for(i=1;;i++){
		scanf("%c",&sc[i]);
		if(sc[i]=='E')
		    break;
		if(i%20==0)
		    scanf("\n");
		if(sc[i]=='W')
		    hh11++;
		if(sc[i]=='L')
			ds11++;
		if((hh11>=11||ds11>=11)&&(hh11-ds11>=2||ds11-hh11>=2)){
		    printf("%d:%d\n",hh11,ds11);
		    hh11=0;
		    ds11=0;
		}
	}
	if((i-1)%11==0)
	    printf("0:0\n\n");
	if((hh11>0)||(ds11>0))
	    printf("%d:%d\n\n",hh11,ds11);
	for(i=1;;i++){
		if(sc[i]=='E')
		    break;
		if(sc[i]=='W')
		    hh21++;
		if(sc[i]=='L')
		    ds21++;
	    if((hh21>=21||ds21>=21)&&(hh21-ds21>=2||ds21-hh21>=2)){
		    printf("%d:%d\n",hh21,ds21);
		    hh21=0;
		    ds21=0;
		}
	}
	if((i-1)%21==0)
	    printf("0:0\n");
	if(hh21>0||ds21>0)
    	printf("%d:%d\n",hh21,ds21);
	return 0;
}

