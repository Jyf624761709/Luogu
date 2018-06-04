#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char ts[105];
int s[105];
int l;
bool ph(){
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
int main(){
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
    	    	return 0;
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
    				return 0;
    			}
    			if(id==0){
    				printf("1");
    				for(int i=1;i<=l-1;i++)
    				    printf("0");
    				printf("1");
    				return 0;
    			}
    		}
    	}
    	if(l%2==0){
    		if(s[l/2]<9){
    		    s[l/2]++;
    		    s[l/2+1]++;
    	        for(int i=1;i<=l;i++)
    		        printf("%d",s[i]);
    	    	return 0;
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
    				return 0;
    			}
    			if(id==0){
    				printf("1");
    				for(int i=1;i<=l-1;i++)
    				    printf("0");
    				printf("1");
    				return 0;
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
    		return 0;
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
    		return 0;
        }
    }
	return 0;
}


