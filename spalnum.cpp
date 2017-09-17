#include<iostream>
using namespace std;
int main()
{
int i,t,a,b,k,sum=0,rem,f=0;
cin>>t;
while(t--)
{
cin>>a>>b;
f=0;
i=a;
   while(i<=b)
   {              
k=i;
sum=0; 
      while(k>0)
       {
      rem=k%10;
      sum=sum*10+rem;
      k=k/10;
         }
     if(sum==i)
  f+=sum;
                 i++;
                 }
cout<<f<<endl;
}

return 0;
}
