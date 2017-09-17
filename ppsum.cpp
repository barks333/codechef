#include<iostream>
using namespace std;
int sum(int b)
{
b=(b*(b+1))/2;
return b;
}
int main()
{
int t,a,b,i;
cin>>t;
while(t--)
{
cin>>a>>b;
for(i=0;i<a;i++)
     {
b=sum(b);
     }
cout<<b<<endl;
}
return 0;
}

