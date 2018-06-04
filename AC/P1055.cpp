#include<cstdio>
using namespace std;
int main(){
    int ans=0,i,t=1;
	char b[30];
	for(i=0;i<=12;i++){
	    b[i]=getchar();
	    if(b[i]!='-'&&i<=10){
	    	if(b[i]!='X')
	            ans+=(int)(b[i]-'0')*t;
	        else
	            ans+=10*t;
	        t++;
	    }
	}
	ans%=11;
	if(ans==b[12]-'0')
	    printf("Right");
	if(ans==10&&b[12]=='X')
	    printf("Right");
	if(ans!=b[12]-'0'&&b[12]!='X'){
		for(i=0;i<=11;i++)
		    putchar(b[i]);
		if(ans!=10)    
			printf("%d",ans);
		else
			printf("X");
	}
	if(ans!=10&&b[12]=='X'){
	    for(i=0;i<=11;i++)
		    putchar(b[i]);
		printf("%d",ans);
	}
	return 0;
}

