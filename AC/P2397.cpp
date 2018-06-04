#include<cstdio>
int n,a,t,js;
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(t==a) ++js;
        if(js==0){
            ++js;
            t=a;
        }
        if(t!=a) --js;
    }
    printf("%d",t);
    return 0;
}

