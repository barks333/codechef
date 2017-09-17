#include<iostream>
using namespace std;
int main()
{
int t,i,k=0;
char a[10],s[10];
cin>>t;
while(t--)
{
cin>>a;
cin>>s;
k=0;
for(i=0;s[i]!='\0';i++)
  {
    if(a[i]==s[i] || a[i]=='?' || s[i]=='?')
      {
      k=1;
      }
    else
     {
     k=0;
     break;
     }
 }
if(k==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
