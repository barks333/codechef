#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t,a,o,g,k;
cin>>t;
while(t--)
{
cin>>a>>o>>g;
k=0;
k=abs(a-o);
     if(g>k)
       cout<<0<<endl;
     else
       cout<<abs(g-k)<<endl;
  }
return 0;
}
