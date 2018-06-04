#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
typedef unsigned long long ull;
ull f[1000005];
inline ull qf(ull n){
    f[n]=f[n-1]+f[n-2];
    return f[n];
}
int main(){
    ull n,ff;
    f[1]=(ull)(1);
    cin>>n;
    for(register int i=2;;++i){
        ff=qf(i);
        if(ff>n){
            cout<<"m="<<f[i-2]<<"\n"<<"n="<<f[i-1];
            return 0;
        }
    }
}
