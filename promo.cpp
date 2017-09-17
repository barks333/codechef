#include<iostream>
using namespace std;
int main()
{
int A[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
int t,i=0,k,sum,p,o;
cin>>o;
while(i<o)
{
sum=0;
cin>>t;
p=t;
for(k=0;k<11;k++)
 { 
if(A[k]==t)
   {
   cout<<1<<endl;
   break; 
   }
 else
 {
    if(p>=0)
    {    
      if(p>=A[k] and p<A[k+1])
       {
       p=p-A[k];
       sum+=1; 
       k=-1; 
       }
     else if(p==A[k+1])
      {
      p=p-A[k+1];
      sum+=1;
      k=-1;
       }
     else if(p>2048)
       {
       p=p-2048;
       sum+=1;
       k=-1;
       } 
   }
    else
    break; 

 }
}
if(sum>1)
cout<<sum<<endl;
i++;
}

return 0;
}
