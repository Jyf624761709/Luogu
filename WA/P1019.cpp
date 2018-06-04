#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	freopen("P1019.in","r",stdin);
	freopen("P1019.out","w",stdout);
    char word[10005],c;
    string ans;
    int n,lena,ansl,lenw,i,j,max,l;
    scanf("%d\n",&n);
    n--;
    scanf("%s\n",word);
    ans+=word;
    cout<<n<<endl;
    while(n--){
    	max=-1;
    	lena=ans.length()-1;
    	scanf("%s\n",word);
    	lenw=strlen(word);
    	if(lena+1>=lenw)
    	    l=lenw;
    	else
    	    l=lena+1;
    	for(i=0;i<l;i++){
    		for(j=0;j<=i;j++)
    		    if(ans[lena-j]!=word[i-j])
    		        break;
    		if(j>i)
    		    max=i;
    	}
    	for(int j=max+1;j<lenw;j++)
    	    ans+=word[j];
    	cout<<ans<<endl;
    }
    scanf("%c",&c);
	for(i=0;i<lena;i++){
		if(ans[i]==c){
			printf("%d",lena-i+1);
		    return 0;
		}
	}
}


