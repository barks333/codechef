#include<iostream>
using namespace std;
int main()
{
int t,n,i,k=1;
cin>>t;
while(t--)
{
k=1;
cin>>n;
if(n==1)
cout<<"no"<<endl;  
for(i=2;i<n/2;i++)
   {
  if(n%i==0)
         {
     k=0;
      cout<<"no"<<endl; 
      break;
         } 
   }
if(k==1)
cout<<"yes"<<endl;
}
return 0;
}
