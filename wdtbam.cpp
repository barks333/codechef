#include<iostream>
using namespace std;
int main()
{
int t,n,i,j,k,m;
cin>>t;
while(t--)
{
k=0;
cin>>n;
char A[n];
char B[n];
int C[n+1];
for(i=0;i<n;i++)
 cin>>A[i];
for(j=0;j<n;j++)
 cin>>B[j];
for(i=0;i<(n+1);i++)
   cin>>C[i];
k=0;
for(i=0;i<n;i++)
   {
    
   if(A[i]==B[i])
      k++;  
    }
    if(k==n)
      cout<<C[n]<<endl;
     else
      {
      m=C[0];
      for(j=1;j<=k;j++)
         {
          if(C[j]>m)
           m=C[j];
          }
       cout<<m<<endl;
        }

    
   }
return 0;
}

