#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int j,t,n,i,temp;
cin>>t;
while(t--)
{
cin>>n;
vector<int>a;
a.resize(n);
for(i=0;i<a.size();i++)
 {
 cin>>a[i]; 
}
for(i=0;i<a.size();i++)
 {
   for(j=i;j<a.size();j++)
    {
      if(a[i]>a[j])
             {
      temp=a[i];
       a[i]=a[j];
       a[j]=temp;
             }
     }
}
cout<<a[0]+a[1]<<endl;
}
return 0;
}
