#include<iostream>
using namespace std;
int main()
{
int t,p,x,y,i;
cin>>t;
while(t--)
{
cin>>p;
for(i=0;i<p;i++)
{
cin>>x>>y;
}
int xori=0;
for(i=1;i<=p;i++)
 {
xori^=i;
 }
cout<<xori<<endl;
}
return 0;
}
