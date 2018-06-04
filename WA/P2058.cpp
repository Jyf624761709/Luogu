#include<cstdio>
/*#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	freopen("P2058.in","r",stdin);
	freopen("P2058.out","w",stdout);
	int lenw,lenz,ans=0,dyg=0,js=0,j,i,t=0,t1;
	bool p=0;
	char word[12],wz[1000005];
	scanf("%s\n",word);
	lenw=strlen(word);
	gets(wz);
	lenz=strlen(wz);
	for(i=0;i<lenz;i++)
	    if(wz[i]!=' '){
	    	t1=i;
	    	break;
	    }
	for(i=t1;i<=lenz;i++){
		if(wz[i]==' '||i==lenz){
		    if(js==lenw){
		    	for(j=i-js;j<i;j++){
		    	    if(word[t]!=wz[j]&&(word[t]-'a'+'A')!=wz[j]&&(word[t]-'A'+'a')!=wz[j])
		    	        break;
					t++;
		    	}
		    	if(j==i){
		    	    ans++;
		    	    p=1;
		    	}
		        t=0;
		    }
		    js=0;
		}
		else
		    js++;
		if(p==0)
		    dyg++;
	}
	if(ans>0)
	    printf("%d %d",ans,dyg);
	else
	    printf("-1");
	return 0;
}*/
#include <iostream>
#include <string>        //使用string类处理会非常方便。 
using namespace std;
int N=0,index=0,length=0; //N为单词出现次数，index为第一次出现的位置，
                        //length为单个字母长度。 
void conversion(string &a);//字母转换函数，在此都转换成小写。 
int main()
{
	freopen("P2058.in","r",stdin);
	freopen("P2058.out","w",stdout);
    char temp;
    string str1,str2;
    cin>>str1;                //读入第一行字母 
    while(cin.peek()!='\n')//去掉多余部分 
    {
        cin.get();
    }
    cin.get();            //拿走换行符 
    conversion(str1);        //转换为小写 
    bool count=0;        //辅助标志，第3、行会用到 
    while(cin.peek()!='\n')        //结束条件为在第二行末尾输入了换行符 
    {
        temp=cin.peek();        //观察现在位置是否为空格 
        if(temp==' ')        //是空格就取走 
        {
            cin.get();
            length++;        //即便取走的是空格，位置也一定要加上 
            continue;
        }
        count=0;
        cin>>str2;
        length+=str2.length();        //现在的位置 
        conversion(str2);
        if(str1==str2)
        {
            N++;        //次数+1 
            count=1;
        }
        if(count&&N==1)      //两个逻辑条件保证index记录的一定是第一次出现时的位置 
        {
            index=length-str2.length();
        }
    }
    if(N==0)        //未找到输出整数-1 
    {
        cout<<N-1;
    }
    else
    {
        cout<<N<<" "<<index;        //输出数据 
    } 
    return 0;    
} 
void conversion(string &a)        //转换大小写函数 
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]+=32;
        }
    }
}
