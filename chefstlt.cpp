#include<iostream>
using namespace std;
int main()
{
int t,i,m=0,k;
char s1[101],s2[101];
cin>>t;
while(t--)
{
cin>>s1;
cin>>s2;
m=0;
k=0;
for(i=0;s1[i]!='\0';i++)
 {
    if(s1[i]=='?' || s2[i]=='?')
     m++;
    else
      {
     if(s1[i]!=s2[i])
         { 
         k++;
         m++;
         }
      }
}
cout<<k<<" "<<m<<endl;

}
return 0;
}
