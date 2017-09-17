#include<iostream>
using namespace std;
int main()
{
int t,i,k=0,s=0;
char st[100002];
cin>>t;
while(t--)
{
cin>>st;
k=0;
s=0;
for(i=0;st[i]!='\0';i++)
{
 if(st[i]=='(')
  k++;
 if(st[i]==')')
   k--;
    s=max(s,k);
}
for(i=0;i<s;i++)
cout<<'(';
for(i=0;i<s;i++)
cout<<')';
cout<<endl;
}

return 0;
}
