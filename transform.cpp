#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
int t,i=0,k;
char s[400];
cin>>t;
while(i<t)
{
cin>>s;
stack<char>d;
for(k=0;k<strlen(s);k++)
{
  if(s[k]==')')
     {
        while(d.top()!='(')
          {
           cout<<d.top();
           d.pop();
          }
          d.pop();
     }
    else if (s[k]=='(' || s[k]=='*' || s[k]=='/' || s[k]=='-' ||s[k]=='+' || s[k]=='^')
       d.push(s[k]);
    else
      cout<<s[k];
}
cout<<endl;
i++;
}
return 0;
}
