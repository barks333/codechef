#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t,out=0,a,i,j,n;
cin>>t;
while(t--)
{
cin>>n;
int out=0;
vector<int> a;
a.resize(n);
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
 {
 int s=0;
 int p=1;
   for(j=i;j>=0;j--)
         {
         s+=a[j];
         p*=a[j];
        if(s==p)
         out++; 
         }
 }
cout<<out<<endl;
}
return 0;
}
