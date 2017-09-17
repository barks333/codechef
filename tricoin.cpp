#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long long int t,a,b;
cin>>t;
while(t--)
{
cin>>a;
b=sqrt(1+8*a);
cout<<(b-1)/2<<endl;
}
return 0;
}
