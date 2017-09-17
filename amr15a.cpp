#include<iostream>
using namespace std;
int main()
{
int t,k=0,m=0,a;
cin>>t;
while(t--)
{
cin>>a;
if(a%2==0)
 k++;
else
 m++;
}
if(k>m)
cout<<"READY FOR BATTLE"<<endl;
else
cout<<"NOT READY"<<endl;
return 0;
}
