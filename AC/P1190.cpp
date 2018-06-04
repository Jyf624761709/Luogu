#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n,m,w[10005],i,to=0,s=0,j,t,min;
	scanf("%d %d\n",&n,&m);
	for(i=1;i<=n;i++)
	    scanf("%d",&w[i]);
	while(1){
		for(i=1;i<=n;i++){
		    if(w[i]>0)
		        s++;
		    if(s==1&&w[i]>0)
		        min=w[i];
		    if(s==m)
		    	break;
		}
		t=s;
		if(s<m){
		    for(i=1;i<=n;i++){
			    if(w[i]>0){
				   s--;
				   if(w[i]<min)
				       min=w[i];
			    }
			    if(s==0)
			        break;
			}
		}
		for(i=1;i<=n;i++){
			if(w[i]>0){
				s--;
				if(w[i]<min)
				    min=w[i];
			}
			if(s==0)
			    break;
		}
		to+=min; 
		for(j=1;j<=n;j++){
			if(w[j]>0){
				w[j]-=min;
				t--;
			}
			if(t==0)
			    break;
	    }
	    s=0;
	    for(j=1;j<=n;j++)
	    	if(w[j]>0)
	    	    break;
	    if(j>n){
		    printf("%d",to);
		    break;
	    }
	}
	return 0;
}

