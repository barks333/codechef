#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t,i=0,b,ls;
cin>>t;
while(i<t)
{
cin>>b>>ls;
cout<<sqrt(ls*ls-b*b)<<" "<<sqrt(ls*ls + b*b)<<endl;
i++;
}
return 0;
}
