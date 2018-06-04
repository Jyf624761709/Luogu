#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char ts[1005];
int s[1005];
int l;
inline bool ph(){
	bool pd=1;
	for(int i=1,j=l;i<j;i++,j--)
	    if(s[i]!=s[j]){
	    	pd=0;
	    	break;
	    }
	if(pd==1)
	    return 1;
	else
	    return 0;
}
inline void work(){
	gets(ts);
    l=strlen(ts);
    for(int i=1;i<=l;i++)
        s[i]=ts[i-1]-'0';
	bool pd=ph();
    if(pd==1){
    	if(l%2==1){
    		if(s[l/2+1]<9){
    		    s[l/2+1]++;
    	        for(int i=1;i<=l;i++)
    		        printf("%d",s[i]);
    	    	return;
    		}
    		else{
    			int id=0;
    			for(int i=l/2+1;i>=1;i--){
    				if(s[i]<9){
    					id=i;
    					break;
    				}
    			}
    			if(id>0){
    				s[id]++;
    				for(int i=id+1;i<=l/2+1;i++)
    				    s[i]=0;
    				for(int i=l/2+2;i<=l;i++)
    				    s[i]=s[l-i+1];
    				for(int i=1;i<=l;i++)
    				    printf("%d",s[i]);
    				return;
    			}
    			if(id==0){
    				printf("1");
    				for(int i=1;i<=l-1;i++)
    				    printf("0");
    				printf("1");
    				return;
    			}
    		}
    	}
    	if(l%2==0){
    		if(s[l/2]<9){
    		    s[l/2]++;
    		    s[l/2+1]++;
    	        for(int i=1;i<=l;i++)
    		        printf("%d",s[i]);
    	    	return;
    		}
    		else{
    			int id=0;
    			for(int i=l/2;i>=1;i--){
    				if(s[i]<9){
    					id=i;
    					break;
    				}
    			}
    			if(id>0){
    				s[id]++;
    				for(int i=id+1;i<=l/2+1;i++)
    				    s[i]=0;
    				for(int i=l/2+2;i<=l;i++)
    				    s[i]=s[l-i+1];
    				for(int i=1;i<=l;i++)
    				    printf("%d",s[i]);
    				return;
    			}
    			if(id==0){
    				printf("1");
    				for(int i=1;i<=l-1;i++)
    				    printf("0");
    				printf("1");
    				return;
    			}
    		}
    	}
    }
    else{
    	if(l%2==1){
    		bool pd;
    		for(int i=l/2,j=l/2+2;i>=1;i--,j++){
    		    if(s[i]>s[j]){
    		    	pd=1;
    		    	break;
    		    }
    		    if(s[i]<s[j]){
    		    	pd=0;
    		    	break;
    		    }
    		}
    		if(pd==0){
    			int id=0;
    			for(int i=l/2+1;i>=1;i--){
    			    if(s[i]<9){
    			    	id=i;
    			    	break;
    			    }
    			    else
    			        s[i]=0;
    			}
    			s[id]++;
    		}
    		for(int i=l/2,j=l/2+2;i>=1;i--,j++)
    			s[j]=s[i];
    		for(int i=1;i<=l;i++)
    		   printf("%d",s[i]);
    		return;
    	}
        if(l%2==0){
        	bool pd;
    		for(int i=l/2,j=l/2+1;i>=1;i--,j++){
    		    if(s[i]>s[j]){
    		    	pd=1;
    		    	break;
    		    }
    		    if(s[i]<s[j]){
    		    	pd=0;
    		    	break;
    		    }
    		}
    		if(pd==0){
    			int id=0;
    			for(int i=l/2;i>=1;i--){
    			    if(s[i]<9){
    			    	id=i;
    			    	break;
    			    }
    			    else
    			        s[i]=0;
    			}
    			s[id]++;
    		}
    		for(int i=l/2,j=l/2+1;i>=1;i--,j++)
    			s[j]=s[i];
    		for(int i=1;i<=l;i++)
    		   printf("%d",s[i]);
    		return;
        }
    }
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
        work();
		puts("");
	}
	return 0;
}

