#include<iostream>
using namespace std;
int main()
{
int n,i=0,k,am=0,a[100000];
while(1)
{
cin>>n;
if(n==0)
 {
break;
 }
if(1<=n && n<=100000)
{
   for(i=1;i<=n;i++)
   cin>>a[i];
    for(i=1;i<=n;i++)
   {
    k=a[i];
    if(a[i]==i || (a[i]+i==a[k]+k))
      {
     am=1;
      }
    else
    {
    am=0;
    break;
    }
  }
    if(am==1)
    cout<<"ambiguous"<<endl;
    else
    cout<<"not ambiguous"<<endl;
}
}
return 0;
}
