#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    char mi[105],wz[105],jm[105],py[30],c;
    int l;
    memset(py,'0',sizeof(py));
    scanf("%s\n%s\n%s",mi,jm,wz);
    l=strlen(mi);
    for(int i=0;i<l;i++){
    	if(py[mi[i]-'A'+1]!=jm[i]&&py[mi[i]-'A'+1]>='A'&&py[mi[i]-'A'+1]<='Z'){
    	    printf("Failed\n");
    	    return 0;
		}
		for(int j=1;j<=26;j++){
			c=j-1+'A';
			if(c!=mi[i])
			    if(py[j]==jm[i]){
				    printf("Failed\n");
				    return 0;
			    }
		}
		py[mi[i]-'A'+1]=jm[i];
    }
    l=strlen(wz);
    for(int i=1;i<=26;i++)
        if(py[i]=='0'){
			printf("Failed\n");
			return 0;
	    }
    for(int i=0;i<l;i++)
        printf("%c",py[wz[i]-'A'+1]);
	return 0;
}

