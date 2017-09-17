#include<iostream>
using namespace std;
int main()
{
int t,i,a=0,b=0;
char str[101];
cin>>t;
while(t--)
{
cin>>str;
a=0;
b=0;
  for(i=0;str[i]!='\0';i++)
       {
          if(str[i]=='a')
                a++;
          else if(str[i]=='b')
                b++;
       }
if(a==0 ||b==0)
cout<<0<<endl;
else if(a>=b)
cout<<b<<endl;
else if(a<b)
cout<<a<<endl;
}
return 0;
}
