#include<iostream>
using namespace std;
#include<string>

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    for(int i=1;i<len+1;++i) //遍历周期
    {
        bool isP=0;
     if(len%i==0)
     {
        isP=1;
        for(int k=0;k<len;++k)
        {
            if(s[k]!=s[k%i]) //关键一步，验证相等
            {
            isP=0;
            break;
            }
        }
     }
     if(isP)
     {
     cout<<i<<endl;
     break;
     }
    }
    return 0;
}