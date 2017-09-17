#include<iostream>
using namespace std;
int main()
{
int t,n,i,k=0;
cin>>t;
while(t--)
{
cin>>n;
int a[n],b[n];
k=0;
for(i=0;i<n;i++)
  cin>>a[i];
for(i=0;i<n;i++)
  {
  cin>>b[i];
   if(a[i]*b[i]>a[k]*b[k])
    k=i;
  else if(a[i]*b[i]==a[k]*b[k])
     if(b[i]>b[k])
        k=i;
  }
cout<<k+1<<endl;
}
return 0;
}

