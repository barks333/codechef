#include<iostream>
using namespace std;
int gcd(int a,int b)
 {
int m,n;   
if(a>=b)
    {
    m=b;
    n=a;
    }
else
    {
    m=a; 
    n=b;
    }
if(m==0)
  return n;
else
  return (gcd(m,n%m));  
 
}
int main()
{
int z,t,a,b,k;
cin>>t;
while(t--)
{
cin>>a;
cin>>b;
z=gcd(a,b);
k=(a*b)/z;
cout<<z<<" "<<k<<endl;
}
return 0;
}
