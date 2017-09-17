#include<iostream>
using namespace std;
int main()
{
int t,a,b,i,count=0,m,n,zero=0;
cin>>t;
while(t--)
{
count=0;
zero=0;
cin>>n>>m;
int A[n]={0};
    for(i=0;i<m;i++)
                  {
        cin>>a>>b;
        A[a-1]++;
        A[b-1]++;
                  }
   for(i=0;i<n;i++)
      {
         if(A[i]==0)
               {
               zero++;
             count=1;
               }
           else if(A[i]==1)
                count=1;
            else
               {
                count=0;
                 break; 
                }
     }
if(count==1 and zero%2==0)
  cout<<"yes"<<endl;
else
 cout<<"no"<<endl;         

}
return 0;
}
