#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t,i,k,count,a,j,s;
int M,x,y,d;
cin>>t;
while(t--)
{
int H[101]={0};
cin>>M>>x>>y;
k=x*y;
count=0;
for(i=0;i<M;i++)
 {
 cin>>a;
  H[a]++;
     for(j=a+1;j<=(a+k) and j<=100;j++)
         H[j]++;
      s=a-1;
     d=k;
     while(d-- and s>=1)
        {
         H[s]++;
         s--;
        }
}
for(i=1;i<101;i++)
{
if(H[i]==0)
  count++;
}
cout<<count<<endl;

}
return 0;
}
