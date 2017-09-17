#include<iostream>
using namespace std;
int main()
{
int t,i=0,n,A[100],k;
int min=0;
cin>>t;
while(i<t)
{
cin>>n;
int d=0;
for(k=0;k<n;k++)
 {
cin>>A[k];
  if(k==0)  
   min=A[k];
  if(min>=A[k])
    min=A[k]; 
 }
for(k=0;k<n;k++)
 { 
   if(A[k]%min==0)
   {
      d=1;
   }
   else
   {
    d=0;
    break;
   }
 }
for(k=0;k<n;k++)
{
   if(d==1)
   cout<<(A[k]/min)<<" ";
   else
   cout<<A[k]<<" ";
}
cout<<endl;
i++;
}
return 0;
}
