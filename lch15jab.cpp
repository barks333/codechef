#include<iostream>
using namespace std;
int main()
{
int t,a1=0,a2=0,a3=0,k,i;
char s[52],b,a;
cin>>t;
while(t--)
{
cin>>s;
a=s[0];
k=0;
a1=0;
a2=0;
a3=0;
for(i=0;s[i]!='\0';i++)
  { 
    if(k==0)
        {  
        if(a!=s[i])
             {
              b=s[i];
              k++;
             }

         }
    if(a==s[i])
       a1++;
   else if(b==s[i])
     a2++;
   else
     a3++;
}
if( (a1 == a2+a3) || (a2==a1+a3) || (a3==a1+a2))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
} 
return 0;
}
