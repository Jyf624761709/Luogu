#include <cstdio>
#include <algorithm>
using namespace std;
const int N=1005, M=105;
int DP[N][N], sum[N], a[M];
int main(){
    int n, m;
    scanf("%d %d", &n, &m);  
    for (int i=1; i<=m; i++)  
        scanf("%d", &a[i]);  
    sort(a+1, a+m+1);    
    for (int i=1; i<=m; i++)  
        sum[i]=a[i]-i;  
    sum[m+1]=n-m;  
    for (int i=1; i<M; i++)
        for (int j=1; j<M; j++)
            DP[i][j]=1<<20;
    for (int i=1; i<M; i++)
        DP[i][i]=0;
    for (int i=m+1; i>=1; i--)  
        for (int j=i+1; j<=m+1; j++)  
            for (int k=i; k<j; k++)
                  DP[i][j]=min(DP[i][j],
                          DP[i][k]+DP[k+1][j]+sum[j]-sum[i-1]+j-i-1); 
    printf("%d\n", DP[1][m+1]);
    return 0;
}

