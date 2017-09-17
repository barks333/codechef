#include<iostream>
using namespace std;
int gcd(int a,int b)
{
int m,n;
 if(a>b)
  {
   m=b;
  n=a;
  }
else
  {
  m=a;
  n=b;
  }
if(n%m==0)
return m;
else
return gcd(m,n%m);
}
int main()
{
int t,a,b;
cin>>t;
while(t--)
{
int k;
cin>>a>>b;
k=gcd(a,b);
if(a==b)
 cout<<1<<endl;
else
 cout<<(a*b)/(k*k)<<endl;
}
return 0;
}
