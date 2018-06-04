#include<cstdio>
int main(){
	int many,xiao,da,ans=0,len,a[10005];
    scanf("%d %d",&len,&many);
    for(int f=0;f<=len;f++)
        a[f]=5;
    for(int i=1;i<=many;i++){
        scanf("%d %d",&xiao,&da);
        for(int j=xiao;j<=da;j++)
            a[j]=4;
    }
    for(int k=0;k<=len;k++){
        if(a[k]==5){
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}


