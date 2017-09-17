#include<iostream>
using namespace std;
int main()
{
int i,t,k=2,n,d=0;
char s[1000];
cin>>t;
while(d<t)
{ 
cin>>n;
i=0;  
cin>>s;      
k=2;
 while(i<n)
      {
if(s[i]=='I')
             {
       k=0;
       cout<<"INDIAN"<<endl;
        break; 
             }
        if(s[i]=='Y')
        k=1;
        i++;
        }
if(k==1)
cout<<"NOT INDIAN"<<endl;
else if(k==2)
cout<<"NOT SURE"<<endl;
d++;
}
return 0;
}
