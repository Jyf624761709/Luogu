#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int l,js=0;
    char s[10];
    bool p=1;
    scanf("%s",s);
    l=strlen(s);
    if(l>6){
        printf("0");
        return 0;
    }
    for(int i=0;i<l-1;i++)
        for(int j=i+1;j<l;j++)
            if(s[i]==s[j]){
                p=0;
                break;
            }
    if(p==0){
        printf("0");
        return 0;
    }
    for(char c='a';c<='z';c++){
        js++;
        if(c==s[0]&&l==1){
            printf("%d",js);
            return 0;
        }
    }//一位数 
    for(char c='a';c<'z';c++){
    	for(char d=c+1;d<='z';d++){
    		js++;
    		if(c==s[0]&&d==s[1]&&l==2){
                printf("%d",js);
                return 0;
            }
    	}
    }//两位数 
    for(char c='a';c<='z';c++){
    	for(char d=c+1;d<='z';d++){
    	    for(char e=d+1;e<='z';e++){
			    js++;
    	    	if(l==3&&c==s[0]&&d==s[1]&&e==s[2]){
                    printf("%d",js);
                    return 0;
                }
    	    }
    	}
    }//三位数 
    for(char c='a';c<='z';c++){
    	for(char d=c+1;d<='z';d++){
    	    for(char e=d+1;e<='z';e++){
    	    	for(char f=e+1;f<='z';f++){
			        js++;
    	        	if(l==4&&c==s[0]&&d==s[1]&&e==s[2]&&f==s[3]){
                        printf("%d",js);
                        return 0;
                    }
                }
    	    }
    	}
    }//四位数 
    for(char c='a';c<='z';c++){
    	for(char d=c+1;d<='z';d++){
    	    for(char e=d+1;e<='z';e++){
    	    	for(char f=e+1;f<='z';f++){
    	    		for(char g=f+1;g<='z';g++){
			            js++;
    	            	if(l==5&&c==s[0]&&d==s[1]&&e==s[2]&&f==s[3]&&g==s[4]){
                            printf("%d",js);
                            return 0;
                        }
                    }
                }
    	    }
    	}
    }//五位数 
    for(char c='a';c<='z';c++){
    	for(char d=c+1;d<='z';d++){
    	    for(char e=d+1;e<='z';e++){
    	    	for(char f=e+1;f<='z';f++){
    	    		for(char g=f+1;g<='z';g++){
    	    			for(char h=g+1;h<='z';h++){
			                js++;
    	                	if(l==6&&h==s[5]&&c==s[0]&&d==s[1]&&e==s[2]&&f==s[3]&&g==s[4]){
                                printf("%d",js);
                                return 0;
                            }
                            
                        }
                    }
                }
    	    }
    	}
    }//六位数
	return 0;
}


