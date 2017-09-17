#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n,i=0,a,b,max=0,k,ply;
cin>>n;
int sum1=0,sum2=0;
while(i<n)
 {
 cin>>a>>b;
 sum1+=a;
 sum2+=b;
 if(sum1>sum2)
  {
   k=sum1-sum2;
    if(k>max)
    {
   max=k;
   ply=1;
    }      
  }
 else
  {
  k=b=sum2-sum1;
    if(k>max)
     {
     max=k; 
     ply=2;
     }
  }
i++;
 }
cout<<ply<<" "<<max<<endl;


return 0;
}
