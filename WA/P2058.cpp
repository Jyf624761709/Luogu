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
#include <string>        //ʹ��string�ദ���ǳ����㡣 
using namespace std;
int N=0,index=0,length=0; //NΪ���ʳ��ִ�����indexΪ��һ�γ��ֵ�λ�ã�
                        //lengthΪ������ĸ���ȡ� 
void conversion(string &a);//��ĸת���������ڴ˶�ת����Сд�� 
int main()
{
	freopen("P2058.in","r",stdin);
	freopen("P2058.out","w",stdout);
    char temp;
    string str1,str2;
    cin>>str1;                //�����һ����ĸ 
    while(cin.peek()!='\n')//ȥ�����ಿ�� 
    {
        cin.get();
    }
    cin.get();            //���߻��з� 
    conversion(str1);        //ת��ΪСд 
    bool count=0;        //������־����3���л��õ� 
    while(cin.peek()!='\n')        //��������Ϊ�ڵڶ���ĩβ�����˻��з� 
    {
        temp=cin.peek();        //�۲�����λ���Ƿ�Ϊ�ո� 
        if(temp==' ')        //�ǿո��ȡ�� 
        {
            cin.get();
            length++;        //����ȡ�ߵ��ǿո�λ��Ҳһ��Ҫ���� 
            continue;
        }
        count=0;
        cin>>str2;
        length+=str2.length();        //���ڵ�λ�� 
        conversion(str2);
        if(str1==str2)
        {
            N++;        //����+1 
            count=1;
        }
        if(count&&N==1)      //�����߼�������֤index��¼��һ���ǵ�һ�γ���ʱ��λ�� 
        {
            index=length-str2.length();
        }
    }
    if(N==0)        //δ�ҵ��������-1 
    {
        cout<<N-1;
    }
    else
    {
        cout<<N<<" "<<index;        //������� 
    } 
    return 0;    
} 
void conversion(string &a)        //ת����Сд���� 
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]+=32;
        }
    }
}
