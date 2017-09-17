#include<iostream>
using namespace std;
int main()
{
int t,n,k,j,i;
cin>>t;
while(t--)
{
cin>>n>>k;
int a[n][k];
int A[k+1]={0};
  for(i=1;i<=k;i++)
cout<<i<<" "<<A[i]<<endl;
   for(i=0;i<n;i++)
       {
           for(j=0;j<k;j++)
                  {
                 if(i==0 and j==0)
                 {
                       cin>>a[i][j]; A[a[i][j]]++;
}else
{
                 a[i][j]=cin.get();
                   if(a[i][j]=='\n')
                    cout<<"pressed enter:-";
                    else
                    A[a[i][j]]++;
                    }
       }
}
for(i=1;i<=k;i++)
             {
if(A[i]==0)
cout<<"sad"<<endl;
             }

}
return 0;
}
