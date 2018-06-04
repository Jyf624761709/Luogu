#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n;
    char z[1005][1005],skj[1005][1005];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    	scanf("%s\n",skj[i]);
    for(int i=0;i<n;i++)
        scanf("%s\n",z[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(skj[i][j]=='O')
                printf("%c",z[i][j]);
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--)
            if(skj[j][i]=='O')
                printf("%c",z[i][n-j-1]);
    }
    for(int i=n-1;i>=0;i--)
        for(int j=n-1;j>=0;j--)
            if(skj[i][j]=='O')
                printf("%c",z[n-i-1][n-j-1]);
    for(int i=n-1;i>=0;i--)
        for(int j=0;j<n;j++)
            if(skj[j][i]=='O')
               printf("%c",z[n-i-1][j]);
	return 0;
}


