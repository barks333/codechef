#include<iostream>
using namespace std;
int main()
{
int t,i,k,d;
cin>>t;
while(t>0)
{
cin>>i;
k=i%10; 
while(i>0)
  {
   d=i%10;
   i=i/10;
  }
cout<<k+d<<endl;
t--;
}
return 0;
}
