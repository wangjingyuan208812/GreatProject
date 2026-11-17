#include<iostream>
using namespace std;
#include<vector> //动态数组
int main()
{
    int n,m;
    cout<<"input m: ";
    cin>>m;
    cout<<"input n: ";
    cin>>n;
    int left=m; //剩余猴子数
    vector<int> monkey(m+1,1);
    int i=1;
    int count=0; //计数器的使用
    while(left>1) //关键判断条件
    {
    if(monkey[i]==1)
    {
       count++;
       if(count==n)
       {
        monkey[i]=0;
        count=0;
        left--;
       }
    }
    i++;
    if(i>m)
    i=1;
    }
    cout<<"king: ";
    for(int j=1;j<=m;j++)
    {
        if(monkey[j]==1)
        cout<<j<<endl;
    }
return 0;
}