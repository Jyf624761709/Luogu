#include <iostream>
#include <string>        
using namespace std;
int N=0,index=0,length=0; 
inline void conversion(string &a){
    for(int i=0;a[i]!='\0';i++)
        if(a[i]>='A'&&a[i]<='Z')
            a[i]+=32;
}
int main(){
    char temp;
    string str1,str2;
    cin>>str1;              
    while(cin.peek()!='\n')
        cin.get();
    cin.get();        
    conversion(str1);       
    bool count=0;        
    while(cin.peek()!='\n'){
        temp=cin.peek();      
        if(temp==' '){
            cin.get();
            length++;
            continue;
        }
        count=0;
        cin>>str2;
        length+=str2.length();
        conversion(str2);
        if(str1==str2){
            N++;
            count=1;
        }
        if(count&&N==1)
            index=length-str2.length();
    }
    if(N==0)
        cout<<N-1;
    else
        cout<<N<<" "<<index; 
    return 0;    
} 

