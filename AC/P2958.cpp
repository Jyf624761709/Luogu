#include<cstdio>
int a[42][42],r,c,i,j;
int dfs(int x,int y){
    if(x==r&&y==c)return a[x][y];
    int num=a[x][y],px=x-1,py=y;
    a[x][y]=0;
    if(a[x+1][y]>a[px][py])px=x+1,py=y;
    if(a[x][y-1]>a[px][py])px=x,py=y-1;	
    if(a[x][y+1]>a[px][py])px=x,py=y+1;
    return num+dfs(px,py);
}
int main(){
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++)
            scanf("%d",a[i]+j);
    printf("%d",dfs(1,1));
    return 0;
}

