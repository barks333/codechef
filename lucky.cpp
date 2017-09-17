#include<iostream>
using namespace std;
int main()
{
int t,count=0;;
char s[100];
cin>>t;
while(t--)
{
cin>>s;
count=0;
for(int i=0;s[i]!='\0';i++)
   {
  if(s[i]=='4')
   count++;
    }
cout<<count<<endl;

}
return 0;
}
